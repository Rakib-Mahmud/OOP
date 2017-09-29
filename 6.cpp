#include<conio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
class Time
{
          int h,m,s;
          public:
          Time()
          {
                   h=0;
                   m=0;
                   s=0;
          }
          Time(int a,int b,int c)
          {
                   h=a;
                   m=b;
                   s=c;
          }
          void set(int H,int M,int S)
          {
              h=H;
              m=M;
              s=S;
          }
          void display()
          {
                   if(h<10){
                    cout<<endl<<"0"<<h;
                   }
                   else{
                    cout<<endl<<h;
                   }
                   cout<<" : ";
                   if(m<10){
                    cout<<"0"<<m;
                   }
                   else{
                    cout<<m;
                   }
                   cout<<" : ";
                   if(s<10){
                    cout<<"0"<<s<<endl;
                   }
                   else{
                    cout<<s<<endl;
                   }
          }
          Time sum(Time t1,Time t2)
          {
                   Time t3;
                   t3.h=t1.h+t2.h;
                   t3.m=t1.m+t2.m;
                   t3.s=t1.s+t2.s;
                   return(t3);
          }

};
int  main()
{
         system("cls");
          int h,m,s;
          cout<<"Enter values of Hour ,Minutes & Seconds for t2 :"<<endl;
          cin>>h>>m>>s;
          Time t1(2,4,5),t2,t3;
          t2.set(h,m,s);
          t1.display();
          t2.display();
          t3=t3.sum(t1,t2);
          t3.display();
          system("pause");
}
