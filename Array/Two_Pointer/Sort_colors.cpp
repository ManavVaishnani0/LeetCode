#include<iostream>
#include<vector>
using namespace std;
void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int n;
    cout << "enter the size of an array: ";
    cin >> n;
    vector<int>arr(n);
    cout << "enter color 0 for red,1 for white and 2 for blue: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    /*for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }*/
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;

}