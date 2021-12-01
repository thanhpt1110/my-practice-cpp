#include <iostream>
using namespace std;

#include <cmath>

long long sum_all_square(int n)
{
    long long sum=0;
    for (int i=1; i<=n; i++)
    {
        if (n%i==0 && (int)sqrt(i)*(int)sqrt(i)==i)
            sum += i ;
    }
    return sum;
}

int main() 
{
    int n;
    cin>>n;
    cout << sum_all_square(n);
}
