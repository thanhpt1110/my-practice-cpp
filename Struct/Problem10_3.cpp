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

int gcd(int a, int b)
{
    if (a % b != 0)
        return gcd(b, a % b);
    else
        return b;
}

PhanSo Cong(PhanSo a, PhanSo b)
{
    PhanSo res;
    res.mau = a.mau * b.mau;
    res.tu = a.tu * b.mau + a.mau * b.tu;
    return res;
}

void Xuat(PhanSo a)
{
    if (a.tu == 0)
    {
        cout << a.tu;
        return;
    }
    int GCD = gcd(a.tu, a.mau);
    a.tu /= GCD;
    a.mau /= GCD;
    if (a.mau != 1)
    {
        if (a.mau < 0)
        {
            a.tu *= -1;
            a.mau *= -1;
        }
        cout << a.tu << '/' << a.mau << '\n';
    }
    else
    {
        cout << a.tu << '\n';
    }
}

int main()
{
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Cong(a, b));
    return 0;
}
