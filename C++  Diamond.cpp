#include <iostream>
#include <header.h>

using namespace std; 
int i , j , space, num;


int main()
{
    
    cout << "Enter The Diamond Radius" << endl;
    cin >> num;
    for ( i =num; i> 0; i--){
        for( j = 0 ; j < i ; j++){
            cout << "*" ;
        }
        for(space =  0; space < (num - i)*2 ; space++){
            
            cout<<" ";
        }
        for(j = 0 ; j < i; j++){
                cout << "*";
            }
        cout << endl;
    }
    
    // -----------First Half Ends------------
    
    for(i = num ; i > 1; i--){
        for(j = num ; j > i - 2 ; j--){
            cout << "*";
        }
        for(space = 0 ; space < (2*i) - 4 ; space++)
        {
            cout<<" ";
        }
        
        for(j = num ; j > i - 2 ;  j--){
            cout << "*";
        }
        
         // -----------Second Half Ends------------
        
        
        cout << endl;
    }
    
    
    
   

    return 0;
}
