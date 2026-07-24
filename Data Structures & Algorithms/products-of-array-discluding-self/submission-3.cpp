class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zero = 0;
        

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                product *= nums[i];
            } else {
                zero++;
            }
        }
        
        vector<int> output(nums.size());  
        
        if(zero == 0) {
           
            for(int i = 0; i < nums.size(); i++) {
                output[i] = product / nums[i];
            }
        }
        else if(zero == 1) {
            
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] == 0) {
                    output[i] = product;
                } else {
                    output[i] = 0;
                }
            }
        }
        else {
           
            fill(output.begin(), output.end(), 0);
        }
        
        return output;
    }
};
