#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n % i == 0)
        return false;
    }
    return true;
}

int main()
{
    int n, count=0;
    cin>>n;
    for (int i=2; i<=n-2; i++)
    {
        if (isPrime(i) && isPrime(i+2)) 
        {
            cout<<i<<", "<<i+2;
            cout<<endl;
            count++;
        }
    }
    cout<<"Tong: "<<count<<" cap so sinh doi < "<<n;
    return 0;
}
