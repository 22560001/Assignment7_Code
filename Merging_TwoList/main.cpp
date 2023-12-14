#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(const vector<int>& l1, const vector<int>& l2) {
    vector<int> merged;
    size_t i = 0, j = 0;

    while (i < l1.size() && j < l2.size()) {
        if (l1[i] < l2[j]) {
            merged.push_back(l1[i]);
            ++i;
        } else {
            merged.push_back(l2[j]);
            ++j;
        }
    }

    while (i < l1.size()) {
        merged.push_back(l1[i]);
        ++i;
    }

    while (j < l2.size()) {
        merged.push_back(l2[j]);
        ++j;
    }

    return merged;
}

int main() {
    vector<int> l1 = {1, 3, 5, 7, 9};
    vector<int> l2 = {0, 2, 4, 6, 8};

    vector<int> mergedList = merge(l1, l2);

    cout << "Merged list: ";
    for (int num : mergedList) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
