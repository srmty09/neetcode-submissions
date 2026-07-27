class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int D_5 = 0;
        int D_10 = 0;

        for (int bill : bills) {
            if (bill == 5) {
                D_5++;
            }
            else if (bill == 10) {
                if (D_5 == 0)
                    return false;
                D_5--;
                D_10++;
            }
            else { 
                if (D_10 > 0 && D_5 > 0) {
                    D_10--;
                    D_5--;
                }
                else if (D_5 >= 3) {
                    D_5 -= 3;
                }
                else {
                    return false;
                }
            }
        }

        return true;
    }
};