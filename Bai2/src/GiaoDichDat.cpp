#include "GiaoDichDat.h"
#include <iostream>
#include <string>
using namespace std;
GiaoDichDat::GiaoDichDat(int MaGD,
                         int Ngay,
                         int Thang,
                         int Nam,
                         int DonGia,
                         string LoaiDat,
                         int DienTich)
: GiaoDich(MaGD, Ngay, Thang, Nam, DonGia, DienTich)
{
    this->LoaiDat = LoaiDat;
}

GiaoDichDat::~GiaoDichDat()
{
    //dtor
}
void GiaoDichDat::Nhap()
{
    GiaoDich::Nhap();

    cin.ignore();
    cout<<"Nhap loai dat: ";
    getline(cin, LoaiDat);
}
int GiaoDichDat::TinhTien() const
{
    if (LoaiDat == "B" || LoaiDat == "C" || LoaiDat == "b" || LoaiDat == "c") return DienTich * DonGia;
    else if (LoaiDat == "A" || LoaiDat == "a") return DienTich * DonGia * 1.5;
}

void GiaoDichDat::Xuat() const
{
    GiaoDich::Xuat();

    cout<<"\t";
    cout << LoaiDat << "\t"
         << TinhTien();
}
