#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    
    int wordC, n;
    cin >> wordC;
    cin >> n;

    map<string, string> myMap;
    for (int i = 0; i < n; i++) {
        string temp1, temp2;
        cin >> temp1 >> temp2;
        myMap[temp1] = temp2;
    }
    
    string ary[wordC];
    for (int j = 0; j < wordC; j++) {
        string temp;
        cin >> temp;
        ary[j] = temp;
    }
    
    for (int j = 0; j < wordC; j++) {
        auto it = myMap.find(ary[j]);
        if (it != myMap.end()) {
            if (it->first.size() <= it->second.size()) {
                ary[j] = it->first;
            } else {
                ary[j] = it->second;
            }
        }
    }
    for(int k = 0 ;  k < wordC - 1; k++){
        cout << ary[k] << " ";
    }
    cout<<ary[wordC- 1];
    return 0;
}
