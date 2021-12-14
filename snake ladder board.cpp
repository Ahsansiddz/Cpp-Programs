
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;


int main()
{
    char c;
    int x, y, num_block;
    int var_x;
        for(y = 0; y <= 20; y++){
                if(y%2 == 0)
                    var_x = 30;
                else
                    var_x = 20;
                    //on odd numbers var_x=20 on even var_x=30
                    
            for(x = 0; x <= var_x; x++){
                if(x%2 == 0 || y%2 == 0)
                    cout << "\xb1";
 
                else{
                //	x*2+1 - 1+x =x ; number repeat itself if x=odd ; not used in this program
                //--
            //    y=1 3 5 7 9 11 13 15 17 19
            //    x=1 3 5 7 9 11 13 15 17 19
   
// -------------------------------------------------------------------------      
//    Passes    |  X-Values | Y-Values
//--------------------------------------------------------------------------
      // 1st    | 100 - 110 |    9
      // 2nd    | 100 - 110 |   19    
      // 3rd    | 100 - 110 |   29
      // 4th    | 100 - 110 |   39
      // 5th    | 100 - 110 |   49
      // 6th    | 100 - 110 |   59
      // 7th    | 100 - 110 |   69
      // 8th    | 100 - 110 |   79
      // 9th    | 100 - 110 |   89
      // 10th   | 100 - 110 |   99
                //  y=x*2+1 ; make the number to  odd          
              //Remove odd  : count start with 0 - > (y-1)/2 ; used in this program
              //Remove odd  : count start with 1 - > (y+1)/2 ; used in this program    
	   
// Faraz formula : num_block = (x + 191 - 10*y)/2 ; ; optional to use ; just replace the line 51 i-e numblock equation line with this formula
             
               
                    num_block = ((x-1)/2+100) - (((y+1)/2*10)-1)  ;
                    if(num_block < 10)
                        cout << 0;
                    cout << num_block;
                }
            }
        
            cout << endl;
          
        }
}
