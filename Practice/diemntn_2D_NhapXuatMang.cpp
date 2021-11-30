#include <iostream>
#define MAXR 100
#define MAXC 100

using namespace std;

    void NhapMaTran(int a[][100], int &r, int &c)
    {
        cin>>r>>c;
        for (int i=0; i<r; i++)
        {
            for (int j=0; j<c; j++)
            {
                cin>>a[i][j];
            }
        }
    }

void XuatMaTran(int a[][100], int &r, int &c)
{
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main() {
    int a[MAXR][MAXC], r, c;
    NhapMaTran(a, r, c);
    XuatMaTran(a, r, c);
    return 0;
}
