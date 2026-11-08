class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        multimap<int,int,greater<int>> mpp2;
        for(auto it: mpp){
            mpp2.insert({it.second,it.first});
        }
        vector<int> ans;
        for(auto it: mpp2){
            if(k==0){
              break;
            }
            ans.push_back(it.second);
            k--;
        }
        return ans;
    }
};
