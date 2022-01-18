#include <iostream>
using namespace std;

struct DATHUC
{
    int n;
    double heso[1000];
    int mu[1000];
};

DATHUC *Nhap()
{
    DATHUC *D = new DATHUC;
    cin >> D->n;
    for (int i = 0; i < D->n; i++)
    {
        double a;
        cin >> a;
        cin >> D->mu[i];
        D->heso[i] = a;
    }
    return D;
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

DATHUC Tong2DaThuc(DATHUC *A, DATHUC *B)
{
    DATHUC sum;
    sum.n = 0;
    int i = 0, j = 0;
    while (i < A->n || j < B->n)
    {
        if (A->mu[i] > B->mu[j])
        {
            sum.heso[sum.n] = A->heso[i];
            sum.mu[sum.n] = A->mu[i];
            i++;
        }
        else if (A->mu[i] < B->mu[j])
        {
            sum.heso[sum.n] = B->heso[j];
            sum.mu[sum.n] = B->mu[j];
            j++;
        }
        else if (A->mu[i] == B->mu[j])
        {
            sum.heso[sum.n] = A->heso[i] + B->heso[j];
            sum.mu[sum.n] = A->mu[i];
            i++;
            j++;
        }
        sum.n++;
    }
    return sum;
}

int main()
{
    DATHUC *A, *B;

    A = Nhap();
    B = Nhap();

    cout << "Da thuc A: ";
    Xuat(*A);

    cout << "\nDa thuc B: ";
    Xuat(*B);

    cout << "\nA+B = ";
    Xuat(Tong2DaThuc(A, B));

    return 0;
}
