#ifndef HEAPSORT_H_
#define HEAPSORT_H_

#include <vector>
int get_left_idx(int i);
int get_right_idx(int i);

void max_heapify(std::vector<int>& v, int i);
void build_max_heap(std::vector<int>& v);
void heapSortDesc(std::vector<int>& v);

#endif
