#ifndef KHACHHANGA_H
#define KHACHHANGA_H
#include "KhachHang.h"
#include <string>
#include <iostream>

class KhachHangA : public KhachHang
{
    public:
        KhachHangA(int SoLuongHang = 0,
                  int DonGiaHang = 0,
                  double Thue = 0.1,
                  string HoTen = ":");
        virtual ~KhachHangA();
        double TinhTien() const override;
        string GetKhachHang() const override;

    protected:

    private:
};

#endif // KHACHHANGA_H
