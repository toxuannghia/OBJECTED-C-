#include <bits/stdc++.h>
using namespace std;

class DS
{
private:
    int *a;
    int n;
public:
    void sinh(int n)
    {
        this->n=n;
        a= new int[n];
        for(int i=0; i<n; i++)
        {
            a[i]=rand()%101;
        }
    }
    void in()
    {

        cout << "\n -So phan tu trong day: " << n;
        cout << "\n -Noi dung day: ";
        for(int i=0; i<n; i++)
        {
            cout << a[i] << " ";
        }
    }
    void tang(int k)
    {
        for(int i=0; i<n; i++)
        {
            a[i]+=k;
        }
    }
    DS(const DS &b)
    {
        cout << "\n\t---goi ham tao sao chep....";
        n=b.n;
        a=new int[n];
        for(int i=0; i<n; i++)
        {
            a[i]=b.a[i];
        }
    }
    DS()
    {
        cout << "\n\t---goi ham tao....";
        n=0;
        a=NULL;
    }
    DS operator=(DS b)
    {
        n=b.n;
        a=new int[n];
        for(int i=0; i<n; i++)
        {
            a[i]=b.a[i];
            return *this;
        }
    }
    ~DS(){
        if(a!=NULL)
        {
            delete []a;
            cout << "\n\t\t---------GOI HAM HUY-------";
        }
    }
};
int main()
{
    cout << " Day m:";
    DS m;
    m.sinh(20);
    m.in();
    cout << "\n Day y:";
    DS y(m);
    y.in();
    cout << "\n #Tang day m:";
    m.tang(5);
    cout << "\n Day m sau khi tang:";
    m.in();
    cout << "\n Day y sau khi tang:";
    y.in();
    cout << "\n Tao day c, c=m va in ra c: ";
    DS c;
    c=m;
    c.in();
    cout << "\n -Xong!!";
    return 0;
}
