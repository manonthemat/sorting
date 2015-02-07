#include "bubbleSort.h"

void bubbleSort(std::vector<int>& v) {
  for (int i = v.size() - 1; i > 0; --i)
    for (int j = 0; j <= i - 1; ++j)
      if (v[j] > v[j + 1])
        std::swap(v[j], v[j + 1]);
}
