    #ifndef DHCNTT_H
#define DHCNTT_H
#include <string>
using namespace std;

class DhCntt
{
    public:
        DhCntt(int MSSV = 0,
               string HoTen = "",
               string DiaChi = "",
               int TinChi = 0,
               double DiemTB = 0);
        virtual ~DhCntt();
        virtual void Nhap();
        virtual void Xuat() const;
        friend istream& operator >> (istream& is, DhCntt& sv);
        friend ostream& operator << (ostream& os, const DhCntt& sv);
        virtual bool DuDieuKien();
        double GetDiemTB() const;


    protected:
        int MSSV;
        string HoTen;
        string DiaChi;
        int TinChi;
        double DiemTB;
    private:

};

#endif // DHCNTT_H
