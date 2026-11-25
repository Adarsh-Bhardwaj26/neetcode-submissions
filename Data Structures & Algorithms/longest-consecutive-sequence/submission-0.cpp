class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> ss;
        for(int i =0;i<nums.size();i++){
                ss.insert(nums[i]);
        }
        if(ss.empty()){
            return 0;
        }
        int a =1;
        int c=1;
        int prev=*ss.begin();
        for(int x: ss){
            if( prev+1==x){
                c++;
            }
            else{
                c=1;
            }
            prev= x;
            a=max(a,c);
        }
        return a;

    }
};
