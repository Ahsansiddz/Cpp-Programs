#include<iostream>
using namespace std;

 int main()
	{
	   int a=0,b=1;
	   int c;
	   cout<<a<<" ";
	   for(int i=0; i<15; i++)
	   {
	   	 c=a+b;
		cout<<c<<" ";
	   	 a=b;
	   	 b=c;
	   }	
		return 0;
	}