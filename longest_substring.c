int lengthOfLongestSubstring(char* s) {
    int map[256] = {0};
    int left = 0, maxLen = 0;

    for(int right = 0; s[right] != '\0'; right++){
        map[s[right]]++;

        while(map[s[right]] > 1){
            map[s[left]]--;
            left++;
        }

        int len = right - left + 1;
        if(len > maxLen){
            maxLen = len;
        }
    }

    return maxLen;
}s
