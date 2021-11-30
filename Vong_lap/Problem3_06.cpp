#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, x;
    cin>>n>>x;
    
    // Yêu cầu 1
    double sum1=0;
    for(int i=0; i<=n; i++)
    {
        sum1 += pow(x,i);
    }

    //Yêu cầu 2
    double sum2 = 0;
    for(int i=0; i<=2*n; i+=2)
    {
        sum2 += pow (x,i);
    }

    //Yêu cầu 3
    double sum3=0;
    double tu, mau=1;
    for(int i=0; i<=n; i++)
    {
        tu = pow(x,i);
        if (i==0)
            mau=1;
        else mau *=i;
        sum3 += tu/mau;
    }
    cout<<sum1<<endl<<sum2<<endl<<sum3;
    return 0;
}