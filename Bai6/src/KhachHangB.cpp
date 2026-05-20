#include "KhachHangB.h"
#include "KhachHang.h"
#include <iostream>
using namespace std;
KhachHangB::KhachHangB(int SoLuongHang,
                     int DonGiaHang,
                     double Thue,
                     string HoTen,
                     int SoNamThanThiet)
: KhachHang(SoLuongHang, DonGiaHang, Thue, HoTen)
{
    this->SoNamThanThiet = SoNamThanThiet;
}

KhachHangB::~KhachHangB()
{
    //dtor
}
void KhachHangB::Nhap()
{
    KhachHang::Nhap();
    cout<<"Nhap so nam than thiet: ";
    cin>>SoNamThanThiet;
    cin.ignore();
}
double KhachHangB::TinhTien() const
{
    double tien;
    double MAX = SoNamThanThiet * 0.05;
    if (MAX > 0.5) MAX = 0.5;
    tien = (SoLuongHang * DonGiaHang) * (1 - MAX);
    return  tien + tien * Thue;
}
string KhachHangB::GetKhachHang() const
{
    return "B";
}
