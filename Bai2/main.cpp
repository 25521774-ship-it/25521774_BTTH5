#include <iostream>
#include <vector>

#include "GiaoDichDat.h"
#include "GiaoDichCC.h"
#include "GiaoDichNhaPho.h"

using namespace std;

int main()
{
    cout << "===== DANH SACH GIAO DICH =====" << endl;

    int n;
    cout << "Nhap so luong giao dich: ";
    cin >> n;

    vector<GiaoDich*> ds(n, nullptr);

    // ================= NHAP SO LUONG =================

    int GiaoDichD;
    do
    {
        cout << "So giao dich dat: ";
        cin >> GiaoDichD;

        if (GiaoDichD < 0 || GiaoDichD > n)
            cout << "So giao dich khong chinh xac!" << endl;

    } while (GiaoDichD < 0 || GiaoDichD > n);

    int GiaoDichNP;
    do
    {
        cout << "So giao dich nha pho: ";
        cin >> GiaoDichNP;

        if (GiaoDichNP < 0 || GiaoDichD + GiaoDichNP > n)
            cout << "So giao dich khong chinh xac!" << endl;

    } while (GiaoDichNP < 0 || GiaoDichD + GiaoDichNP > n);

    int GiaoDichChCu;
    do
    {
        cout << "So giao dich chung cu: ";
        cin >> GiaoDichChCu;

        if (GiaoDichChCu < 0 ||
            GiaoDichD + GiaoDichNP + GiaoDichChCu != n)
        {
            cout << "So luong giao dich khong chinh xac!" << endl;
        }

    } while (
        GiaoDichChCu < 0 ||
        GiaoDichD + GiaoDichNP + GiaoDichChCu != n
    );

    // ================= THONG TIN =================

    cout << "\n===== VAKALAND =====" << endl;

    cout << "So luong giao dich dat: "
         << GiaoDichD << endl;

    cout << "So luong giao dich nha pho: "
         << GiaoDichNP << endl;

    cout << "So luong giao dich chung cu: "
         << GiaoDichChCu << endl;

    // ================= NHAP GIAO DICH DAT =================

    cout << "\n===== GIAO DICH DAT =====" << endl;

    for (int i = 0; i < GiaoDichD; i++)
    {
        cout << "--- Giao dich dat "
             << i + 1 << " ---" << endl;

        ds[i] = new GiaoDichDat;

        cin >> *ds[i];
    }

    // ================= NHAP GIAO DICH NHA PHO =================

    cout << "\n===== GIAO DICH NHA PHO =====" << endl;

    for (int i = GiaoDichD;
         i < GiaoDichD + GiaoDichNP;
         i++)
    {
        cout << "--- Giao dich nha pho "
             << i - GiaoDichD + 1
             << " ---" << endl;

        ds[i] = new GiaoDichNhaPho;

        cin >> *ds[i];
    }

    // ================= NHAP GIAO DICH CHUNG CU =================

    cout << "\n===== GIAO DICH CHUNG CU =====" << endl;

    for (int i = GiaoDichD + GiaoDichNP;
         i < n;
         i++)
    {
        cout << "--- Giao dich chung cu "
             << i - (GiaoDichD + GiaoDichNP) + 1
             << " ---" << endl;

        ds[i] = new GiaoDichCC;

        cin >> *ds[i];
    }

    // ================= TIM GIA TRI NHA PHO CAO NHAT =================

    long long GiaTriNhaPhoCaoNhat = 0;

    for (int i = GiaoDichD;
         i < GiaoDichD + GiaoDichNP;
         i++)
    {
        if (ds[i]->TinhTien() > GiaTriNhaPhoCaoNhat)
        {
            GiaTriNhaPhoCaoNhat = ds[i]->TinhTien();
        }
    }

    // ================= TINH TRUNG BINH CHUNG CU =================

    long long TongChungCu = 0;

    for (int i = GiaoDichD + GiaoDichNP;
         i < n;
         i++)
    {
        TongChungCu += ds[i]->TinhTien();
    }

    double TrungBinh = 0;

    if (GiaoDichChCu > 0)
    {
        TrungBinh =
            (double)TongChungCu / GiaoDichChCu;
    }

    // ================= XUAT KET QUA =================

    cout << "\n===== KET QUA =====" << endl;

    cout << "- Trung binh thanh tien cua giao dich chung cu: "
         << TrungBinh << endl;

    // ===== NHA PHO GIA TRI CAO NHAT =====

    cout << "\n- Giao dich nha pho co tri gia cao nhat:"
         << endl;

    bool found = false;

    for (int i = GiaoDichD;
         i < GiaoDichD + GiaoDichNP;
         i++)
    {
        if (ds[i]->TinhTien() == GiaTriNhaPhoCaoNhat)
        {
            cout << *ds[i] << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "Khong co giao dich nha pho."
             << endl;
    }

    // ===== GIAO DICH THANG 12 =====

    cout << "\n===== GIAO DICH THANG 12 ====="
         << endl;

    int dem = 1;

    for (int i = 0; i < n; i++)
    {
        if (ds[i]->GetThang() == 12)
        {
            cout << dem++ <<"."

             << *ds[i] << endl;
        }
    }

    if (dem == 1)
    {
        cout << "Khong co giao dich nao trong thang 12."
             << endl;
    }

    // ================= GIAI PHONG BO NHO =================

    for (int i = 0; i < n; i++)
    {
        delete ds[i];
        ds[i] = nullptr;
    }

    return 0;
}
