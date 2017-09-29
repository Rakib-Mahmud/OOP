#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define PI 3.142
using namespace std;

class Circle
{
private:
    int r;
    float area, cir, x, y;

public:
    Circle(); //constructor
    void getdata(void); //Methods
    void putdata (void);
    void calarea (void);
    void calcir (void);

};
//Function Definations
Circle :: Circle() //constructor function
{
    r=0;
    area=0.0;
    x=0.0;
    y=0.0;

}
void Circle :: getdata (void)
{
    cout <<"Please enter the radius of the circle" ;
    cin >> r;
    cout <<"Please enter the x co-ordinate of the circle";
    cin >>x;
    cout <<"Please enter the y co-ordinate of the circle";
    cin >>y;

}
void Circle :: putdata(void)
{
    cout <<endl;
    cout <<"Radius of the circle is : " <<r <<endl;
    cout <<"The x-cordinate of the circle is : " <<x <<endl;
    cout <<"The y-cordinate of the circle is : " <<y <<endl;
    cout <<"Area of the circle is : " <<area <<endl;
    cout <<"Circumference of the circle is : " <<cir <<endl;

}
void Circle :: calarea(void)
{
    area=PI*r*r;
}
void Circle :: calcir(void)
{
    cir=2*PI*r;
}
main()
{
    Circle c; //c is an object of the Circle
    system("cls");
    cout << "\t\t*To IMPLEMENT A CLASS CIRCLE*\t\t" <<endl;
    c.getdata();
    c.calarea();
    c.calcir();
    c.putdata();
    getch();
    return 0;
}
