#include "Coder.h"
#include "Company.h"
#include <iostream>
using namespace std;
Coder::Coder(int MaNV,
            string HoTen ,
            int Tuoi,
            string SDT,
            string Email,
            double LuongCoBan,
            int Overtime)
: Company(MaNV, HoTen, Tuoi, SDT, Email, LuongCoBan)
{
    this->Overtime = Overtime;
}

Coder::~Coder()
{
    //dtor
}
void Coder::Nhap()
{
    Company::Nhap();
    cout<<"Nhap so gio overtime: ";
    cin>>Overtime;
}
void Coder::Xuat() const
{
    Company::Xuat();
    cout<<"Overtime: "<<Overtime<<"\t"
        <<TinhLuong();
}
string Coder::GetNhanVien() const
{
    return "Lap trinh vien";
}
double Coder::TinhLuong() const
{
    return LuongCoBan + Overtime * 200000;
}
