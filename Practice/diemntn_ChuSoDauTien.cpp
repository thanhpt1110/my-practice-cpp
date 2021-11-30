#include <iostream>

int ChuSoDauTien(int a, int &first)
{
    while (a!=0)
    {
        first = a%10;
        a/=10;
    }
    return first; 
}

void input(int &n)
{
    std::cin >> n;
}

int main()
{
    int a, first;
    input(a);
    ChuSoDauTien(a, first);
    std::cout << first;
    return 0;
}
