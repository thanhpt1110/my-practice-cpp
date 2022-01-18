#include <iostream>

using namespace std;

struct PhanSo
{
    int tu, mau;
};

void Nhap(PhanSo &a)
{
    cin >> a.tu >> a.mau;
}

PhanSo Nhap()
{
    PhanSo b;
    cin >> b.tu >> b.mau;
    return b;
}

int SoSanh(PhanSo a, PhanSo b)
{
    int cheo_1 = a.tu * b.mau;
    int cheo_2 = a.mau * b.tu;
    if (cheo_1 - cheo_2 == 0)
        return 0;
    else if (cheo_1 - cheo_2 > 0)
        return 1;
    else
        return -1;
}

int main()
{
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    int kq = SoSanh(a, b);
    if (kq == 0)
        std::cout << "Hai phan so bang nhau.";
    else if (kq > 0)
        std::cout << "Phan so thu nhat LON hon phan so thu hai.";
    else
        std::cout << "Phan so thu nhat NHO hon phan so thu hai.";
    return 0;
}
