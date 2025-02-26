#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> a;
    vector <int>::iterator it;
    for(int i=1;i<10;i++)
    {
        a.push_back(i); //Them vao sau vector gia tri i
    }
    cout << "\n Noi dung vector:";
    for(int i=0; i<a.size();i++)
    {
        cout << a[i]<< " ";
    }
    a.pop_back();
    a.pop_back();//lay phan tu phia sau
    it = a.begin();
    a.insert(it+ 2, 1000);//chèn
    a.erase(it+ 3);//xóa
    cout << "\n Noi dung vector:";
    for(int i=0; i<a.size();i++)
    {
        cout << a.at(i)<< " ";
    }
}
