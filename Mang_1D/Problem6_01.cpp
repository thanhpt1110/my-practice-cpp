#include <iostream>
using namespace std;
#define MAX 100

void Nhapmang(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
}

int so_dau_tien(int n)
{
    int sotachra;
    while (n!=0)
    {
        sotachra = n %10;
        n/=10;
    }
    return sotachra;
}

bool isBenford(int a[], int n) 
{
    int count_1=0, count_2=0;
    for (int i=0; i<n; i++)
    {
        if (so_dau_tien(a[i]) == 1)
            count_1++;
        else if (so_dau_tien(a[i]) == 4)
            count_2++;
    }
    if (count_1 == 3 && count_2 == 1)
        return true;
    else return false;
}

int main()
{
	int a[MAX], n = 10;
	Nhapmang(a, n);
	if (isBenford(a, n) == true)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
	return 0;
}
