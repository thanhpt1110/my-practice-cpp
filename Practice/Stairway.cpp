#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n;
    cin >> n;
    int cnt=1;int cntN=2;
    int res=1;
    if(n == "1")
    {
        cout << 1;  //Nếu chỉ có 1 bậc thì in ra 1
        return 0;
    }
    if(n[n.size()-1] != '0') res+=n.size();
    for(int i=n.size()-2;i>=0;i--)
    {
        int num = n[i] - '0';
        res+=num*cnt*cntN;
        cout << res << endl;
        ++cntN; 
        cnt*=10;
    }
    cout << res;
    return 0;
}