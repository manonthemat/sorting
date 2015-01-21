#include <vector>

std::vector<int> insertionSort(std::vector<int> &v) {
    for(int j = 1, n = v.size(); j < n; ++j) {
        int key = v[j];
        int i = j - 1;
        while(i >= 0 && v[i] > key) {
            v[i+1] = v[i];
            --i;
        }
        v[i+1] = key;
    }
    return v;
}

std::vector<int> insertionSortDesc(std::vector<int> &v) {
    for(int j = 1, n = v.size(); j < n; ++j) {
        int key = v[j];
        int i = j - 1;
        while(i >= 0 && v[i] < key) {
            v[i+1] = v[i];
            --i;
        }
        v[i+1] = key;
    }
    return v;
}
