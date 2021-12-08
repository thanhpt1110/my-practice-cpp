#include <iostream>

using namespace std;

void input(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
}

void deleteElement(int arr[], int n, int k)
{
    int count = 0, i;
    for (i=0; i<n; i++)
    {
        if (arr[i] == k)
            count++;
        else 
            arr[i-count]=arr[i];
    }
    n = n - count;

    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[10000], n, k;
    cin >> n;
    input(arr, n);
    cin >> k;
    deleteElement(arr, n, k);
    return 0;
}