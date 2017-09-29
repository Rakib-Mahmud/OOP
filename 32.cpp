#include<bits/stdc++.h>
using namespace std;

double division(double x,double y)
{
    if(y==0){
        throw "Error msg";
    }
    else {return x/y;}
}

int main()
{
    double x,y,d;
    try{
    cout<<"Enter divident(1st) and divisor "<<endl;
    cin>>x>>y;
    if(cin.fail()){
        throw "Error Input";
        }
        d=division(x,y);
        cout<<"Answer is : "<<d<<endl;
    }
    catch(...){
        cout<<"Something went's wrong "<<endl;
    }
}
