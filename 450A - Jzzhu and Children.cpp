#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    int nS;  
    int cCnt; 
    
    cin >> nS >> cCnt; 
    // first pair indicates which child is it.
    queue<pair<int, int>> q; // Queue to hold pairs of (child_index, remaining_candies)
    
  
    for (int i = 0; i < nS; i++) {
        int temp;
        cin >> temp;
        q.push({i + 1, temp}); 
    }


    while (q.size() > 1) {
        pair<int, int> front = q.front();
        q.pop();

        front.second -= cCnt;

        if (front.second > 0) {
            q.push(front);
        }
    }

    int lastChildIndex = q.front().first;
    cout << lastChildIndex << endl;

    return 0;
}
