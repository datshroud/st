#include <iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<cstdlib>
#include<cstdio>

using namespace std;

typedef struct ngayBay{
    int ngay;
    int thang;
    int nam;
}NGAY;

typedef struct CHUYENBAY{
    string maChuyenBay;
    NGAY day;
    float gioBay;
    string noiDen;
}CB;

void nhapDSChuyenBay(CB a[], int &n){
    cin >> n;
    for (int i = 0; i < n; i++) {
        getline(cin, a[i].maChuyenBay);

        cin >> a[i].day.ngay >> a[i].day.thang >> a[i].day.nam;
        cin.ignore();
        cin >> a[i].gioBay;
        cin.ignore();
        getline(cin, a[i].noiDen);
    }
}

void xuatChuyenBayToiTinh(CB a[], int n, string s){
    for (int i = 0; i < n; i++){
        if (s == a[i].noiDen)
            cout << a[i].maChuyenBay 
                << "\t" << a[i].day.ngay << "/" << a[i].day.thang << "/" << a[i].day.nam
                << "\t" << a[i].gioBay
                << "\t" << s << endl;
    }
}

int main()
{
    CB a[100];
    int n;

    nhapDSChuyenBay(a,n); // Nhap danh sach cac chuyen bay


    cout<<"Machuyen\t|Ngaybay\t|Giobay\t|Noiden\n";
    xuatChuyenBayToiTinh(a,n,"Ha Noi");

    return 0;
}