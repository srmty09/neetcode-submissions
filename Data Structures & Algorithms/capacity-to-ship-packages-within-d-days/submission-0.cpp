class Solution {
public:
    int daysRequired(vector<int>& weights, int capacity) {
        int days = 1;
        int currWeight = 0;

        for (int w : weights) {
            if (currWeight + w <= capacity) {
                currWeight += w;
            } else {
                days++;
                currWeight = w;
            }
        }

        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (daysRequired(weights, mid) <= days) {
                high = mid;          
            } else {
                low = mid + 1;       
            }
        }

        return low;
    }
};