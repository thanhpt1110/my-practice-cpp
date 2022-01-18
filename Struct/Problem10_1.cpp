#include <iostream>
const int MAXN = 105;
using namespace std;

struct PhanSo
{
    int tu, mau;
};

void Nhap(PhanSo a[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i].tu >> a[i].mau;
}

int gcd(int a, int b)
{
    if (a % b != 0)
        return gcd(b, a % b);
    else
        return b;
}

void Xuat(PhanSo a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i].mau == 0)
        {
            cout << "Khong thoa yeu cau bai toan\n";
            continue;
        }
        if (a[i].tu == 0)
        {
            cout << 0 << '\n';
            continue;
        }
        int GCD = gcd(a[i].tu, a[i].mau);
        a[i].tu /= GCD;
        a[i].mau /= GCD;
        if (a[i].mau != 1)
        {
            if (a[i].mau < 0)
            {
                a[i].tu *= -1;
                a[i].mau *= -1;
            }
            cout << a[i].tu << '/' << a[i].mau << '\n';
        }
        else
        {
            cout << a[i].tu << '\n';
        }
    }
}

int main()
{
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}
