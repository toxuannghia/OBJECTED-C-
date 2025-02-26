#include <iostream>
using namespace std;

class PS {
private:
    int tu, mau;

public:
    void nhap() {
        cout << "\n Nhap tu so: ";
        cin >> tu;
        do {
            cout << "\n Nhap mau so (khac 0): ";
            cin >> mau;
        } while (mau == 0);
    }
    void in() const {
        cout << tu << "/" << mau << endl;
    }
    // Phép nhân hai phân số
    PS operator*(const PS &b) const {
        PS c;
        c.tu = tu * b.tu;
        c.mau = mau * b.mau;
        return c;
    }
    // Phép chia hai phân số
    PS operator/(const PS &b) const {
        PS c;
        c.tu = tu * b.mau;
        c.mau = mau * b.tu;
        return c;
    }
};

int main() {
    PS a, b, tich, thuong;

    cout << "\n Nhap phan so thu nhat:";
    a.nhap();
    cout << "\n Nhap phan so thu hai:";
    b.nhap();

    tich = a * b;   // Thực hiện phép nhân
    thuong = a / b; // Thực hiện phép chia

    cout << "\n Phan so thu nhat: ";
    a.in();
    cout << "\n Phan so thu hai: ";
    b.in();

    cout << "\n Tich cua hai phan so: ";
    tich.in();
    cout << "\n Thuong cua hai phan so: ";
    thuong.in();

    return 0;
}
