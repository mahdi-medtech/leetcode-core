int longestConsecutive(int* nums, int numsSize) {
    int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
    }

    if (numsSize == 0) return 0;

    qsort(nums, numsSize, sizeof(int), compare);

    int longest = 1;
    int current = 1;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i - 1]) {
            continue; // skip duplicates
        }
        else if (nums[i] == nums[i - 1] + 1) {
            current++;
        } else {
            if (current > longest) longest = current;
            current = 1;
        }
    }

    if (current > longest) longest = current;

    return longest;
}
