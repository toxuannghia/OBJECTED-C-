#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> a(n);
    vector <int>::iterator it;
    for(int i=0; i<n; i++)
    {
        a[i]=rand()%101;
    }
    cout << "\n Noi dung vector truoc khi xoa: \n";
    for(int i=0; i<n; i++)
    {
        cout << a.at(i) << " ";
    }
    it=a.begin();
    for(int i = a.size() - 1; i >= 0; i--)
    {
        int uoc=0;
        for(int j=1; j<a.at(i); j++)
        {
            if(a.at(i)%j==0)
            {
                uoc++;
            }
        }
        if(uoc>2)
        {
            a.erase(a.begin() + i);
        }
    }
    cout << "\n Noi dung vector sau khi xoa: \n";
    for(int i=0; i<a.size();i++)
    {
        cout << a.at(i)<< " ";
    }

}
