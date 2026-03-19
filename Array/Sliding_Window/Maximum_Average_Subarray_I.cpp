#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "enter the size of array: ";
    cin >> n;
    vector<int>nums(n);
    cout << "enter the elements: ";
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    int k;
    cout << "enter the size of subarray: ";
    cin >> k;
    int sum = 0;
    for(int i=0;i<k;i++){
        sum = sum + nums[i];
    }

    int max_sum = sum;
    for(int i=k;i<n;i++){
        sum = sum - nums[i-k] + nums[i];
        if(sum > max_sum){
            max_sum = sum;
        }
    }
    double average = (double)max_sum / k;
    cout << "Maximum Average Value: " << average;
    return 0;
}