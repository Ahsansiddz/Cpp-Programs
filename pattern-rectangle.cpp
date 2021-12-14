#include<iostream>
using namespace std;

int main()
{
    int x;
  cout<<"Enter any number : ";  cin>>x;

    for(int i = 1; i <= x; i++)
    {
        for(int j = 1; j <= x*2; j++)
        {
            if( i == 1 || i == x || j == 1 || j == x*2 )
                cout << "0";
            else
                cout << " ";
        }
        cout << endl;
    }
}
