#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containDuplicates(vector<int> &arr) {
    unordered_set<int> elements;
    for (int num : arr) {
        if (elements.count(num)) return true;
        elements.insert(num);
    }
    return false;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 2, 3, 4, 1};

    cout << (containDuplicates(arr1) ? "Contains duplicates" : "No duplicates") << endl;
    cout << (containDuplicates(arr2) ? "Contains duplicates" : "No duplicates") << endl;

    return 0;
}
