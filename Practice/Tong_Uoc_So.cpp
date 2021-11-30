#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	long long n;
	long long s = 0;
	cin >> n;
	for (long long i = 1; i <= sqrt(n); i++)
    {
		if (n % i == 0) 
        {
			long long j = n/i;
			if (i == j) 
            {
				s = s + i;
			} 
            else 
            {
				s = s + i + j;
			}
		}
	}
	cout << s - n;
	
	return 0;	
}