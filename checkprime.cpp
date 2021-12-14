#include<iostream>
using namespace std;
int main()

{
	int no; cin>>no;
	
	int temp=0;
	
	for(int i=2; i<=no-1; i++)
	{
		
		if(no%i==0)
		{
		temp=1;
		 break;
		}
		
	}
	if(temp==1)
	{
		cout<<"No is not prime";
	}
	else cout<<"no is prime";
	 
	return 0;
}