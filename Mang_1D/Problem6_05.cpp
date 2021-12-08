#include <iostream>

using namespace std;

void input(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
}

void add_Element(int arr[], int n, int x, int k)
{
    for (int i=n; i>k; i--)  
    {
        arr[i] = arr[i-1];
    }
    arr[k] = x; 
    n++;  

    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[10000], x, k, n;
    cin >> n;
    input(arr, n);
    cin >> x;
    cin >> k;
    add_Element(arr, n, x, k);
    return 0;
}
