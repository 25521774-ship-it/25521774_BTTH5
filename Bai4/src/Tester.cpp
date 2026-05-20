#include "Tester.h"
#include "Company.h"
#include <iostream>
#include <string>
using namespace std;
Tester::Tester(int MaNV,
            string HoTen,
            int Tuoi,
            string SDT,
            string Email,
            double LuongCoBan,
            int Error)
: Company(MaNV, HoTen, Tuoi, SDT, Email, LuongCoBan)
{
    this->Error = Error;
}

Tester::~Tester()
{
    //dtor
}
void Tester::Nhap()
{
    Company::Nhap();
    cout<<"Nhap so loi phat hien duoc: ";
    cin>>Error;
}
void Tester::Xuat() const
{
    Company::Xuat();
    cout<<"Error: "<<Error
        <<"\t"<<TinhLuong();
}
string Tester::GetNhanVien() const
{
    return "Kiem chung vien";
}
double Tester::TinhLuong() const
{
    return LuongCoBan + Error * 50000;
}
