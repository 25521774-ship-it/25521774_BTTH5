#ifndef CAODANG_H
#define CAODANG_H
#include "DhCntt.h"
#include <string>
using namespace std;
class CaoDang : public DhCntt
{
    public:
        CaoDang(int MSSV = 0,
               string HoTen = "",
               string DiaChi = "",
               int TinChi = 0,
               double DiemTB = 0,
               double DiemTotNghiep = 0);
        virtual ~CaoDang();
        void Nhap() override;
        void Xuat() const override;
        bool DuDieuKien() override;
        double GetDiemTN() const;

    protected:

    private:
        double DiemTotNghiep;
};

#endif // CAODANG_H
