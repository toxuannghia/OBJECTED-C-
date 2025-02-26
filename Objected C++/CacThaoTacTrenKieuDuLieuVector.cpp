#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> a= {10,20,30,40,50};

    for(auto it =a.begin(); it ==a.end();++it)
    {
        cout << *it << " ";
    }
    return 0;

}
