#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

bool isPrime(int n)
{
    if (n<2) return false;
    else
    {
        for (int i=2; i<=sqrt(n); i++)
        {
            if (n%i==0) 
                return false;
        }
        return true;
    }
}

void NhapmangSNT(int a[], int &n)
{
    int count = 0, j=0;
	cin >> n;
	for (int i=2; count<n; i++)
	{
        if (isPrime(i))
        {
		    a[j] = i;
            count++; j++;
        }
	}
}

bool check_Number(int x, int y)
{
    int sotachra;
    while (x!=0)
    {
        sotachra = x % 10;
        if (sotachra == y)
        {
            return true;
            break;
        }
        else x /= 10;
    }
    return false;
}

int SoPhanTuChuaY(int a[], int n, int y)
{
    int count = 0;
    for (int i=0; i<n; i++)
    {
        if (check_Number(a[i], y))
            count++;
    }
    return count;
}

int main()
{
	int a[MAX], n, y;
	cin >> y;
	NhapmangSNT(a,n);
    cout << SoPhanTuChuaY(a, n, y) << endl;
	return 0;
}