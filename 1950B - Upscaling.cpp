/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    //std::cout << "Hello World";
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int num;
        cin >> num;
        num = num + num;
        for(int j = 1; j <= num; j++) {
            if(j % 4 == 1 || j % 4 == 2) {
                for(int k = 1; k <= num; k++) {
                    if(k % 4 == 1 || k % 4 == 2) {
                        cout << "#";
                    } else {
                        cout << ".";
                    }
                }
            } else {
                for(int k = 1; k <= num; k++) {
                    if(k % 4 == 1 || k % 4 == 2) {
                        cout << ".";
                    } else {
                        cout << "#";
                    }
                }
            }
            cout << endl;
        }
    }
    return 0;
}
