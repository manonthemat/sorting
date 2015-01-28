#include <vector>
#include "insertionSort.h"
#include "selectionSort.h"
#include "heapSort.h"
#include "gtest/gtest.h"

TEST(insertionSort, sorted) {
    std::vector<int> i {6, -4, 56, 6, 1, 25324, 32, 43};
    insertionSort(i);
    ASSERT_EQ(-4, i[0]);
    ASSERT_EQ(1, i[1]);
    ASSERT_EQ(6, i[2]);
    ASSERT_EQ(6, i[3]);
    ASSERT_EQ(32, i[4]);
    ASSERT_EQ(43, i[5]);
    ASSERT_EQ(56, i[6]);
    ASSERT_EQ(25324, i[7]);
}

TEST(insertionSortDesc, sorted) {
    std::vector<int> i {6, -4, 56, 6, 1, 25324, 32, 43};
    insertionSortDesc(i);
    ASSERT_EQ(-4, i[7]);
    ASSERT_EQ(1, i[6]);
    ASSERT_EQ(6, i[5]);
    ASSERT_EQ(6, i[4]);
    ASSERT_EQ(32, i[3]);
    ASSERT_EQ(43, i[2]);
    ASSERT_EQ(56, i[1]);
    ASSERT_EQ(25324, i[0]);
}

TEST(selectionSort, sorted) {
    std::vector<int> i {6, -4, 56, 6, 1, 25324, 32, 43};
    insertionSort(i);
    ASSERT_EQ(-4, i[0]);
    ASSERT_EQ(1, i[1]);
    ASSERT_EQ(6, i[2]);
    ASSERT_EQ(6, i[3]);
    ASSERT_EQ(32, i[4]);
    ASSERT_EQ(43, i[5]);
    ASSERT_EQ(56, i[6]);
    ASSERT_EQ(25324, i[7]);
}

TEST(heapSort, build_max_heap) {
    std::vector<int> ht {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
    build_max_heap(ht);
    ASSERT_EQ(16, ht[0]);
    ASSERT_EQ(14, ht[1]);
    ASSERT_EQ(10, ht[2]);
    ASSERT_EQ(8, ht[3]);
    ASSERT_EQ(7, ht[4]);
    ASSERT_EQ(9, ht[5]);
    ASSERT_EQ(3, ht[6]);
    ASSERT_EQ(2, ht[7]);
    ASSERT_EQ(4, ht[8]);
    ASSERT_EQ(1, ht[9]);
}
