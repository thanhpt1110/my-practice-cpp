#include <iostream>

using namespace std;

int input()
{
    int a;
    cin>>a;
    return a;
}

int input(int &b)
{
    cin>>b;
    return b;
}

long long TongUocChung(int a, int b)
{
    long long sum=0;
    int min = a;
    if (a>b) min=b;
    for (int i=1; i<=min; i++)
    {
        if (a%i==0 && b%i==0)
            sum += i;
    }
    return sum;
}

int main()
{
    int a, b;
    a=input();
    input(b);
    std::cout << TongUocChung(a, b);
    return 0;
}
