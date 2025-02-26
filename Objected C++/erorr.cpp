#include <bits/stdc++.h>
using namespace std;

class ds
{
private:
    int n;
    int *a;
public:
    void nhap()
    {
        cout << "Nhap so phan tu cua mang: ";
        cin>> n;
        a=new int [0];
    }
    void in()
    {
        cout << "\n Noi dung cua mang: ";
        for(int i=0; i<n;i++)
        {
            cout << " " << a[i];
        }
    }
};
int main()
{
    ds m;
    m.nhap;
    m.in();
    return 0;
}
