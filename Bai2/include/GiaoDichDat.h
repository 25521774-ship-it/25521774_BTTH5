#ifndef GIAODICHDAT_H
#define GIAODICHDAT_H
#include "GiaoDich.h"
#include <string>
using namespace std;

class GiaoDichDat : public GiaoDich
{
    public:
        GiaoDichDat(int MaGD = 0,
                int Ngay = 0,
                int Thang = 0,
                int Nam = 0,
                int DonGia = 0,
                string LoaiDat = "",
                int DienTich = 0);
        virtual ~GiaoDichDat();
        void Nhap() override;
        void Xuat() const override;
        int TinhTien() const override;

    protected:

    private:
        string LoaiDat;
};

#endif // GIAODICHDAT_H
