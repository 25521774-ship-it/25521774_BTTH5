#include "GiaoDich.h"
#include <iostream>
using namespace std;
GiaoDich::GiaoDich(int MaGD, int Ngay, int Thang, int Nam, int DonGia, int DienTich)
{
    this->MaGD = MaGD;
    this->Ngay = Ngay;
    this->Thang = Thang;
    this->Nam = Nam;
    this->DonGia = DonGia;
    this->DienTich = DienTich;
}

GiaoDich::~GiaoDich()
{
    //dtor
}
void GiaoDich::Nhap()
{
    cout<<"Nhap ma giao dich: ";
    cin>>MaGD;

    cout<<"Nhap ngay giao dich: ";
    cin>>Ngay;

    cout<<"Nhap thang giao dich: ";
    cin>>Thang;

    cout<<"Nhap nam giao dich: ";
    cin>>Nam;

    cout<<"Nhap don gia: ";
    cin>>DonGia;

    cout<<"Nhap dien tich: ";
    cin>>DienTich;
}
void GiaoDich::Xuat() const
{
    cout << MaGD << "\t"
         << Ngay << "/"
         << Thang << "/"
         << Nam << "\t"
         << DonGia;
}
istream& operator >> (istream& is, GiaoDich& gd)
{
    gd.Nhap();
    return is;
}
ostream& operator << (ostream& os, GiaoDich& gd)
{
    gd.Xuat();
    return os;
}
int GiaoDich::GetThang() const
{
    return Thang;
}
