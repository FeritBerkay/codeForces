#include <iostream>

using namespace std;

int main(){
    int lines;
    cin>>lines;
    for(int i =0; i < lines; i++){
        int a, b, c;
        cin>>a;
        cin>>b;
        cin>>c;
        if(a+b==c){
            cout<<"+"<<endl;
        }
        else{
            cout<<"-"<<endl;
        }
    }
}