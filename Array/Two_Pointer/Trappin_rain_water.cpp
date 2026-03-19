#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m;
    cout << "Enter the number of blocks: ";
    cin >> m;

    vector<int> height(m);
    for(int i = 0; i < m; i++){
        cin >> height[i];
    }

    // Step 1: Create leftMax array
    vector<int> leftMax(m);
    leftMax[0] = height[0];

    for(int i = 1; i < m; i++){
        leftMax[i] = max(leftMax[i-1], height[i]);
    }

    // Step 2: Create rightMax array
    vector<int> rightMax(m);
    rightMax[m-1] = height[m-1];

    for(int i = m-2; i >= 0; i--){
        rightMax[i] = max(rightMax[i+1], height[i]);
    }

    // Step 3: Calculate trapped water
    int water = 0;

    for(int i = 0; i < m; i++){
        int trapped = min(leftMax[i], rightMax[i]) - height[i];
        if(trapped > 0){
            water += trapped;
        }
    }

    cout << "Total trapped water: " << water << endl;

    return 0;
}