#include "QuanLy.h"
#include "Company.h"
#include "Coder.h"
#include "Tester.h"
#include <iostream>
#include <vector>
using namespace std;
QuanLy::QuanLy()
{
    //ctor
}

QuanLy::~QuanLy()
{
    for (int i = 0; i<ds.size(); i++)
    {
        delete ds[i];
    }
}
void QuanLy::NhapDanhSach()
{
    int n;
    cout<<"Nhap so nhan vien: ";
    cin>>n;

    for (int i = 0; i< n; i++)
    {
        int loai;
        cout<<"===== ====="<<endl;
        cout<<"1.Lap trinh vien"<<endl;
        cout<<"2.Kiem chung vien"<<endl;
        cout<<"Chon loai nhan vien: ";
        cin>>loai;

        Company* nv = nullptr;
        if (loai == 1) nv = new Coder;
        else nv = new Tester;

        nv->Nhap();
        ds.push_back(nv);
    }
}
void QuanLy::XuatDanhSach() const
{
    cout<<"===== DANH SACH NHAN VIEN ====="<<endl;

    for (int i = 0; i<ds.size(); i++)
    {
        cout<<i+1<<"." << ds[i]->GetNhanVien();
        ds[i]->Xuat();
        cout<<endl;
    }
}
void QuanLy::Requirement() const
{
    if (ds.empty())
    {
        cout<<"Danh sach rong!";
        return;
    }
    //Lam cac yeu cau cua de bai trong ham nay
    double LuongTB = 0;
    double LuongCaoNhat = ds[0]->TinhLuong();
    double LuongThapNhat = ds[0]->TinhLuong();
    double LuongCodeMax = 0;
    double LuongTestMin = INT_MAX;
    for (int i = 0; i < ds.size(); i++)
    {
        if (ds[i]->TinhLuong() > LuongCaoNhat)
            LuongCaoNhat = ds[i]->TinhLuong();
        if (ds[i]->TinhLuong() < LuongThapNhat)
            LuongThapNhat = ds[i]->TinhLuong();
        if (ds[i]->GetNhanVien() == "Lap trinh vien")
        {
            if (ds[i]->TinhLuong() > LuongCodeMax)
                LuongCodeMax = ds[i]->TinhLuong();
        }
        if (ds[i]->GetNhanVien() == "Kiem chung vien")
        {
            if (ds[i]->TinhLuong() < LuongTestMin)
                LuongTestMin = ds[i]->TinhLuong();
        }
        LuongTB += ds[i]->TinhLuong();
    }
    LuongTB /= ds.size();

    cout<<"===== BELOW AVERAGE ====="<<endl;
    for (int i = 0; i < ds.size(); i++)
    {
        if (ds[i]->TinhLuong() < LuongTB)
        {
            cout<<ds[i]->GetNhanVien();
            ds[i]->Xuat();
            cout<<endl;
        }
    }
    cout<<"===== LUONG CAO NHAT ====="<<endl;
    for (int i = 0; i < ds.size(); i++)
    {
        if (ds[i]->TinhLuong() == LuongCaoNhat)
        {
            cout<<ds[i]->GetNhanVien();
            ds[i]->Xuat();
            cout<<endl;
        }
    }
    cout<<endl;
    cout<<"===== LUONG THAP NHAT ====="<<endl;
    for (int i = 0; i < ds.size(); i++)
    {
        if (ds[i]->TinhLuong() == LuongThapNhat)
        {
            cout<<ds[i]->GetNhanVien();
            ds[i]->Xuat();
            cout<<endl;
        }
    }
    cout<<endl;
    cout<<"===== MAX LUONG LAP TRINH VIEN ====="<<endl;
    for (int i = 0; i < ds.size(); i++)
    {
        if (ds[i]->GetNhanVien() == "Lap trinh vien" &&
            ds[i]->TinhLuong() == LuongCodeMax)
        {
            cout<<ds[i]->GetNhanVien();
            ds[i]->Xuat();
            cout<<endl;
        }
    }
    cout<<endl;
    cout<<"===== MIN LUONG KIEM CHUNG VIEN ====="<<endl;
    for (int i = 0; i < ds.size(); i++)
    {
        if (ds[i]->GetNhanVien() == "Kiem chung vien" &&
            ds[i]->TinhLuong() == LuongTestMin)
        {
            cout<<ds[i]->GetNhanVien();
            ds[i]->Xuat();
            cout<<endl;
        }
    }
}
