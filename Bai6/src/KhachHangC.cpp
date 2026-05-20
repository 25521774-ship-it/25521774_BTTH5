#include "KhachHangC.h"

KhachHangC::KhachHangC(int SoLuongHang,
                  int DonGiaHang,
                  double Thue,
                  string HoTen)
: KhachHang(SoLuongHang, DonGiaHang, Thue, HoTen)
{
    //ctor
}

KhachHangC::~KhachHangC()
{
    //dtor
}
double KhachHangC::TinhTien() const
{
    double tien;
    tien = SoLuongHang * DonGiaHang * 0.5;
    return  tien + tien * Thue;
}
string KhachHangC::GetKhachHang() const
{
    return "C";
}
