#include "quickSort.h"

void quickSort(std::vector<int>& v) {
    quickSort(v, 0, v.size()-1);
}

void quickSort(std::vector<int>& v, int left, int right) {
    if(left < right) {
        int middle = partition(v, left, right);
        quickSort(v, left, middle - 1);
        quickSort(v, middle + 1, right);
    }
}

int partition(std::vector<int>& v, int left, int right) {
    int x {v[right]};
    int i {left - 1};
    int temp;
    for(int j = left; j < right; ++j) {
        if(v[j] <= x) {
            ++i;
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }
    temp = v[i+1];
    v[i+1] = v[right];
    v[right] = temp;
    return i + 1;
}
