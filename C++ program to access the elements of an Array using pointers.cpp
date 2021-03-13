#include<iostream>
using namespace std;

int main()
{
	int arr[5];
	cout<<"Enter Elements : \n";
	
	for(int i=0;i<5;++i)
	cin>>arr[i];
	
	cout<<"\nYou Entered : \n";
	for(int i = 0 ; i<5 ; ++i)
	cout<<*(arr+i) <<" ";
	
	return 0; 
	
}
