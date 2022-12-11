class Solution {
public:
    int specialArray(vector<int>& nums) {
       for(int i=0;i<=nums.size();i++)
       {   int p=i;
           int k=0;
           for(int j=0;j<nums.size();j++)
               if(nums[j]>=p) k++;
           if(k==p)  return p;
       }
        return -1;
    }
};