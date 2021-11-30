#include <iostream>

using namespace std;

int main()
{
    long long ngay, thang, nam;
    cin>>ngay>>thang>>nam;
    if(nam<=0)
    {
        cout<<"Nam khong hop le.";
    }
    else 
    {
        if(thang<=0 || thang >12)
        {
            cout<<"Thang khong hop le.";
        }
        else 
        {
            switch(thang)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                {
                    if (ngay<=0 || ngay>31)
                    {
                        cout<<ngay<<"/"<<thang<<"/"<<nam<<" la ngay khong hop le.";
                    }
                    else
                    {
                        cout<<ngay<<"/"<<thang<<"/"<<nam<<" la ngay hop le.";
                    }
                    break;
                }
                case 4:
                case 6:
                case 9:
                case 11:
                {
                    if (ngay<=0 || ngay>30)
                    {
                        cout<<ngay<<"/"<<thang<<"/"<<nam<<" la ngay khong hop le.";
                    }
                    else
                    {
                        cout<<ngay<<"/"<<thang<<"/"<<nam<<" la ngay hop le.";
                    }
                    break;
                }
                case 2:
                {
                    if (nam%4==0 && nam%100!=0)
                    {
                        if(ngay<=0 || ngay>29)
                        {
                            cout<<ngay<<"/"<<thang<<"/"<<nam<<" la ngay khong hop le.";
                        }
                        else
                        {
                            cout<<ngay<<"/"<<thang<<"/"<<nam<<" la ngay hop le.";
                        }
                    }
                    else 
                    {
                        if(ngay<=0 || ngay>28)
                        {
                            cout<<ngay<<"/"<<thang<<"/"<<nam<<" la ngay khong hop le.";
                        }
                        else
                        {
                            cout<<ngay<<"/"<<thang<<"/"<<nam<<" la ngay hop le.";
                        }
                    }
                    break;
                }
            }
        }
    }
    return 0;
}