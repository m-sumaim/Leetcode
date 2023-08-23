class Solution {
public:
// Initialization:
// Count the frequency of each character in the string.
// Populate the max heap with these frequencies.

// Processing Each Character:
// Pop the top two characters from the max heap (i.e., the ones with the highest frequency).
// Append these two characters to the result string.
// Decrement their frequencies and re-insert them back into the max heap.
// If only one character remains in the heap, make sure it doesn't exceed half of the string length, otherwise, return an empty string.

// Wrap-up:
// If there's a single remaining character with a frequency of 1, append it to the result.
// Join all the characters to return the final reorganized string.
    string reorganizeString(string s) {
        unordered_map<char, int> freq;
        for(char c:s)
            freq[c]++;
        
        priority_queue<pair<int,char>> maxheap;
        for(auto &[ch, fr] : freq)
            maxheap.push({fr, ch});
        
        string res;
        while(maxheap.size() >=2){
            auto [fr1, ch1] = maxheap.top();
            maxheap.pop();
            auto [fr2, ch2] = maxheap.top();
            maxheap.pop();

            res +=ch1;
            res +=ch2;

            if(--fr1 > 0)
                maxheap.push({fr1, ch1});
            if(--fr2 > 0)
                maxheap.push({fr2, ch2});
        }
        if(!maxheap.empty()){
            auto [fr, ch]  = maxheap.top();
            if(fr > 1)
                return "";
            res +=ch;
        }
        return res;
    }   
};