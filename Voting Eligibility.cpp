#include<iostream>
#include<string>
using namespace std;

int main()
{
	int age,d;
	string name;
	cout<<"Hey mate what's your name : ";
	cin>>name;
	cout<<"\n"<<name<<" What is your age : ";
	cin>>age;
	
	d=18-age;
	
	if(age>=18)
	{
		cout<<"\nCongratulations...."<<name<<" you are eligible for voting";
	}
	else
	{
		cout<<"\nSorry "<<name<<" you are still not eligible for voting , wait for "<<d<<" years";
	}
	return 0;
}
