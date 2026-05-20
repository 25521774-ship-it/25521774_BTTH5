#include "GiaoDichNhaPho.h"
#include <iostream>
#include <string>
using namespace std;
GiaoDichNhaPho::GiaoDichNhaPho(int MaGD,
                         int Ngay,
                         int Thang,
                         int Nam,
                         int DonGia,
                         int DienTich,
                         string LoaiNha,
                         string DiaChi)
: GiaoDich(MaGD, Ngay, Thang, Nam, DonGia, DienTich)
{
    this->LoaiNha = LoaiNha;
    this->DiaChi = DiaChi;
}

GiaoDichNhaPho::~GiaoDichNhaPho()
{
    //dtor
}
void GiaoDichNhaPho::Nhap()
{
    GiaoDich::Nhap();

    cin.ignore();
    cout<<"Nhap loai nha: ";
    getline(cin, LoaiNha);

    cout<<"Nhap dia chi: ";
    getline(cin, DiaChi);
}
int GiaoDichNhaPho::TinhTien() const
{
    if (LoaiNha == "cao cap") return DienTich * DonGia;
    else if (LoaiNha == "thuong") return DienTich * DonGia * 0.9;
}
void GiaoDichNhaPho::Xuat() const
{
    GiaoDich::Xuat();

    cout<<"\t";
    cout << LoaiNha << "\t"
         << TinhTien();
}
