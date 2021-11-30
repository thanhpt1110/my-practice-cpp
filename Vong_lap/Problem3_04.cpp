#include <iostream>

using namespace std;

int main()
{
    int a, b, n;
    cin>>a>>b>>n;
    if (n==0)
        cout<<0;
    else 
    {
        long long sum=0;
        for (int i=1; i<=n; i++)
        {
            sum = sum + (a*b);
            a++;
            b++;
        }
        cout<<sum;
    }
    return 0;
}