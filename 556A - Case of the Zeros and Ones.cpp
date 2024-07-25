/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int counter = 0;
    
    for(int i = 0 ; i < n; i++){
        char ch;
        cin >> ch;
        if(ch == '0'){
            counter -= 1;
        }
        else{
            counter += 1;
        }
    }
    
    if(counter < 0){
        counter = -1 * counter;
    }
    
    cout<< counter;
    return 0;
}
