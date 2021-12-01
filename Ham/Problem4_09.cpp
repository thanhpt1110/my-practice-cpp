
#include <iostream>
using namespace std;
#define MAX 300

int Fibo(int);

int main()
{
	int x;
	cin >> x;
	if (x < 1 || x>30)
		cout << "So " << x << " khong nam trong khoang [1,30]." << endl;
	else
	{
		cout << Fibo(x) << endl;
	}
	return 0;
}

int Fibo(int x)
{
if (x==1 || x==2)
        return 1;
    else
    {
        int f1=1, f2=1; //Gán giá trị đầu dãy F
        int f3;
        for (int i=3; i<=x; i++)
        {
            f3=f1+f2;   //Số thứ 3 = số thứ 1 + số thứ 2
            f1=f2;  //Số thứ 1 lúc này gán = số thứ 2 ban đầu
            f2=f3;  //Số thứ 2 = số mới để quay lại vĩ trí thứ 2 trong tổng
        }
        return f3;
    }
}