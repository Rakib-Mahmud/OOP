#include <iostream>
using namespace std;

class Polygon
{
	protected:
		int width, height;
	public:
		void setup (int first, int second)
		{
			width= first;
			height= second;
		}
};

class Rectangle: public Polygon
{
	public:
		int area()
		{
			return (width * height);
		}
};

class Triangle: public Polygon
{
	public:
		int area()
		{
			return (width * height / 2);
		}
};

int main ()
{
	Rectangle rectangle;
	Triangle triangle;

	Polygon * ptr_polygon1 = &rectangle;
	Polygon * ptr_polygon2 = &triangle;

	ptr_polygon1->setup(2,2);
	ptr_polygon2->setup(2,2);

	cout << rectangle.area () << endl;
	cout << triangle.area () << endl;

	return 0;
}
