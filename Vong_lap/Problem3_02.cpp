#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    for (int i=1; i<=n; i++)
    {
        if (n%i==0)
        count++;
    }
    if (count==1)
        cout << -1;
    else if (count==2)
        cout << 1;
    else 
        cout << 0;
    return 0;
}