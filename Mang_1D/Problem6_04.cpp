#include <iostream>
#include <cmath>

using namespace std;

void input(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
}

bool isPrime(int n)
{
    if (n<2) return false;
    else
    {
        for (int i=2; i<=sqrt(n); i++)
        {
            if (n%i==0) 
                return false;
        }
        return true;
    }
}

void output(int arr[], int n)
{
    int count = 0;
    for (int i=0; i<n; i++)
    {
        if (isPrime(arr[i]))
        {
            cout << arr[i] << " ";
            count++;
        }
    }
    if (count==0)
        cout << 0;
}

int main()
{
    int arr[100], n;
    cin >> n;
    input(arr, n);
    output(arr, n);
}