#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << " enter the size of an array: ";
    cin >> n;

    cout << "enter the element of an array: ";
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int count = 0;
    int max_count = 0;

    for(int i = 0; i < n; i++){
        if(nums[i] == 1){
            count++;
        }
        else{
            max_count = max(max_count, count);
            count = 0;
        }
    }

    max_count = max(max_count, count);

    cout << "Maximum number of consecutive one's: " << max_count;

    return 0;
}