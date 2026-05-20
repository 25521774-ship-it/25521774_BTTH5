#ifndef GIAODICHCC_H
#define GIAODICHCC_H
#include "GiaoDich.h"

class GiaoDichCC : public GiaoDich
{
    public:
        GiaoDichCC(int MaGD = 0,
                int Ngay = 0,
                int Thang = 0,
                int Nam = 0,
                int DonGia = 0,
                int DienTich = 0,
                int MaCanHo = 0,
                int ViTriTang = 0);
        virtual ~GiaoDichCC();
        void Nhap() override;
        void Xuat() const override;
        int TinhTien() const override;

    protected:

    private:
        int MaCanHo;
        int ViTriTang;
};

#endif // GIAODICHCC_H
