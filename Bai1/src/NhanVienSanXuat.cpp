#include "NhanVienSanXuat.h"
#include <iostream>
using namespace std;

NhanVienSanXuat::NhanVienSanXuat(string HoTen,
                                 int NgaySinh,
                                 int ThangSinh,
                                 int NamSinh,
                                 int LuongCanBan,
                                 int SoSanPham)
: NhanVien(HoTen, NgaySinh, ThangSinh, NamSinh)
{
    this ->LuongCanBan = LuongCanBan;
    this ->SoSanPham = SoSanPham;
}

NhanVienSanXuat::~NhanVienSanXuat()
{
    //dtor
}
void NhanVienSanXuat::Nhap()
{
    NhanVien::Nhap();

    cout<<"Nhap muc luong co ban: ";
    cin>>LuongCanBan;

    cout<<"Nhap so san pham: ";
    cin>>SoSanPham;
    cin.ignore();
}
int NhanVienSanXuat::TinhLuong() const
{
    return LuongCanBan + SoSanPham * 5000;
}
void NhanVienSanXuat::Xuat() const
{
    NhanVien::Xuat();

    cout<<"\t"
        <<TinhLuong();
}
