#include<bits/stdc++.h>
using namespace std;


class teacher{
public:
    string id,name,designation;
    teacher(string ID,string Name,string desig){
        id=ID;
        name=Name;
        designation=desig;
    }
};

class Course
{
public:
    string courseTitle,code;
    double credit;
    Course(string Code,string coursetitle,double Credit){
        courseTitle=coursetitle;
        code= Code;
        credit=Credit;
    }
        vector<teacher>t;

};

class academic_record{
public:
    double t_credit,cgpa;
    academic_record(double a,double b){
        t_credit=a; cgpa=b;
    }
};

class Student{
public:
    string id,name,adress;

    Student(string i,string n,string ad){
        id=i; name=n; adress=ad;
    }
    vector<Course>courses;
    vector<academic_record>ar;
};


int main()
{
    Course c("CSTE 2101","C++",3.0);
    Course c1("CSTE 3105","DBMS",3.0);
    teacher t1("x2014","Hasnat Riaz","Lecturer");
    teacher t2("x2010","Towhid Alom","Lecturer");
    c.t.push_back(t1); c1.t.push_back(t2);
    academic_record ar(162.0,3.75);
    Student s("ASH01","Taskin","Dhaka");
    s.courses.push_back(c); s.courses.push_back(c1);
    s.ar.push_back(ar);

    cout<<"Name of the student : "<<s.name<<endl<<"\n\tHis/Her Academic Records \n-->Credit completed : "<<s.ar[0].t_credit<<"\n-->CGPA : "<<s.ar[0].cgpa<<endl;
    cout<<"\n\tCourses taken by this student \n-->Course No 1 : "<<s.courses[0].courseTitle<<"\nThis course was taken by : "<<s.courses[0].t[0].name<<"\n\t\t\t   "<<s.courses[0].t[0].designation<<endl;
    cout<<"\n-->Course No 2 : "<<s.courses[1].courseTitle<<"\nThis course was taken by : "<<s.courses[1].t[0].name<<"\n\t\t\t   "<<s.courses[1].t[0].designation<<endl;
    system("pause");
}
