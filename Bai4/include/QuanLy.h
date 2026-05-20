#ifndef QUANLY_H
#define QUANLY_H
#include "Company.h"
#include <vector>

class QuanLy
{
    public:
        QuanLy();
        virtual ~QuanLy();
        void NhapDanhSach();
        void XuatDanhSach() const;
        void Requirement() const;

    protected:

    private:
        std::vector<Company*> ds;
};

#endif // QUANLY_H
