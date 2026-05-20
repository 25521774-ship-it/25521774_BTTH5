#ifndef KHACHHANG_H
#define KHACHHANG_H
#include <string>
using namespace std;

class KhachHang
{
    public:
        KhachHang(int SoLuongHang = 0,
                  int DonGiaHang = 0,
                  double Thue = 0.1,
                  string HoTen = "");
        virtual ~KhachHang();
        virtual void Nhap();
        void Xuat() const;
        virtual double TinhTien() const = 0;
        virtual string GetKhachHang() const = 0;
        friend istream& operator >> (istream& is, KhachHang& kh);
        friend ostream& operator << (ostream& os, const KhachHang& kh);


    protected:
        int SoLuongHang;
        int DonGiaHang;
        double Thue;
        string HoTen;
    private:
};

#endif // KHACHHANG_H
