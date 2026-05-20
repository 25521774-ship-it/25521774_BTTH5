#include "Company.h"
#include <iostream>
#include <string>
using namespace std;
Company::Company(int MaNV,
            string HoTen,
            int Tuoi,
            string SDT,
            string Email,
            double LuongCoBan)
{
    this->MaNV = MaNV;
    this->HoTen = HoTen;
    this->Tuoi = Tuoi;
    this->SDT = SDT;
    this->Email = Email;
    this->LuongCoBan = LuongCoBan;
}

Company::~Company()
{
    //dtor
}
void Company::Nhap()
{
    cout<<"Nhap ma nhan vien: ";
    cin>>MaNV;

    cin.ignore();
    cout<<"Nhap ho ten: ";
    getline(cin, HoTen);

    cout<<"Nhap tuoi: ";
    cin>>Tuoi;

    cin.ignore();
    cout<<"Nhap so dien thoai: ";
    getline(cin, SDT);

    cout<<"Nhap email: ";
    getline(cin, Email);

    cout<<"Nhap muc luong co ban: ";
    cin>>LuongCoBan;
}
void Company::Xuat() const
{
    cout<<"\t"
        <<MaNV << "\t"
        <<HoTen<< "\t"
        <<Tuoi<< "\t"
        <<SDT << "\t"
        <<Email << "\t"
        <<LuongCoBan<<"\t";
}
istream& operator >> (istream& is, Company& nv)
{
    nv.Nhap();
    return is;
}
ostream& operator << (ostream& os, const Company& nv)
{
    nv.Xuat();
    return os;
}
