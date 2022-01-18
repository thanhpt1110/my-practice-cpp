#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;

struct SinhVien
{
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

#include <cstring>
void Nhap(SinhVien &A)
{
    fgets(A.MASV, 10, stdin);
    A.MASV[strlen(A.MASV) - 1] = '\0';

    fgets(A.HoTen, 100, stdin);
    A.HoTen[strlen(A.HoTen) - 1] = '\0';

    fgets(A.NgaySinh, 12, stdin);
    A.NgaySinh[strlen(A.NgaySinh) - 1] = '\0';

    cin >> A.GioiTinh;

    float a, b, c;
    cin >> a >> b >> c;
    A.DiemToan = a;
    A.DiemLy = b;
    A.DiemHoa = c;
    A.DTB = (a + b + c) * 1.0 / 3;
}

void Xuat(SinhVien A)
{
    cout << A.MASV << "\t";
    cout << A.HoTen << "\t";
    cout << A.NgaySinh << "\t";
    cout << A.GioiTinh << "\t";
    cout << A.DiemToan << "\t";
    cout << A.DiemLy << "\t";
    cout << A.DiemHoa << "\t";
    cout << setprecision(3) << A.DTB;
}

int main()
{
    SinhVien A;
    Nhap(A);
    Xuat(A);
    return 0;
}
