class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int N = nums.size();
        vector<int> vec;
        int itr = 0;
        while(itr<2){
            for(int i = 0; i<N;i++){
                vec.push_back(nums[i]);
            }
            itr++;
        }
        return vec;
    }
};