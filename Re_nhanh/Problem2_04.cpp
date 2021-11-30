#include <iostream>
#include<cmath>

int main()
{
    float a, n; 
    std::cin>>a>>n;
    double result;
    result = round(a*n)/n;
    std::cout.precision(10);
    std::cout<<result;
    return 0;
}