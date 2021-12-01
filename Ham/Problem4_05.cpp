#include <iostream>

using namespace std;

void input(int &a)
{
    cin>>a;
}

int TongChuSo(int a)
{
    int sum=0;
    int sotachra;
    do
    {
        sotachra = a%10;
        sum += sotachra;
        a/=10;
    } while (a!=0);
    return sum;
}

int main()
{
    int a;
    input(a);
    std::cout << TongChuSo(a);
    return 0;
}
