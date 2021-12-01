#include <iostream>

using namespace std;

int reverse(int n)
{
    int sotachra, k=0;
    while (n!=0)
    {
        sotachra = n%10;
        k = k*10 + sotachra;
        n /= 10;
    }
    return k;
}

int main() 
{
    int n;
    cin >> n;
    cout << reverse(n);
}
