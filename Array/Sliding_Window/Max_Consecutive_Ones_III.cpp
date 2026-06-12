#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,k;
    cout << "Enter the size of an array: ";
    cin >> n;
    cout << "Enter the value of k: ";
    cin >> k;
    vector<int>nums(n);

    for(int i=0;i<n;i++){
        cout << "enter the element of array nums: ";
        cin >> nums[i];
    }

    int left = 0;
    int max_length = 0;
    int zero_count = 0;
    
    for(int right=0;right < n;right++){

        if(nums[right]==0){
            zero_count ++;
        }

        while(zero_count > k){
            if (nums[left]==0){
                zero_count--;

            }
            left++;
        }
        max_length = max(max_length,right-left+1);

    }
    cout << "Max lenght is: " << max_length;
    return 0;
}