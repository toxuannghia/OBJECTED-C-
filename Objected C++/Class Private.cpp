#include <iostream>
#include <cmath>
using namespace std;

class ptb2
{
private:
    double a,b,c;
public:
    void nhap()
    {
        cout << "Nhap cac he so a,b,c cua ptb2: ";
        cin>> a>>b>>c;
    }
    void gpt(){
        double d=b*b-4*a*c;
        if(d<0)
        {
            cout << "\n - Phuong trinh vo nghiem thuc";
            cout << "\n +Nghiem thu nhat la: x = "<< x_ao_1;
            cout << "\n +Nghiem thu hai la: x = "<< x_ao_2;
        } else if (d==0) {
            cout << "\n - Phuong trinh co nghiem kep la x = " << -b/(2*a);
        } else {
            cout << "\n - Phuong trinh co hai nghiem nguyen";
            double x_1=0, x_2=0;
            x_1= (-b+ sqrt(d))/(2*a);
            x_2= (-b- sqrt(d))/(2*a);
            cout << "\n +Nghiem thu nhat la: x = "<< x_1;
            cout << "\n +Nghiem thu hai la: x = "<< x_2;
        }
    }
};
int main()
{
    ptb2 pt1, pt2;
    pt1.nhap();
    pt2.nhap();
    pt1.gpt();
    pt2.gpt();
}
