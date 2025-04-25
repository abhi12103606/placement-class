class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=1e9;
        while(l<r){
            int mid=l+(r-l) /2;
            int hours=0;

            for (int pile:piles){
                hours+=(pile+mid-1)/mid;
            }
            if(hours<=h){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};