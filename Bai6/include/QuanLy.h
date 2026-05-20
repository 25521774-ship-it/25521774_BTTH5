#ifndef QUANLY_H
#define QUANLY_H
#include "KhachHang.h"
#include <vector>

class QuanLy
{
    public:
        QuanLy();
        virtual ~QuanLy();
        void NhapDanhSach();
        void XuatDanhSach() const;
        double Requirement() const;
    protected:

    private:
        std::vector<KhachHang*> ds;
};

#endif // QUANLY_H
