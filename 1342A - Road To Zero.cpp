/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        long long int x, y, a, b;
        cin >> x >> y >> a >> b;
        
        if(a * 2 < b){
            long long int temp = (x + y) * a;
            cout << temp << endl;
        }
        else{
            long long int mMA = max(x, y);
            long long int mM = min(x, y);
            long long int forA = mMA - mM;
            long long int forB = mM;
            long long int total = (forB * b) + (forA * a);
            cout << total << endl;
        }
    }

    return 0;
}
