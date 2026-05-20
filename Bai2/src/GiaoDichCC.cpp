#include "GiaoDichCC.h"
#include <iostream>
using namespace std;
GiaoDichCC::GiaoDichCC(int MaGD,
                         int Ngay,
                         int Thang,
                         int Nam,
                         int DonGia,
                         int DienTich,
                         int MaCanHo,
                         int ViTriTang)
: GiaoDich(MaGD, Ngay, Thang, Nam, DonGia, DienTich)
{
    this->MaCanHo = MaCanHo;
    this->ViTriTang = ViTriTang;
}

GiaoDichCC::~GiaoDichCC()
{
    //dtor
}
void GiaoDichCC::Nhap()
{
    GiaoDich::Nhap();
    cin.ignore();
    cout<<"Nhap ma can: ";
    cin>> MaCanHo;

    cout<<"Nhap vi tri tang: ";
    cin>>ViTriTang;
}
int GiaoDichCC::TinhTien() const
{
    if (ViTriTang == 1) return DienTich * DonGia * 2;
    else if (ViTriTang >= 15) return DienTich * DonGia * 1.2;
    else return DienTich * DonGia;
}
void GiaoDichCC::Xuat() const
{
    GiaoDich::Xuat();

    cout<<"\t";
    cout << ViTriTang << "\t"
         << TinhTien();
}
