#ifndef GIAODICH_H
#define GIAODICH_H
#include <iostream>
using namespace std;

class GiaoDich
{
    public:
        GiaoDich(int MaGD = 0,
            int Ngay = 0,
            int Thang = 0,
            int Nam = 0,
            int DonGia = 0,
            int DienTich = 0);
        virtual ~GiaoDich();
        virtual void Nhap();
        virtual void Xuat() const;
        virtual int TinhTien() const = 0;
        int GetThang() const;
        friend istream& operator >> (istream& is, GiaoDich& gd);
        friend ostream& operator << (ostream& os, GiaoDich& gd);

    protected:
        int MaGD;
        int Ngay;
        int Thang;
        int Nam;
        int DonGia;
        int DienTich;

    private:
};

#endif // GIAODICH_H
