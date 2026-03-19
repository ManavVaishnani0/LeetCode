#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements (sorted): ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    int left = 0;
    int right = n - 1;

    while(left < right){
        int sum = arr[left] + arr[right];

        if(sum == target){
            cout << "Indices: " << left + 1 << " " << right + 1;
            break;
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }

    return 0;
}
