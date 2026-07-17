/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int present[1001] = {0};
    int used[1001] = {0};

    // Mark elements from nums1
    for (int i = 0; i < nums1Size; i++) {
        present[nums1[i]] = 1;
    }

    int *result = (int *)malloc(sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size));
    *returnSize = 0;

    // Find unique common elements
    for (int i = 0; i < nums2Size; i++) {
        if (present[nums2[i]] && !used[nums2[i]]) {
            result[(*returnSize)++] = nums2[i];
            used[nums2[i]] = 1;
        }
    }

    return result;
}