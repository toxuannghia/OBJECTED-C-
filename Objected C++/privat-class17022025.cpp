#include <bits/stdc++.h>
using namespace std;

class ds
{
private:
    int n;
    int *a;
public:
    ds(int n=0)
    {
        if(n>0);
        a=new int[n];
        this-> n=n;
    }
    ds(const ds &b)
    {
        this->n=b.n;
        this->a= new int[n];
        for(int i=0;i<n;i++)
        {
            a[i]=b.a[i];
        }
    }
    void nhap()
    {
        cout << "Nhap so phan tu cua mang: ";
        cin>> n;
        a=new int [n];
        srand(time(NULL));
        //srand(10);
        for(int i=0; i<n;i++)
        {
            a[i]=rand()%100;
        }
    }
    void in()
    {
        cout << "\n Noi dung cua mang: ";
        for(int i=0; i<n;i++)
        {
            cout << " " << a[i];
        }
    }
    void tang(int k)
    {
        for(int i=0; i<n;i++)
        {
            a[i]=a[i]+k;
        }
    }
};
int main()
{
    //ds m;m.nhap();m.in();
    //m.tang(6);m.in();
    //ds y(m);y.in();
    //y.tang(100);y.in();
    //m.in();
    ds z(10);z.in();

}
