#include<bits/stdc++.h>
using namespace std;

class Number {
    int x,y;
public:
    Number(){ x=0; y=0; }
    Number(int a,int b){ x=a; y=b; }

    void print();
    Number operator ++ ();
    Number operator ++ (int a);
};

Number Number :: operator ++ ()
{
    Number temp;
    x++; y++;
    temp.x = x;
    temp.y = y;
    return temp;
}

Number Number :: operator ++ (int a)
{
    Number temp;
    temp.x = x;
    temp.y = y;
    x++; y++;
    return temp;
}

void Number :: print()
{
    cout<<"x = "<<x<<" y = "<<y<<endl;
}
int main()
{
    Number n1(3,4),n2(7,8),n3;

    cout<<"Before Increment N1 : "; n1.print();
    n3=n1++;
    cout<<"After Increment N1 : "; n1.print();
    n3.print();
}
