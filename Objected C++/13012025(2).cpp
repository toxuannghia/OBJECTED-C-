#include <iostream>
using namespace std;

int main()
{
    int **a,m,n;
    cout<< "\n Nhap so dong:";
    cin>>m;
    cout<< "\n Nhap so cot:";
    cin >>n;
    a=new int*[m];
    for(int i=0; i<m; i++)
    {
        a[i]=new int[n];
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            a[i][j]=rand()%100;
        }
    }
    cout << "\n Noi dung ma tran";
    for(int i=0; i<m; i++)
    {
        cout << "\n";
        for(int j=0; j<n; j++)
        {
            cout << a[i][j] << " ";
        }
    }
    for(int i=0; i<m; i++)
    {
        cout << "\n Tong hang =" <<i << ": ";
        int sum=0;
        for(int j=0; j<n; j++)
        {
            sum+= a[i][j];
        }
        cout << sum;
    }
    for(int i=0; i<n; i++)
    {
        cout << "\n Tong cot =" <<i << ": ";
        int sum=0;
        for(int j=0; j<m; j++)
        {
            sum+= a[j][i];
        }
        cout << sum;
    }

    for(int i=0; i<m; i++)
    {
        cout << "\n GTLN theo hang "<< i << "=";
        int max_value_hang=0;
        for(int j=0; j<n; j++)
        {
            if(a[i][j]>max_value_hang)
            {
                swap(a[i][j],max_value_hang);
            }
        }
        cout << max_value_hang;
    }
    cout << "\n GTLN cua ma tran = ";
    int maxx=a[0][0];
    int h=0,c=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j]>maxx)
            {
                maxx=a[i][j];
                h=i;
                c=j;
            }
        }
    }
    cout << maxx;
    cout << "\n Vi tri la:";
    cout << "\n hang=" << h;
    cout << "\n cot="<< c;

}
