#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fi("TaoDuLieu.txt");
    ofstream fo("TongDuLieu.txt");
    if(!fi.is_open())
    {
        cout << "\n Loi doc/ghi file";
    }
    else if(!fi.is_open())
    {
        cout << "\n Loi doc/ghi file";
    }
    else
    {
        int n,x,t=0;
        fi>>n;
        for(int i=1; i<=n; i++)
        {
            fi>>x;
            t=t+x;
        }
        fo<< "Tong cac so= " << t;
        fo.close();
        fi.close();
        cout << "\n XU LY XONG";
    }
}
