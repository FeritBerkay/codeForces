#include <iostream>
#include <algorithm> // for std::max

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int nChest = 0;
    int nBiceps = 0;
    int nBacks = 0;
    
    for(int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        
        if(i % 3 == 1) {
            nChest += temp;
        } else if(i % 3 == 2) {
            nBiceps += temp;
        } else {
            nBacks += temp;
        }
    }
    
    // Find the maximum among nChest, nBiceps, and nBacks
    int max1 = max(nChest, nBiceps);
    int max2 = max(max1, nBacks);
    
    // Determine which muscle group has the highest total weight
    if(max2 == nBacks) {
        cout << "back";
    } else if(max2 == nChest) {
        cout << "chest";
    } else {
        cout << "biceps";
    }
    
    return 0;
}
