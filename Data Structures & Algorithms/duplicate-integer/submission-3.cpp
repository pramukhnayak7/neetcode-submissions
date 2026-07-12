class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_set<int> x;

       for(int y : nums){
        if(x.count(y)){
            return true;

        }
        x.insert(y);
       }
       return false;
        
    }
};