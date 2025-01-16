#include<iostream>
using namespace std;
class student
{
	private:char name[20];
	        int roll ;
        	float marks;
	public:void input();
	       void display();
 };
	       void student::input();
	       void display();
	   {
	   	cin>>name>>roll>>marks;
	   	
	   }
	   void student::display()
{
	cout<<name<<roll<<marks;
	
}
    int main()
{
	student s1,s2;
	s1,input();
	s1,display();
	s2,input();
	s1,display();
	return 0;
}

