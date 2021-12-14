#include<iostream>
using namespace std;
 
 int ffact (int n);
 	int fact=1;
  	
  int main()
  {
  	int n;
  	cout<<"enter number : "; cin>>n; 
  	cout<<"fact of " <<n<<" is : "<<ffact(n);
  	return 0;
  }
  
  int ffact (int n)
  {
  
    if(n>1)
	{
		fact*=n;
	
		ffact(n-1);
	} 
//	cout<<fact;
	return fact;
  
  }