#include <iostream>

using namespace std;

void input(int &n)
{
    cin>>n;
}

int input()
{
    int m;
    cin>>m;
    return m;
}

int gcd(int m, int n)
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

int main() 
{
	int m, n;
	input(n);
	m=input();
	cout << gcd(m, n);
}
