#include "KhachHangA.h"
#include <iostream>
#include <string>
#include "KhachHang.h"
using namespace std;
KhachHangA::KhachHangA(int SoLuongHang,
                       int DonGiaHang,
                       double Thue,
                       string HoTen)
: KhachHang(SoLuongHang, DonGiaHang, Thue,HoTen)
{
    //ctor
}

KhachHangA::~KhachHangA()
{
    //dtor
}
double KhachHangA::TinhTien() const
{
    double tien;
    tien = SoLuongHang * DonGiaHang;
    return tien + tien * Thue;
}
string KhachHangA::GetKhachHang() const
{
    return "A";
}
