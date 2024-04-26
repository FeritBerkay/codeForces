#include <iostream>
#include <vector>
#include <climits>
#include <cctype>
#include <string.h>
#include <cmath>
#include <unordered_map>
#include <limits>
using namespace std;

int main() {

    unordered_map<string, int> stringMap;
    int numC;
    cin >> numC;
    string temp;
    cin>>temp;
    for(int i = 0; i < numC - 1; i++){
        string val = temp.substr(i, 2);
        auto it = stringMap.find(val);
        if(it != stringMap.end()){
             
             stringMap[val]++;
        }
        else{
            stringMap[val] = 1;
        }
    }
    string maxKey;
    int maxValue = numeric_limits<int>::min(); 

    for (const auto& pair : stringMap) {
        if (pair.second > maxValue) {
            maxValue = pair.second;
            maxKey = pair.first;
        }
    }
    cout<<maxKey<<endl;
    return 0;
}