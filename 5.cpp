#include<bits/stdc++.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>


using namespace std;
int i=0;
class toolbooth
{
          unsigned int carno[10];
          double amt[10];
          public:
          void paycar(int a,double b)
          {
                   carno[i]=a;
                   amt[i]=b;
                   i++;
          }
          void nonpaycar(int a,double b)
          {
                   carno[i]=a;
                   amt[i]=b;
                   i++;
          }
          void display()
          {
                   system("cls");
                   int x,cno=0;
                   double tamt=0.0;
                   cout<<"\nCar Number\t\tAmount Paid";
                   for(x=0;x<i;x++)
                   {
                             cout<<"\n"<<carno[x]<<"\t\t\t"<<amt[x];
                             cno++;
                             tamt=tamt+amt[x];
                   }
                   cout<<"\nTotal Cars :"<<cno;
                   cout<<"\nTotal Amount Collected :"<<tamt<<endl;
          }
};
 int main()
{
          system("cls");
          toolbooth t1;
          unsigned int a,x;
          const int ESC=27;
          char n;
          do
          {
                   system("cls");
                   cout<<"\nEnter Car Number :";
                   cin>>a;
                   cout<<"\nPress\n1.for Paid Car \n2.for Non Paid Car :" <<endl;
                   cin>>x;
                   if(x==1)
                   t1.paycar(a,0.50);
                   else if(x==2)
                   t1.nonpaycar(a,0.00);
                   else
                   cout<<"\nInvalid Choise";
                   cout<<"\nPress ESC to Stop :";
                   n=getch();
          }
          while(n!=27);
          t1.display();
          system("pause");
}
