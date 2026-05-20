#ifndef GIAODICHNHAPHO_H
#define GIAODICHNHAPHO_H
#include "GiaoDich.h"
#include <string>
using namespace std;


class GiaoDichNhaPho : public GiaoDich
{
    public:
        GiaoDichNhaPho(int MaGD = 0,
            int Ngay = 0,
            int Thang = 0,
            int Nam = 0,
            int DonGia = 0,
            int DienTich = 0,
            string LoaiNha = "",
            string DiaChi = "");
        virtual ~GiaoDichNhaPho();
        void Nhap() override;
        void Xuat() const override;
        int TinhTien() const override;

    protected:

    private:
        string LoaiNha;
        string DiaChi;
};

#endif // GIAODICHNHAPHO_H
