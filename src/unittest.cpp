#include <vector>
#include "insertionSort.h"
#include "selectionSort.h"
#include "gtest/gtest.h"

TEST(insertionSort, sorted) {
    std::vector<int> i {6, -4, 56, 6, 1, 25324, 32, 43};
    insertionSort(i);
    ASSERT_TRUE(i[0] == -4);
    ASSERT_TRUE(i[1] == 1);
    ASSERT_TRUE(i[2] == 6);
    ASSERT_TRUE(i[3] == 6);
    ASSERT_TRUE(i[4] == 32);
    ASSERT_TRUE(i[5] == 43);
    ASSERT_TRUE(i[6] == 56);
    ASSERT_TRUE(i[7] == 25324);
}

TEST(insertionSortDesc, sorted) {
    std::vector<int> i {6, -4, 56, 6, 1, 25324, 32, 43};
    insertionSortDesc(i);
    ASSERT_TRUE(i[7] == -4);
    ASSERT_TRUE(i[6] == 1);
    ASSERT_TRUE(i[5] == 6);
    ASSERT_TRUE(i[4] == 6);
    ASSERT_TRUE(i[3] == 32);
    ASSERT_TRUE(i[2] == 43);
    ASSERT_TRUE(i[1] == 56);
    ASSERT_TRUE(i[0] == 25324);
}

TEST(selectionSort, sorted) {
    std::vector<int> i {6, -4, 56, 6, 1, 25324, 32, 43};
    insertionSort(i);
    ASSERT_TRUE(i[0] == -4);
    ASSERT_TRUE(i[1] == 1);
    ASSERT_TRUE(i[2] == 6);
    ASSERT_TRUE(i[3] == 6);
    ASSERT_TRUE(i[4] == 32);
    ASSERT_TRUE(i[5] == 43);
    ASSERT_TRUE(i[6] == 56);
    ASSERT_TRUE(i[7] == 25324);
}
