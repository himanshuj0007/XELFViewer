#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int key) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == key) 
            return mid;
            
        else if (arr[mid] < key)
            left = mid + 1;
            
        else
            right = mid - 1;
    }
    
    return -1;
}

int main() {
    int n;

    cout << "Enter the size of the sorted array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements of the sorted array in ascending order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;

    cout << "Enter the element you want to search for: ";
    cin >> key;

    int result = binarySearch(arr, key);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array" << endl;
    
    return 0;
}
