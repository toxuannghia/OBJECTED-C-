#include <iostream>
using namespace std;

void input(int listInterger[], int &length)
{
    cout << "\n Nhap so luong phan tu nguyen: ";
    cin>>length;
    cout << "\n Nhap danh sach phan tu: ";
    for(int i=0; i<length; i++)
    {
        cin>> listInterger[i];
    }
}
void output(int listInterger[], int &length)
{
    for(int i=0; i<length; i++)
    {
        cout << listInterger[i] << " ";
    }
}
int findInterger(int listInterger[], int &length, int &findingNumber)
{
    for(int i=0; i<length; i++)
    {
        if(listInterger[i]==findingNumber)
        {
            return 1;
        }
    }
    return -1;
}
void findMaxInterger(int listInterger[], int length)
{
    int maxInterger=listInterger[0];
    for(int i=0;i<length;i++)
    {
        if(maxInterger < listInterger[i])
        {
            maxInterger=listInterger[i];
        }
    }
    cout << "\n So nguyen lon nhat trong mang la: " << maxInterger;
}
void bubbleSort(int listInterger[], int length)
{
    for(int i=0;i<length-1;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            if(listInterger[j] < listInterger[i])
            {
                swap(listInterger[i],listInterger[j]);
            }
        }
    }
}

int main()
{
    int listInterger[1000];
    int length=0;
    int findingNumber=0;
    input(listInterger,length);
    cout << "\n Nhap so can tim: ";
    cin>> findingNumber;
    if(findInterger(listInterger,length,findingNumber)==1)
    {
        cout << "\n Tim thay so " << findingNumber;
    } else {
        cout << "\n Khong tim thay so " << findingNumber;
    }
    findMaxInterger(listInterger,length);;
    bubbleSort(listInterger,length);
    cout << "\n Danh sach mang sau khi sap xep la: ";
    output(listInterger,length);

}
