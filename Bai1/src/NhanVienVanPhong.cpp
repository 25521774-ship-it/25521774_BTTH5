#include "NhanVienVanPhong.h"
#include <iostream>
using namespace std;
NhanVienVanPhong::NhanVienVanPhong(string HoTen,
                 int NgaySinh,
                 int ThangSinh,
                 int NamSinh,
                 int SoNgayLamViec)
: NhanVien(HoTen, NgaySinh, ThangSinh, NamSinh)
{
    this ->SoNgayLamViec = SoNgayLamViec;
}

NhanVienVanPhong::~NhanVienVanPhong()
{
    //dtor
}
void NhanVienVanPhong::Nhap()
{
    NhanVien::Nhap();

    cout<<"Nhap so ngay lam viec: ";
    cin>>SoNgayLamViec;

    cin.ignore();
}
int NhanVienVanPhong::TinhLuong() const
{
    return SoNgayLamViec * 100000;
}
void NhanVienVanPhong::Xuat() const
{
    NhanVien::Xuat();

    cout<<"\t"
        <<TinhLuong();
}
