#include "KhachHang.h"
#include <iostream>
using namespace std;
KhachHang::KhachHang(int SoLuongHang,
                     int DonGiaHang,
                     double Thue,
                     string HoTen)
{
    this->SoLuongHang = SoLuongHang;
    this->DonGiaHang = DonGiaHang;
    this->Thue = Thue;
    this->HoTen = HoTen;
}

KhachHang::~KhachHang()
{
    //dtor
}
void KhachHang::Nhap()
{
    cout<<"Nhap ten khach hang: ";
    getline(cin, HoTen);

    cout<<"Nhap so luong hang: ";
    cin>>SoLuongHang;

    cout<<"Nhap don gia hang: ";
    cin>>DonGiaHang;

    cin.ignore();
}
void KhachHang::Xuat() const
{
    cout<<"Ho ten: "<<HoTen <<endl;
    cout<<"So tien: "<<TinhTien()<< endl;
}

istream& operator >> (istream& is, KhachHang& kh)
{
    kh.Nhap();
    return is;
}

ostream& operator << (ostream& os, const KhachHang& kh)
{
    kh.Xuat();
    return os;
}
