#ifndef NHANVIENSANXUAT_H
#define NHANVIENSANXUAT_H
#include "NhanVien.h"
#include <string>
using namespace std;
class NhanVienSanXuat : public NhanVien
{
    public:
        NhanVienSanXuat(string HoTen = "Khong Co Thong Tin",
                 int NgaySinh = 0,
                 int ThangSinh = 0,
                 int NamSinh = 0,
                 int LuongCanBan = 0,
                 int SoSanPham = 0  );
        virtual ~NhanVienSanXuat();
        void Nhap() override;
        void Xuat() const override;
        int TinhLuong() const override;

    protected:

    private:
        int LuongCanBan;
        int SoSanPham;
};

#endif // NHANVIENSANXUAT_H
