#include <iostream>

using namespace std;

long long Input()
{
    long long n;
    cin>>n;
    return n;
}

long long sum_even_divisor(long long n)
{
    long long sum=0;
    for (int i=1; i<=n; i++)
    {
        if (n%i==0 && i%2==0)
            sum+=i;
    }
    if (sum>=2)
        return sum;
    return -1;
}

int main() 
{
	int n;
	n=Input();
	cout << sum_even_divisor(n);
}
