#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float calculate(int n)
{
    float sum=0;
    float can_bac_hai=0;
    for (float i=1; i<=n; i++)
    {
        sum = can_bac_hai + i;
        can_bac_hai = sqrt(sum);
    }
    return can_bac_hai;
}

int main() 
{
	int n;
	cin >> n;
    cout << setprecision(3) << calculate(n);
}
