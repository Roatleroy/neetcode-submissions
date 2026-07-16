class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0; 
        int r = height.size()-1;
        int heightL = height[l];
        int heightR = height[r];
        int add = 0;
        while(r > l){
            while (heightL > heightR){
                if (heightR > height[r-1])
                {
                    add += heightR-height[r-1];
                    cout << "right (" << r << ") adds " << heightR-height[r-1] << " ";
                }
                r--;
                heightR = max(height[r], heightR);
            }
            if (heightL > height[l+1] && r > l)
            {
                add += heightL-height[l+1];
                cout << "left (" << l << ") adds " << heightL-height[l+1] << " ";
            }
            l++;
            heightL = max(height[l], heightL);
        }

        return add;
    }
};
