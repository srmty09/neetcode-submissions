class Solution {
public:
    long long func(vector<int>& piles, int speed){
        long long hours = 0;
        for(int bananas : piles){
            hours += (bananas + speed - 1) / speed;
        }
        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int i = 1;
        int j = *max_element(piles.begin(), piles.end());
        int ans = j;

        while(i <= j){
            int mid = i + (j - i) / 2;

            if(func(piles, mid) <= h){
                ans = mid;
                j = mid - 1;
            }
            else{
                i = mid + 1;
            }
        }

        return ans;
    }
};