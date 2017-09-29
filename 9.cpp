#include <iostream>
using namespace std;

class Shape
{
protected:
	float width, height;
public:
	Shape (float a, float b)
	{
		width = a;
		height = b;
	}
};

class Rectangle: public Shape
{
public:
    Rectangle (float c,float d):Shape(c,d)
    {

    }

	float area ()
	{
		return (width * height);
	}
};

class Triangle: public Shape
{
public:
    Triangle (float c,float d):Shape(c,d)
    {

    }
	float area ()
	{
		return (width * height / 2);
	}
};

int main (){

	Rectangle rect(5,3);
	Triangle tri(2,5);
	cout << rect.area() << endl;
	cout << tri.area() << endl;
	return 0;
}
