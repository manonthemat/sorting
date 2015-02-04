#ifndef QUICKSORT_H_
#define QUICKSORT_H_

#include <vector>

void quickSort(std::vector<int>& v);
void quickSort(std::vector<int>& v, int left, int right);
int partition(std::vector<int>& v, int left, int right);

#endif
