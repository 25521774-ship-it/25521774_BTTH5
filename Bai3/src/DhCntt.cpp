#include "DhCntt.h"
#include <iostream>
#include <string>
using namespace std;
DhCntt::DhCntt(int MSSV,
            string HoTen,
            string DiaChi,
            int TinChi,
            double DiemTB)
{
    this->MSSV = MSSV;
    this->HoTen = HoTen;
    this->DiaChi = DiaChi;
    this->TinChi = TinChi;
    this->DiemTB = DiemTB;
}

DhCntt::~DhCntt()
{
    //dtor
}
void DhCntt::Nhap()
{
    cout<<"Nhap MSSV: ";
    cin>>MSSV;

    cin.ignore();
    cout<<"Nhap ho ten: ";
    getline(cin, HoTen);

    cout<<"Nhap dia chi: ";
    getline(cin, DiaChi);

    cout<<"Nhap tong so tin chi: ";
    cin>>TinChi;

    cout<<"Nhap diem trung binh: ";
    cin>>DiemTB;
}
void DhCntt::Xuat() const
{
    cout<<MSSV << "\t"
        <<HoTen<< "\t"
        <<DiaChi<< "\t"
        <<TinChi<< "\t"
        <<DiemTB<< "\t";
}
istream& operator >> (istream& is, DhCntt& sv)
{
    sv.Nhap();
    return is;
}
ostream& operator << (ostream& os, const DhCntt& sv)
{
    sv.Xuat();
    return os;
}
double DhCntt::GetDiemTB() const
{
    return DiemTB;
}
bool DhCntt::DuDieuKien()
{
    return 1;
}
