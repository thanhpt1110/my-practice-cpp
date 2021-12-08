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

void output(int a[], int n, int p, int k)
{
    for (int i=p; i<n-k; i++)   // Xét từ vị trí cần xóa đến giới hạn mới của mảng
    {                           
        a[i] = a[i+k];  //Gán giá trị sau khi hết đoạn xóa k phần
    }                   // vào vị trí đang xét hiên tại. Viết giấy dễ hình dung            
    n = n - k;  
    for (int i=0; i<n; i++)  //In ra mảng mới
    {
        cout << a[i] << " "; 
    }
}

int main()
{
    int n, p, k;
    int arr[100];
    cin >> n;
    input(arr, n);
    cin >> p;
    cin >> k;
    output(arr, n, p, k);
}