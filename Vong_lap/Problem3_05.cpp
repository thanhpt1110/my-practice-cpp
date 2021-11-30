#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    // Yêu cầu 1
    double sum1=0;
    for(int i=1; i<=n; i++)
    {
        sum1 += pow(i,i);
    }

    //Yêu cầu 2
    double sum2 = 0;
    long long temp = 1;
    for(int i=1; i<=n; i++)
    {
        temp *= i;
        sum2+=temp;
    }

    //Yêu cầu 3
    long long mau=0;
    double sum3=0;
    for(int i=1; i<=n; i++)
    {
        mau+=i;
        sum3 += 1.0/mau;
    }
    cout<<sum1<<endl<<sum2<<endl<<sum3;
    return 0;
}
