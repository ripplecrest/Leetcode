class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        int count =0;
        for(int i = 0 ; i< n; i++){
            for(int j =i+1; j<n; j++)
            if(i >= 0 && j>i && nums[i] + nums[j] < target){
                count++;
            }
        }
        return count;
    }
};