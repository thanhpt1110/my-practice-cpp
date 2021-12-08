#include <iostream>

using namespace std;

void input(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
}

void output(int arr[], int n)
{
    for (int i=1; i<n; i+=2)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[100], n;
    cin >> n;
    input(arr, n);
    output(arr, n);
}