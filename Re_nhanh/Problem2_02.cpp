#include <iostream>

using namespace std;

int main()
{
    int temperature;
    cout<<"What is the outdoor temperature? ";
    cin>>temperature;
    cout<<endl;
    cout<<"What is your plan today?\n";
    if(temperature>=33)
        cout<<"Good day for swimming";
    else if (temperature>=24 && temperature<33)
        cout<<"Good day for golfing";
    else if (temperature>=10 && temperature <24)
        cout<<"Good day to play tennis";
    else 
        cout<<"Go to bed";
    return 0;
}