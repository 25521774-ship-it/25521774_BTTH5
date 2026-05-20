#ifndef NHANVIEN_H
#define NHANVIEN_H
#include <string>
using namespace std;
class NhanVien
{
    public:
        NhanVien(string HoTen = "Khong Co Thong Tin",
                 int NgaySinh = 0,
                 int ThangSinh = 0,
                 int NamSinh = 0);
        virtual ~NhanVien();
        virtual void Nhap();
        virtual void Xuat() const;
        friend istream& operator >> (istream& is, NhanVien& nv);
        friend ostream& operator << (ostream& os, const NhanVien& nv);
        virtual int TinhLuong() const = 0;
        int GetNgaySinh() const;
        int GetThangSinh() const;
        int GetNamSinh() const;

    protected:
        string HoTen;
        int NgaySinh, ThangSinh, NamSinh;
    private:
};

#endif // NHANVIEN_H
