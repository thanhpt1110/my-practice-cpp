#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

struct DATHUC
{
    int n;
    double heso[1000];
    int mu[1000];
};

DATHUC B;
DATHUC *Nhap()
{
    cin >> B.n;
    for (int i = 0; i < B.n; ++i)
    {
        cin >> B.heso[i] >> B.mu[i];
    }
    return &B;
}

void Xuat(DATHUC B)
{
    int count = 0, cong = 0;
    for (int i = 0; i < B.n; i++)
    {
        if (B.heso[i] == 1)
        {
            if (B.mu[i] != 0 && B.mu[i] != 1)
                cout << "x^" << B.mu[i];
            else if (B.mu[i] == 1)
                cout << "x";
            else
                cout << "1";
            cong = 1;
        }
        else if (B.heso[i] == -1)
        {
            if (B.mu[i] != 0 && B.mu[i] != 1)
                cout << "-x^" << B.mu[i];
            else if (B.mu[i] == 1)
                cout << "-x";
            else
                cout << "-1";
            cong = 1;
        }
        else if (B.heso[i] != 0)
        {
            if (B.mu[i] != 0 && B.mu[i] != 1)
                cout << B.heso[i] << "x^" << B.mu[i];
            else if (B.mu[i] == 1)
                cout << B.heso[i] << "x";
            else
                cout << B.heso[i];
            cong = 1;
        }
        else if (B.heso[i] == 0)
            count++;
        if (B.heso[i + 1] > 0 && i != B.n - 1 && cong == 1)
            cout << "+";
    }
    if (count == B.n)
        cout << "0";
}

double TinhDaThuc(DATHUC B, double x)
{
    double sum = 0;
    for (int i = 0; i < B.n; i++)
    {
        sum = sum + B.heso[i] * pow(x, B.mu[i]);
    }
    return sum;
}

int main()
{
    DATHUC *B;

    B = Nhap();

    cout << "Da thuc vua nhap la: ";
    Xuat(*B);

    double x;
    cin >> x;
    cout << "\nVoi x=" << x << ", gia tri da thuc la: "
         << setprecision(2) << fixed << TinhDaThuc(*B, x);
    return 0;
}
