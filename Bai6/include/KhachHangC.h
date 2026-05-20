#ifndef KHACHHANGC_H
#define KHACHHANGC_H
#include "KhachHang.h"
#include <string>

class KhachHangC : public KhachHang
{
    public:
        KhachHangC(int SoLuongHang = 0,
                  int DonGiaHang = 0,
                  double Thue = 0.1,
                  string HoTen = "");
        virtual ~KhachHangC();
        double TinhTien() const override;
        string GetKhachHang() const override;
    protected:

    private:
};

#endif // KHACHHANGC_H
