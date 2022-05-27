class Solution {
    
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> vect; 
        for (size_t i =0; i< nums.size();i++){
            for (size_t j = i+1; j<nums.size();j++){
                
                if(nums[i]+nums[j] == target){
                     vect.push_back(i);
                     vect.push_back(j);
                     return vect;
                }
            }
        }
        
        
    return vect;
        
    }
    
    
};