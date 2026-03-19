#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout << "enter size of an array: ";
    cin >> n;
    vector<int>arr(n);
    cout << "enter the elements: ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << endl;
    int left=0,right=n-1;
    int maxArea=0;
    while(left<right){
        int h=min(arr[left],arr[right]);
        int w=right-left;
        maxArea = max(maxArea,h*w);
        if(arr[left]<arr[right]){
            left++;
        }
        else right--;
    }
    cout << "Maximum Area: " << maxArea ;
    return 0;
}