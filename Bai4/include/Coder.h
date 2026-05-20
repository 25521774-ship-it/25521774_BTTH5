#ifndef CODER_H
#define CODER_H
#include <iostream>
#include <string>
#include "Company.h"

class Coder : public Company
{
    public:
        Coder(int MaNV = 0,
            string HoTen = "",
            int Tuoi = 0,
            string SDT = "",
            string Email = "manv@hoancau.gmail",
            double LuongCoBan = 0,
            int Overtime = 0);
        virtual ~Coder();
        void Nhap() override;
        void Xuat() const override;
        double TinhLuong() const override;
        string GetNhanVien() const override;

    protected:

    private:
        int Overtime;
};

#endif // CODER_H
