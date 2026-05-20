#ifndef TESTER_H
#define TESTER_H
#include <iostream>
#include <string>
#include "Company.h"
class Tester : public Company
{
    public:
        Tester(int MaNV = 0,
            string HoTen = "",
            int Tuoi = 0,
            string SDT = "",
            string Email = "manv@hoancau.gmail",
            double LuongCoBan = 0,
            int Error = 0);
        virtual ~Tester();
        void Nhap() override;
        void Xuat() const override;
        double TinhLuong() const override;
        string GetNhanVien() const override;

    protected:

    private:
        int Error;
};

#endif // TESTER_H
