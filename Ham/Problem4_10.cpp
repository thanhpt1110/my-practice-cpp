#include <iostream>

using namespace std;

long long giai_thua_kep(int n)
{
    long long multi = 1;
    if (n%2!=0)
    {
        for (int i=1; i<=n; i+=2)
        {
            multi *= i;
        }
    }
    else if (n%2==0)
    {
        for (int i=2; i<=n; i+=2)
        {
            multi *= i;
        }
    }
    return multi;
}

int main()
{
    int n; cin>>n;
    cout<< giai_thua_kep(n);
    return 0;
}