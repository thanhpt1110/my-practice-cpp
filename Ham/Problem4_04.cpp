#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i==0)
            return false;
    }
    return true;
}

int ucln(int m, int n)
{
    int r;
    if (n==0)
        return m;
    while (n!=0)
    {
        r=m%n;
        m=n;
        n=r;
    }
    return m;
}

int sum_common_prime(int m, int n)
{
    int sum = 0;
    int min = m;
    if (m > n) min = n;
    for (int i=2; i<=ucln(m, n); i++)
    {
        if (isPrime(i) && m%i==0 && n%i==0)
        {
            sum += i;
        }
    }
    if (sum != 0) return sum;
    else return -1;
}

int main() 
{
	int m, n;
	cin >> m >> n;
	cout << sum_common_prime(m, n);
}
