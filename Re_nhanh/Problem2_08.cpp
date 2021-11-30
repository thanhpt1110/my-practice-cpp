    #include <iostream>
    #include <iomanip>

    using namespace std;

    int main()
    {
        float toan, ly, hoa, dtb;
        cin>>toan>>ly>>hoa;
        dtb = (toan+ly+hoa)/3.0;
        cout<<"DTB = "<<setprecision(2)<<fixed<<dtb<<endl;
        if (dtb>=9 && dtb<=10)
            cout<<"Loai: XUAT SAC";
        else if (dtb>=8 && dtb<9)
            cout<<"Loai: GIOI";
        else if (dtb>=7 && dtb<8)
            cout<<"Loai: KHA";
        else if (dtb>=6 && dtb<7)
            cout<<"Loai: TB KHA";
        else if (dtb>=5 && dtb<6)
            cout<<"Loai: TB";
        else if (dtb>=4 && dtb <5)
            cout<<"Loai: YEU";
        else
            cout<<"Loai: KEM";
        return 0;
    }