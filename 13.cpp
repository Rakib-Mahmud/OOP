#include<bits/stdc++.h>
#include<conio.h>
using namespace std;


class TEST
{
  private:
	int flight;
	string Destination;
	float distance;
	float fuel;
	float CALFuel()
	{
		if(distance<=1000){ fuel=500; }
		else if(distance>1000 && distance<=2000){ fuel=1100; }
		else {fuel=2200; }
		return fuel;
	}
  public:
	void FEEDINFO();
	void SHOWINFO();
};

void TEST::FEEDINFO()
{
	cout<<"Enter Flight No. ";
	cin>> flight;
	cout<<"Enter destination ";
	getchar();
	getline(cin,Destination);
	cout<< "Enter Distance ";
	cin>>distance;
	fuel=CALFuel();
}

void TEST :: SHOWINFO()
{
	cout<<"Flight NO :"<<flight<<"\nDestination "<<Destination<<"\nDistance : "
	<<distance<<"\nFuel needed : "<<fuel<<endl;
}

int main ()
{
	TEST obj;
	obj.FEEDINFO();
	obj.SHOWINFO();
	getch();
	return 0;
}
