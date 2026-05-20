#include "QuanLy.h"
#include "KhachHang.h"
#include "KhachHangA.h"
#include "KhachHangB.h"
#include "KhachHangC.h"
#include <iostream>
#include <vector>
using namespace std;
QuanLy::QuanLy()
{
    //ctor
}

QuanLy::~QuanLy()
{
    for (int i = 0; i< ds.size(); i++)
    {
        delete ds[i];
    }
}
void QuanLy::NhapDanhSach()
{
    int n;
    cout<<"Nhap so luong khach hang: ";
    cin>>n;
    int a,b,c;
    cout<<"Nhap so luong khach hang A: ";
    cin>>a;
    cout<<"Nhap so luong khach hang B: ";
    cin>>b;
    cout<<"Nhap so luong khach hang C: ";
    cin>>c;
    cin.ignore();
    KhachHang* kh = nullptr;
    cout<<"===== KHACH HANG A ====="<<endl;
    for (int i = 0; i< a; i++)
    {
        cout<<"- Khach hang A"<<i+1<<":"<<endl;
        kh = new KhachHangA;
        kh->Nhap();
        ds.push_back(kh);
    }
    cout<<"===== KHACH HANG B ====="<<endl;
    for (int i = 0; i < b; i++)
    {
        cout<<"- Khach hang B"<<i+1<<":"<<endl;
        kh = new KhachHangB;
        kh->Nhap();
        ds.push_back(kh);
    }
    cout<<"===== KHACH HANG C ====="<<endl;

    for (int i = 0; i< c; i++)
    {
        cout<<"- Khach hang C"<<i+1<<":"<<endl;
        kh = new KhachHangC;
        kh->Nhap();
        ds.push_back(kh);
    }
}
void QuanLy::XuatDanhSach() const
{
    cout << "===== DANH SACH KHACH HANG =====" << endl;
    // Bước 1: Quét một vòng để đếm số lượng từng loại cho trực quan
    int dema = 0, demb = 0, demc = 0;
    for (int i = 0; i < ds.size(); i++) {
        if (ds[i]->GetKhachHang() == "A") dema++;
        else if (ds[i]->GetKhachHang() == "B") demb++;
        else if (ds[i]->GetKhachHang() == "C") demc++;
    }
    cout << "Khach Hang A: " << dema << endl;
    cout << "Khach Hang B: " << demb << endl;
    cout << "Khach Hang C: " << demc << endl;

    // Bước 2: In danh sách theo đúng loại bằng cách lọc điều kiện
    cout << "\n===== KHACH HANG LOAI A =====" << endl;
    int sttA = 1;
    for (int i = 0; i < ds.size(); i++) {
        if (ds[i]->GetKhachHang() == "A") {
            cout << "- Khach hang A " << sttA++ << ":" << endl;
            ds[i]->Xuat();
        }
    }

    cout << "\n===== KHACH HANG LOAI B =====" << endl;
    int sttB = 1;
    for (int i = 0; i < ds.size(); i++) {
        if (ds[i]->GetKhachHang() == "B") {
            cout << "- Khach hang B " << sttB++ << ":" << endl;
            ds[i]->Xuat();
        }
    }

    cout << "\n===== KHACH HANG LOAI C =====" << endl;
    int sttC = 1;
    for (int i = 0; i < ds.size(); i++) {
        if (ds[i]->GetKhachHang() == "C") {
            cout << "- Khach hang C " << sttC++ << ":" << endl;
            ds[i]->Xuat();
        }
    }
}
double QuanLy::Requirement() const
{
    double tong = 0;
    for (int i = 0; i< ds.size(); i++)
    {
        tong += ds[i]->TinhTien();
    }
    cout<<"===== TOTAL ====="<<endl;
    cout<<"So tien cong ty thu duoc: "<<tong;
    return tong;
}
