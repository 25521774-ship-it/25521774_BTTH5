#ifndef DAIHOC_H
#define DAIHOC_H
#include "DhCntt.h"
#include <string>
using namespace std;
class DaiHoc : public DhCntt
{
    public:
        DaiHoc(int MSSV = 0,
               string HoTen = "",
               string DiaChi = "",
               int TinChi = 0,
               double DiemTB = 0,
               string TenLuanVan = "",
               double DiemLuanVan = 0);
        virtual ~DaiHoc();
        void Nhap() override;
        void Xuat() const override;
        bool DuDieuKien() override;
        string GetTenLuan() const;
        double GetDiemLuan() const;

    protected:

    private:
        string TenLuanvan;
        double DiemLuanVan;
};

#endif // DAIHOC_H
