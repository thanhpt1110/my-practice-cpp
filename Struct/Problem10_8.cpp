#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAXN 100

struct SinhVien
{
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(char s[])
{
    fgets(s, MAXN, stdin); s[strlen(s) - 1] = '\0';
}

void Nhap(SinhVien sv[], int &n)
{
    SinhVien A;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin.ignore();
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
        sv[i] = A;
    }
}

bool checkTen(char s1[], char s2[])
{
    if (strlen(s1) != strlen(s2))
        return false;
    for (int i = 0; i < strlen(s1); ++i)
    {
        if (s1[i] != s2[i])
            return false;
    }
    return true;
}

void XoaTheoHoTen(SinhVien sv[], int &n, char s[])
{
    int cnt = 0;
    int t = n;
    for (int i = 0; i < t; ++i)
    {
        if (checkTen(sv[i].HoTen, s))
            --n;
        else   
            sv[cnt++] = sv[i];
    } 
}

void Xuat(SinhVien sv[], int n)
{
    SinhVien A;
    for (int i = 0; i < n; ++i)
    {
        A = sv[i];
        cout << A.MASV << "\t";
        cout << A.HoTen << "\t";
        cout << A.NgaySinh << "\t";
        cout << A.GioiTinh << "\t";
        cout << A.DiemToan << "\t";
        cout << A.DiemLy << "\t";
        cout << A.DiemHoa << "\t";
        cout << setprecision(3) << A.DTB;
        cout << endl;
    }
}


int main()
{
    SinhVien A[MAXN];
    char hoTenCanXoa[100];
    int n;

    Nhap(hoTenCanXoa);

    Nhap(A, n);

    XoaTheoHoTen(A, n, hoTenCanXoa);

    Xuat(A, n);
    return 0;
}
