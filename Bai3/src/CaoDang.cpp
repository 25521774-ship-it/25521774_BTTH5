#include "CaoDang.h"
#include <string>
#include <iostream>
using namespace std;
CaoDang::CaoDang(int MSSV,
            string HoTen,
            string DiaChi,
            int TinChi,
            double DiemTB,
            double DiemTotNghiep)
: DhCntt(MSSV,HoTen,DiaChi,TinChi,DiemTB)
{
    this->DiemTotNghiep = DiemTotNghiep;
}

CaoDang::~CaoDang()
{
    //dtor
}
void CaoDang::Nhap()
{
    DhCntt::Nhap();

    cout<<"Nhap diem tot nghiep: ";
    cin>>DiemTotNghiep;
}
bool CaoDang::DuDieuKien()
{
    if (TinChi >= 120 && DiemTB >=5.0 && DiemTotNghiep >=5.0) return 1;
    else return 0;
}
double CaoDang::GetDiemTN() const
{
    return DiemTotNghiep;
}
void CaoDang::Xuat() const
{
    cout<<"Cao Dang"<<"\t";

    DhCntt::Xuat();

    cout<<DiemTotNghiep;
}
