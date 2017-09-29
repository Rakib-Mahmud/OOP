#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
class shape
{
            protected:
            float aoc,aor,aot,r,l,b,b1,b2,h;
            public:
            virtual void area()
            {
                cout<<"HACK"<<endl;
            }
            virtual void display()
            {
                cout<<"HACK"<<endl;
            }
};
class circle:public shape
{
            public:
            void area()
            {
                        cout<<"\nEnter radius of the circle:";
                        cin>>r;
                        aoc=3.14159*r*r;
            }
            void display()
            {
                        cout<<"\nArea of circle:" <<endl;
            }
};

class rectangle:public shape
{
            public:
            void area()
            {
                        cout<<"\n\nEnter length and breadth of the rectangle:";
                        cin>>l>>b;
                        aor=l*b;
            }
            void display()
            {
                        cout<<"\nArea of rectangle:"<<endl;
            }
};
class trapezoid:public shape
{
            public:
            void area()
            {
                        cout<<"\n\nEnter height of the trapezoid:";
                        cin>>h;
                        cout<<"\nEnter length of each base(b1,b2) of the trapezoid:";
                        cin>>b1>>b2;
                        aot=((b1+b2)/2)*h;
            }
            void display()
            {
                        cout<<"\nArea of trapezoid:"<<endl;
            }
};
int  main()
{
            system ("cls");
            shape *shapeptr;
            shape s;
            shapeptr=&s;
            shapeptr->area();
            shapeptr->display();
            circle c;
            rectangle r;
            trapezoid t;
            shapeptr=&c;
            shapeptr->area();
            shapeptr->display();
            shapeptr=&r;
            shapeptr->area();
            shapeptr->display();
            shapeptr=&t;
            shapeptr->area();
            shapeptr->display();
            system("pause");

}
