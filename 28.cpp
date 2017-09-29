#include<bits/stdc++.h>
using namespace std;

class X {
    double x,y;
public:
    X(){ x=0; y=0; }
    X(double a,double b){ x=a; y=b; }

    bool operator == (X a);
};

bool X ::operator==(X a)
{
    return ((x==a.x) && (y==a.y));
}

int main()
{
    double a,b,c,d;
    cout<<"Enter the values (first object 1st): "<<endl<<"-->";
    cin>>a>>b>>c>>d;

    X ob1(a,b),ob2(c,d);

    if(ob1 == ob2)
    cout<<"Objects are same"<<endl;

    else
    cout<<"Objects are different"<<endl;

    return 0;
}
