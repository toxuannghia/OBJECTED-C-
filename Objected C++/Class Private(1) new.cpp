#include <bits/stdc++.h>
using namespace std;

class PS
{
private:
    int tu, mau;
public:
    friend istream& operator>>(istream &is, PS &b)
    {
        cout << "\n Nhap tu so : ";
        is>> b.tu;
        do
        {
            cout << "\n Nhap mau so : ";
            is>>b.mau;
        }
        while (b.mau==0);
        return is;
    }
    friend ostream& operator<<(ostream &os, PS &b)
    {
        os << b.tu << "/" << b.mau;
        return os;
    }
    PS operator*(const PS &b) const
    {
        PS c;
        c.tu= tu* b.tu;
        c.mau=mau* b.mau;
        int k=__gcd(c.tu,c.mau);
        c.tu=c.tu/k;
        c.mau=c.mau/k;
        return c;
    }
    PS operator/(const PS &b) const
    {
        PS c;
        c.tu= tu*b.mau;
        c.mau= mau*b.tu;
        int k=__gcd(c.tu,c.mau);
        c.tu=c.tu/k;
        c.mau=c.mau/k;
        return c;
    }
};
int main()
{
    PS a,b,c,tich,thuong;
    cout << "\n Phan so thu nhat: ";
    cin>>a;
    cout << "\n Phan so thu hai: ";
    cin>>b;
    tich=a*b;
    cout << "\n Ket qua phep nhan hai phan so: ";
    cout << "\n" << a << " * " << b << " = " << tich;
    thuong=a/b;
    cout << "\n Ket qua phep chia hai phan so: ";
    cout << "\n" << a << " / " << b << " = " << thuong;

}
