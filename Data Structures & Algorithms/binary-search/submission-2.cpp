class Solution {
public:
    int search(vector<int>& nums, int target) {
        int f = (nums.size()/2);
        int r = nums.size()-1;
        int l = 0;


        if (nums[l] == target)
        {
            return l;
        }
        if (nums[r] == target)
        {
            return r;
        }
        while(r - l > 1)
        {
            if (nums[f] == target)
            {
                return f;
            }
            else if (nums[f] > target)
            {
                r = f;
                f = (((r-l)/2) + l);
            }
            else
            {
                l = f;
                f = (((r-l)/2) + l);
            }
        }

        return -1;

    }
};
