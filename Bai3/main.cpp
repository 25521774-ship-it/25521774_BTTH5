#include <iostream>
#include <vector>
#include <iostream>
#include <string>
#include "DaiHoc.h"
#include "CaoDang.h"
using namespace std;

int main()
{
    cout<<"===== DH CNTT TP.HCM ====="<<endl;
    cout<<"Nhap so sinh vien: ";
    int n;
    cin>>n;

    int DH;
    do
    {
        cout<<"Nhap so sinh vien dai hoc: ";
        cin>>DH;
        if (DH > n) cout<<"So sinh vien khong dung!";
    } while(DH > n);

    int CD;
    do
    {
        cout<<"Nhap so sinh vien cao dang: ";
        cin>>CD;
        if (CD + DH > n) cout<<"So sinh vien khong dung!";
    } while (CD + DH > n);

    vector<DhCntt*> ds(n);
    cout<<"===== DAI HOC ====="<<endl;
    for (int i = 0; i<DH; i++)
    {
        cout<<"---Sinh vien dai hoc "<<i+1<<"---"<<endl;
        ds[i] = new DaiHoc;
        cin>>*ds[i];
    }

    cout<<"===== CAO DANG ====="<<endl;
    for (int j = DH; j<n; j++)
    {
        cout<<"---Sinh vien cao dang "<<j - (DH -1)<<"---"<<endl;
        ds[j] = new CaoDang;
        cin>>*ds[j];
    }
    cout<<"===== DANH SACH SINH VIEN ====="<<endl;
    double SVDHCaoNhat = -1;
    double SVCDCaoNhat = -1;
    for (int k = 0; k<n; k++)
    {
        if (k < DH)
        {
            if (ds[k]->GetDiemTB() > SVDHCaoNhat) SVDHCaoNhat = ds[k]->GetDiemTB();
        }
        if (k >= DH && k < n)
        {
            if (ds[k]->GetDiemTB() > SVCDCaoNhat) SVCDCaoNhat = ds[k]->GetDiemTB();
        }
        cout<<k+1<<"."<<*ds[k]<<endl;
    }
    cout<<"===== DS SV DU DIEU KIEN TN ====="<<endl;
    int Dem = 1;
    for (int t = 0; t<n; t++)
    {
        if (ds[t]->DuDieuKien())
        {
            cout<<Dem++<<"."<<*ds[t]<<endl;
        }
    }
    cout<<"===== DS SV KHONG DU DIEU KIEN TN ====="<<endl;
    int Dem2 = 1;
    for (int p = 0; p<n; p++)
    {

        if (ds[p]->DuDieuKien() == 0)
        {
            cout<<Dem2++<<"."<<*ds[p]<<endl;
        }
    }
    cout<<"===== SV DH CO DIEM TB CAO NHAT ====="<<endl;
    for (int q = 0; q < DH; q++)
    {
        if (ds[q]->GetDiemTB() == SVDHCaoNhat) cout<<*ds[q]<<endl;
    }
    cout<<"===== SV CD CO DIEM TB CAO NHAT ====="<<endl;
    for (int w = DH; w < n; w++)
    {
        if (ds[w]->GetDiemTB() == SVCDCaoNhat) cout<<*ds[w]<<endl;
    }
    cout<<endl;
    int rotDH = 0;
    int rotCD = 0;
    for (int i = 0; i < n; i++)
{
    if (!ds[i]->DuDieuKien())
    {
        if (i < DH) rotDH++;
        else rotCD++;
    }
}
    cout<<"So sinh vien dai hoc khong du DKTN: "<<rotDH<<endl;
    cout<<"So sinh vien cao dang khong du DKTN: "<<rotCD<<endl;

    for (int xoa = 0; xoa < n; xoa++)
    {
        delete ds[xoa];
    }
    return 0;
}
