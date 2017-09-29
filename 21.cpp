#include<iostream>
#include<conio.h>
using namespace std;

	       class Area
	       {

	              public:
	              void area(int r)           //Overloaded Function 1
	              {
	                    cout<<"\n\tArea of Circle is : "<<3.14*r*r;
	              }

	              void area(int l,int b)           //Overloaded Function 2
	              {
	                    cout<<"\n\tArea of Rectangle is : "<<l*b;
	              }

	              void area(float l,int b)           //Overloaded Function 3
	              {
	                    cout<<"\n\tArea of Rectangle is : "<<l*b;
	              }

	              void area(int l,float b)           //Overloaded Function 4
	              {
	                    cout<<"\n\tArea of Rectangle is : "<<l*b;
	              }

	       };


	      int  main()
	       {

	              Area C;

	              C.area(5);        //Statement 1
	              C.area(5,3);      //Statement 2
	              C.area(7,2.1f);    //Statement 3
	              C.area(4.7f,2);    //Statement 4

}
