#ifndef KHACHHANGB_H
#define KHACHHANGB_H
#include "KhachHang.h"
#include <string>
using namespace std;

class KhachHangB : public KhachHang
{
    public:
        KhachHangB(int SoLuongHang = 0,
                  int DonGiaHang = 0,
                  double Thue = 0.1,
                  string HoTen = "",
                  int SoNamThanThiet = 0);
        virtual ~KhachHangB();
        void Nhap() override;
        double TinhTien() const override;
        string GetKhachHang() const override;

    protected:

    private:
        int SoNamThanThiet;
};

#endif // KHACHHANGB_H
