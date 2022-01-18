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

PhanSo Chia(PhanSo a, PhanSo b)
{
    PhanSo res;
    res.mau = a.mau * b.tu;
    res.tu = a.tu * b.mau;
    return res;
}

int gcd(int a, int b)
{
    if (a % b != 0)
        return gcd(b, a % b);
    else
        return b;
}

void Xuat(PhanSo a)
{
    if (a.tu == 0)
    {
        cout << a.tu;
        return;
    }
    int Gcd = gcd(a.tu, a.mau);
    a.tu /= Gcd;
    a.mau /= Gcd;
    if (a.mau != 1)
    {
        if (a.mau < 0)
        {
            a.mau *= -1;
            a.tu *= -1;
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
    Xuat(Chia(a, b));
    return 0;
}
