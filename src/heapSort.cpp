#include "heapSort.h"

int get_left_idx(int i) {
    return 2 * i + 1;
}

int get_right_idx(int i) {
    return 2 * i + 2;
}

void max_heapify(std::vector<int>& v, int i) {
    int largest;
    int left_index = get_left_idx(i);
    int right_index = get_right_idx(i);
    if (left_index <= v.size() && v[left_index] > v[i]) {
        largest = left_index;
    } else {
        largest = i;
    }
    if (right_index <= v.size() && v[right_index] > v[largest]) {
        largest = right_index;
    }
    if (largest != i) {
        int tmp = v[i];
        v[i] = v[largest];
        v[largest] = tmp;
        max_heapify(v, largest);
    }
}

void build_max_heap(std::vector<int>& v) {
    for (int i = v.size()/2; i >= 0; --i)
        max_heapify(v, i);
}
