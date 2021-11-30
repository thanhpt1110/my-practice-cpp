#include <iostream>

using namespace std;

int main()
{
    int n; cin>>n;
    if (n>=1 && n<=30)
    {
        if (n==1 || n==2)
            cout<<1;
        else 
        {
            int f1=1, f2=1;
            int f3;
            for (int i=3; i<=n; i++)
            {
                f3 = f1+f2;
                f1 = f2;
                f2 = f3;
            }
            cout<<f3;
        }
    }
    else cout<<"So "<<n<<" khong nam trong khoang [1,30].";
    return 0;
}