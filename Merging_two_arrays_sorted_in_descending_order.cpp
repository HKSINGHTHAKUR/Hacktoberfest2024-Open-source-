#include <iostream>
#include <vector>
using namespace std;

// Function to merge two reverse-sorted arrays (in descending order)
vector<int> mergeReverseBubbleSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> merged;
    int i = 0, j = 0;

    // Merge the arrays by comparing elements
    while (i < n1 && j < n2) {
        if (arr1[i] >= arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    // If there are remaining elements in arr1
    while (i < n1) {
        merged.push_back(arr1[i]);
        i++;
    }

    // If there are remaining elements in arr2
    while (j < n2) {
        merged.push_back(arr2[j]);
        j++;
    }

    return merged;
}

// Function to display an array
void displayArray(const vector<int>& arr) {
    for (int elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    // Two arrays sorted in descending order
    vector<int> arr1 = {9, 7, 5, 3, 1};
    vector<int> arr2 = {8, 6, 4, 2};

    cout << "Array 1: ";
    displayArray(arr1);

    cout << "Array 2: ";
    displayArray(arr2);

    // Merging the two arrays
    vector<int> mergedArray = mergeReverseBubbleSortedArrays(arr1, arr2);

    cout << "Merged Array: ";
    displayArray(mergedArray);

    return 0;
}
