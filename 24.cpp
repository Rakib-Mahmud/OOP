#include <iostream >
using namespace std;

class Figure {
protected:
    double area;
public:
    virtual double find_area()=0;

};

class Circle: public Figure{
protected:
    double radius;
public:
    Circle( double r){
        radius=r;
    }

    double  find_area ()
    {
    area =(3.1416*radius*radius);
    cout << "Circle class area :" <<area<<endl;
    return area;
    }
};

class Square: public Figure{
protected:
    double side;
public:
    Square(double s){
        side=s;
    }

    double find_area ()
    {
    area =(side*side);
    cout << "Square class area :"<< area<<endl;
    return area;
    }
};

int main( )
{
Figure *figure;
Circle cr(4.5);
Square sq(5.0);

figure = &cr;

figure->find_area();

figure= &sq;

figure->find_area();

return 0;
}
