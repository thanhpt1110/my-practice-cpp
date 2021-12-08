#include <iostream>

using namespace std;

void input(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
}

void find_second_max(int a[], int n)
{
    int max_1 = -999999999;  //Có thể hiểu đây là biến gắn tạm 
    int max_2 = -999999999;  //để mọi phần tử trong mảng đều có thể là max

    for (int i=0; i<n; i++)  //Tìm số lớn nhất trong mảng
    {
        if (a[i] > max_1)
            max_1 = a[i];
    }

    for (int i=0; i<n; i++)  
    {
        if (a[i] == max_1)  //Nếu gặp số lớn nhất thì skip
        {
            continue;
        }else
        {
            if (a[i]>max_2)    //Xét với max_2
            {
                max_2 = a[i];
            }
        }
    }

    if (max_2 == -999999999)  //Nếu số trong mảng đều giống nhau thì max_2 ko thay đổi
        cout << 0;
    else cout << max_2;
}

int main()
{
    int arr[10000], n;
    cin >> n;
    input(arr, n);
    find_second_max(arr, n);
    return 0;
}