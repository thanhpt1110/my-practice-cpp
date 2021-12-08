#include <iostream>

using namespace std;

void input(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
}

void find_max(int arr[], int n)
{
    int max = arr[0];
    int count = 0;
    for (int i=0; i<n; i++)
    {
        if (arr[i] == max)
        {
            count++;
        }
        else if (arr[i] > max)
        {
            max = arr[i];
            count = 1;
        }
    }
    cout << max << endl;
    cout << count;
}

int main()
{
    int arr[10000], n;
    cin >> n;
    input(arr, n);
    find_max(arr, n);
    return 0;
}