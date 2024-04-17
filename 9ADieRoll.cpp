#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {

int y;
int w;
cin>>y;
cin>>w;

int n = max(y,w);

int result = 7-n;

int temp = 6;
for(int i = 2; i<4; i ++){
    if(temp%i == result%i){
        temp = temp/i;
        result = result/i;
    }
}
cout<<result<<"/"<<temp;

}