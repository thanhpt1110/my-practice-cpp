#include <iostream>

using namespace std;

int main()
{
    long long n, sum = 0;
    int sotachra;
    cin>>n;
    while (n!=0)
    {
        sotachra = n%10;
        sum += sotachra;
        n /= 10;
    }
    cout <<sum;
    return 0;
}