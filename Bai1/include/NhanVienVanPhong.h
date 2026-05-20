#ifndef NHANVIENVANPHONG_H
#define NHANVIENVANPHONG_H
#include "NhanVien.h"
#include <string>
using namespace std;
class NhanVienVanPhong : public NhanVien
{
    public:
        NhanVienVanPhong(string HoTen = "Khong Co Thong Tin",
                 int NgaySinh = 0,
                 int ThangSinh = 0,
                 int NamSinh = 0,
                 int SoNgayLamViec = 0);
        virtual ~NhanVienVanPhong();
        void Nhap() override;
        void Xuat() const override;
        int TinhLuong() const override;

    protected:

    private:
        int SoNgayLamViec;
};

#endif // NHANVIENVANPHONG_H
