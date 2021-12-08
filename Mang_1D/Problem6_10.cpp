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

void sapxep_mang(int arr_a[], int m, int arr_b[], int n)
{
    int arr_c[10000];
    int i=0, j=0, k=0;
    while (i<m && j<n)
    {
        if (arr_a[i] > arr_b[j])
        {
            arr_c[k] = arr_b[j];
            j++;
        }
        else
        {
            arr_c[k] = arr_a[i];
            i++;
        }
        k++;
    }

    while (i<m)
    {
        arr_c[k] = arr_a[i];
        i++; k++;
    }

    while (j<n)
    {
        arr_c[k] = arr_b[j];
        j++; k++;
    }

    for (int z=0; z<m+n; z++)
    {
        cout << arr_c[z] << " ";
    }
}

int main()
{
    int arr_a[10000], arr_b[10000], arr_c[10000];
    int m, n;
    cin >> m;
    input(arr_a, m);
    cin >> n;
    input(arr_b, n);
    sapxep_mang(arr_a, m, arr_b, n);
}