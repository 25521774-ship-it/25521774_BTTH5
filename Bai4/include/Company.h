#ifndef COMPANY_H
#define COMPANY_H
#include <iostream>
#include <string>
using namespace std;
class Company
{
    public:
        Company(int MaNV = 0,
            string HoTen = "",
            int Tuoi = 0,
            string SDT = "",
            string Email = "manv@hoancau.gmail",
            double LuongCoBan = 0);
        virtual ~Company();
        virtual void Nhap();
        virtual void Xuat() const;
        virtual double TinhLuong() const = 0;
        virtual string GetNhanVien() const = 0;
        friend istream& operator >> (istream& is, Company& nv);
        friend ostream& operator << (ostream& os, const Company& nv);


    protected:
        int MaNV;
        string HoTen;
        int Tuoi;
        string SDT;
        string Email;
        double LuongCoBan;

    private:
};

#endif // COMPANY_H
