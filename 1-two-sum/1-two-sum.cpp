class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // visited map
        map<int,int> visited;
        vector<int> answer;
        
        for(int i = 0; i < nums.size(); i++){
            
            int req = target - nums[i];
            auto check = visited.find(req);
            
            if( check == visited.end() ){
                 visited.insert({nums[i],i});
            } else {
                answer.push_back(check->second);
                answer.push_back(i);
                break;
            }
            
        }
        return answer;

    }
};