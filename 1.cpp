#include<iostream>
using namespace std;

class employee
{
  protected:
	int   emp_id;
	float emp_sal;
	float emp_da;

	public:

		void get_details();
		void find_net_sal();
		void show_emp_details();
};

void employee :: get_details()
{
	cout<<"\nEnter employee numbers:\n";
	cin>>emp_id;
	cout<<"\nEnter employee salary:\n";
	cin>>emp_sal;
}

void employee :: find_net_sal()
{
	emp_da=0.2*emp_sal;

}

void employee :: show_emp_details()
{

	cout<<"\n\nEmployee number:      "<<emp_id;
	cout<<"\nsalary     :  "<<emp_sal;
	cout<<"\nEmployee DA      :  "<<emp_da;

}

int main()
{
	employee emp[50]; //it must be more than 25 :)
	int i,num;


	cout<<"\nEnter number of employee details\n";
	cin>>num;

	for(i=0;i<num;i++)
		emp[i].get_details();

	for(i=0;i<num;i++)
		emp[i].find_net_sal();

	for(i=0;i<num;i++)
		emp[i].show_emp_details();


	return 0;
}
