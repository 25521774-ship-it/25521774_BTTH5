#include <iostream>
#include "NhanVienSanXuat.h"
#include "NhanVienVanPhong.h"
#include <vector>
using namespace std;

int main()
{
    cout<<"===== DANH SACH NHAN VIEN ====="<<endl;
    cout<<"Nhap so luong nhan vien: ";
    int n;
    cin>>n;
    vector <NhanVien*> ds(n);

    int nvsx;
    do
    {
        cout<<"So luong nhan vien san xuat: ";
        cin>>nvsx;
        if (nvsx > n) cout<<"So luong nhan vien khong chinh xac!"<<endl;
    }while (nvsx > n);
    int nvvp;
    do{
    cout<<"So luong nhan vien van phong: ";
    cin>>nvvp;
    cin.ignore();

    if (nvvp + nvsx > n) cout<<"So luong nhan vien khong chinh xac!"<<endl;
    }while (nvvp + nvsx > n);

    cout << "===== NHAP NHAN VIEN SAN XUAT =====\n";
    for (int i = 0; i<nvsx; i++)
    {
        cout<<"---Nhan vien san xuat "<<i+1<<"---"<<endl;
        ds[i] = new NhanVienSanXuat;
        cin>>*ds[i];
    }

    cout << "\n===== NHAP NHAN VIEN VAN PHONG =====\n";
    for (int j = nvsx; j<n; j++)
    {
        cout<<"---Nhan vien van phong "<<j - (nvsx - 1)<<"---"<<endl;
        ds[j] = new NhanVienVanPhong;
        cin>>*ds[j];
    }
    cout<<"===== DANH SACH NHAN VIEN ====="<<endl;
    long long LuongThapNhat = ds[0]->TinhLuong();
    for (int k = 0; k < n; k++)
    {
        if (k < nvsx)
        {
            if (ds[k]->TinhLuong() < LuongThapNhat)
                LuongThapNhat = ds[k]->TinhLuong();
            cout<<k + 1<<".\t"<<*ds[k]<<endl;
        }
        else cout<<k + 1<<".\t"<<*ds[k]<<endl;
    }
    cout << "\n===== TINH LUONG =====\n";

    cout<<"Tong luong ma cong ty phai tra: ";
    int TongLuong = 0;

    for (int z = 0; z<n; z++)
    {
        TongLuong += ds[z]->TinhLuong();
    }
    cout<<TongLuong<<endl;

    for (int q = 0; q<n; q++)
    {
        if (ds[q]->TinhLuong() == LuongThapNhat)
            {
                cout<<"===== NVSX co luong thap nhat ====="<<endl;
                cout<<*ds[q]<<endl;
            }
    }
    {
    int minNam = INT_MAX, minThang = INT_MAX, minNgay = INT_MAX;

    for (int w = 0; w < n; w++)
    {
        if (ds[w]->GetNamSinh()< minNam ||
           (ds[w]->GetNamSinh()== minNam && ds[w]->GetThangSinh()< minThang) ||
           (ds[w]->GetNamSinh()== minNam && ds[w]->GetThangSinh()== minThang && ds[w]->GetNgaySinh()< minNgay))
        {
            minNam   = ds[w]->GetNamSinh();
            minThang = ds[w]->GetThangSinh();
            minNgay  = ds[w]->GetNgaySinh();
        }
    }

    cout << "---Nhan vien cao tuoi nhat---" << endl;
    for (int e = 0; e < n; e++)
    {
        if (ds[e]->GetNamSinh()== minNam &&
            ds[e]->GetThangSinh()== minThang &&
            ds[e]->GetNgaySinh()== minNgay)
        {
            cout << *ds[e];
        }
    }
}
    for (int t = 0; t<n; t++)
    {
        delete ds[t];
    }
    return 0;
}
