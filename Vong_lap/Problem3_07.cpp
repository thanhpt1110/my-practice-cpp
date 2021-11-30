#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    double mau, sum=0;
    for (int i=1; i<=n; i++)
    {
        mau = 2*i+1;
        sum += pow(-1,i)/mau;
    }
    cout<<4*(1+sum);
    return 0;
}