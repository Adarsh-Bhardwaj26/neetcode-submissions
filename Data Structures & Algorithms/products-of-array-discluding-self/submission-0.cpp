class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        int zero=0;
        vector<int> produ(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero++;
            }
            else{
                prod*=nums[i];
            }
        }
        if(zero>1){
            return produ;
        }
        for(int i=0;i<nums.size();i++){
            if(zero==0){
                produ[i]=prod/nums[i];
                
            }
            else{
                if(nums[i]==0){
                    produ[i]=prod;

                }
            }
        }
        return produ;
    }
};
