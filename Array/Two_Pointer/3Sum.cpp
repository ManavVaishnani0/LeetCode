#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());

    cout << "triplets: ";

    for(int i=0;i<n;i++){
        int left=(i+1),right=(n-1);

        while(left<right){
            int sum=arr[i]+arr[left]+arr[right];
            if(sum==0){
                cout << arr[i] << " " << arr[left] << " " << arr[right] << endl;
                left++;
                right--;
                while(left<right && arr[left]==arr[left-1]){
                    left++;
                }
                while(left<right && arr[right]==arr[right+1]){
                    right--;
                }
            }
            else if(sum<0){
                left++;
            }
            else{
                right--;
            }
        }
    }
    return 0;

}