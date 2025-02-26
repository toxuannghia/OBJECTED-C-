#include <iostream>
using namespace std;

struct rectangle
{
    double length,width;
    double area;
};

void input(rectangle &hinhChuNhat)
{
    cout << "\n Nhap chieu dai: ";
    cin>> hinhChuNhat.length;
    cout << "\n Nhap chieu rong: ";
    cin>> hinhChuNhat.width;
}
void displayDimensions(rectangle &hinhChuNhat)
{
    cout << "\n Chieu dai da nhap la: "<< hinhChuNhat.length;
    cout << "\n Chieu rong da nhap la: " << hinhChuNhat.width;
}
void displayArea(rectangle &hinhChuNhat)
{
    hinhChuNhat.area=hinhChuNhat.length*hinhChuNhat.width;
}
void edit(rectangle &hinhChuNhat)
{
    cout << "\n Dien tich hinh chu nhat la: " << hinhChuNhat.area;
}
int main()
{
    rectangle hinhChuNhat;
    input(hinhChuNhat);
    displayDimensions(hinhChuNhat);
    displayArea(hinhChuNhat);
    edit(hinhChuNhat);
}
