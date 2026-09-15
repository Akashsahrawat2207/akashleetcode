class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int x1,x2;
        int start=0,end=numbers.size()-1;
        while(start<end){
            if(numbers[start]+numbers[end]==target){
                x1=start;
                x2=end;
                break;
            }
            else if(numbers[start]+numbers[end]>target){
                end--;
            }
            else{
                start++;
            }
        }
        ans.push_back(x1+1);
        ans.push_back(x2+1);
        return ans;
        
    }
};