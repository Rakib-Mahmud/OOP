#include<iostream>
using namespace std;

class Account
{
  protected:
	int   ac_num;
	int   ac_bal;

	public:
        Account ();

		void show_ac_details();
};

Account :: Account()
{
	cout<<"\nEnter Account number:\n";
	cin>>ac_num;
	cout<<"\nEnter Account  Balance:\n";
	cin>>ac_bal;
}


void Account :: show_ac_details()
{

	cout<<"\n\nAccount  number:      "<<ac_num;

	cout<<"\nAccount  Balance     :  "<<ac_bal;

}

int main()
{

	int i,num;


	cout<<"\nEnter number of employee details\n";
	cin>>num;
    	Account emp[num];

        for(i=0;i<num;i++)
		emp[i].show_ac_details();


	return 0;
}
