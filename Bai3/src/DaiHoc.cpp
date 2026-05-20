#include "DaiHoc.h"
#include <string>
#include <iostream>
using namespace std;
DaiHoc::DaiHoc(int MSSV ,
               string HoTen,
               string DiaChi,
               int TinChi,
               double DiemTB,
               string TenLuanVan,
               double DiemLuanVan)
: DhCntt(MSSV,HoTen,DiaChi,TinChi,DiemTB)
{
    this->TenLuanvan = TenLuanVan;
    this->DiemLuanVan = DiemLuanVan;
}

DaiHoc::~DaiHoc()
{
    //dtor
}
void DaiHoc::Nhap()
{
    DhCntt::Nhap();

    cin.ignore();

    cout<<"Nhap ten bai luan van: ";
    getline(cin, TenLuanvan);

    cout<<"Nhap diem luan van: ";
    cin>>DiemLuanVan;
}
void DaiHoc::Xuat() const
{
    cout<<"Dai Hoc"<<"\t";

    DhCntt::Xuat();

    cout<<TenLuanvan<<"\t"
        <<DiemLuanVan;
}
bool DaiHoc::DuDieuKien()
{
    if (TinChi >= 170 && DiemTB >= 5.0 && DiemLuanVan >=5.0) return 1;
    else return 0;
}
string DaiHoc::GetTenLuan() const
{
    return TenLuanvan;
}
double DaiHoc::GetDiemLuan() const
{
    return DiemLuanVan;
}
