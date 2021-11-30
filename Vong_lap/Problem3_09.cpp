#include <iostream>

using namespace std;

int main()
{   
    long long n;
    cin>>n;
    int sotachra;
    long long num=0; long long temp=n;
    while (temp>0)
    {
        sotachra = temp%10;
        num = num * 10 + sotachra;
        temp /= 10;
    }
    if (num==n)
        cout<<"true";
    else cout<<"false";
    return 0;
}