#include <vector>

std::vector<int> selectionSort(std::vector<int> &v) {
    for(int i=0, n=v.size(); i<n-1; ++i) {
        int c = v[i];
        int pos = i;
        for(int j=i; j<n; ++j) {
            if(v[j] < c) {
                c = v[j];
                pos = j;
            }
        }
        v[pos] = v[i];
        v[i] = c;
    }
    return v;
}
