#include <iostream>

using namespace std;

int main(){
    int lines;
    cin>>lines;
   if(lines > 0){
    cout<<lines<<endl;
   }
   else{
    int temp = lines;
    int t1 = temp % 10;
    temp = temp / 10;
    int t2 = temp % 10;
    if(t1>t2){
        lines = lines / 100;
        lines = lines * 10;
        lines = lines + t1;
        cout<<lines<<endl;
    }
    else{       
        cout<<lines/10<<endl;
    }
   }
}