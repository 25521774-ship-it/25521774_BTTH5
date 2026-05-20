#include "NhanVien.h"
#include <iostream>
using namespace std;
NhanVien::NhanVien(string HoTen,
    int NgaySinh,
    int ThangSinh,
    int NamSinh)
{
    this->HoTen = HoTen;
    this->NgaySinh = NgaySinh;
    this->ThangSinh = ThangSinh;
    this->NamSinh = NamSinh;
}

NhanVien::~NhanVien()
{
    //dtor
}
void NhanVien::Nhap()
{
    cout<<"Nhap ho ten: ";
    getline(cin, HoTen);

    cout<<"Nhap ngay sinh: ";
    cin>>NgaySinh;

    cout<<"Nhap thang sinh: ";
    cin>>ThangSinh;

    cout<<"Nhap nam sinh: ";
    cin>>NamSinh;
    cin.ignore();
}
void NhanVien::Xuat() const
{
    cout << HoTen << "\t"
         << NgaySinh << "/"
         << ThangSinh << "/"
         << NamSinh;
}
istream& operator >> (istream& is, NhanVien& nv)
{
    nv.Nhap();
    return is;
}
ostream& operator << (ostream& os, const NhanVien& nv)
{
    nv.Xuat();
    return os;
}
int NhanVien::GetNgaySinh() const
{
    return NgaySinh;
}
int NhanVien::GetThangSinh() const
{
    return ThangSinh;
}
int NhanVien::GetNamSinh() const
{
    return NamSinh;
}
