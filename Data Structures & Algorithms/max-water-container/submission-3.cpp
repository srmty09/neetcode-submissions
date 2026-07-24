class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int max_water = 0;


        while (i < j) {

            int water = min(heights[i], heights[j]) * (j - i);
            max_water = max(max_water, water);


            if (heights[i] < heights[j]) {
                i++;
            } else {
                j--;
            }
        }

        return max_water;
    }
};

