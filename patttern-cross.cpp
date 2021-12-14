#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()
{
	int x,y;
    int n;
    cout<<"enter the no of rows";
    cin>>n;
    for( y = 1; y<= n; y++){
        for( x = 1; x<= n ;x++){
            if(x==y||x+y==n+1)
            cout << "0";
            else
            cout<<" ";
        }
        cout << endl;
    }

}
