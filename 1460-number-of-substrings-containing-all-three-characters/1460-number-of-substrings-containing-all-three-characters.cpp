class Solution {
public:
    int numberOfSubstrings(string s) {
        int lastSeenPositions[3]={-1,-1,-1};
        int substringCount=0;
        for(int index=0;index<s.size();++index){
            lastSeenPositions[s[index] - 'a'] = index;
            int minLastSeenPosition = min(lastSeenPositions[0],min(lastSeenPositions[1], lastSeenPositions[2])) + 1;
            substringCount += minLastSeenPosition;
        }
        return substringCount;
    }
};