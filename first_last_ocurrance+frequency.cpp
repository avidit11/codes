class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f=-1,l=-1;
        int first=0,last=nums.size()-1;
        while(first<=last){
            int mid=first+((last-first)/2);
            if(nums[mid]==target){
                if(mid==0){f=mid; break;}
                else if(nums[mid]==nums[mid-1]){
                    last=mid-1;
                }
                else {
                    f=mid;
                break;}
            }
            else if(nums[mid]<target){
                first=mid+1;
            }
            else
                last=mid-1;
        }
        first=0,last=nums.size()-1;
        while(first<=last){
            int mid=first+((last-first)/2);
            if(nums[mid]==target){
                if(mid==nums.size()-1){ l=mid; break;}
                else if(nums[mid]==nums[mid+1]){
                    first=mid+1;
                }
                else {
                    l=mid;
                break;}
            }
            else if(nums[mid]<target){
                first=mid+1;
            }
            else
                last=mid-1;
        }
        vector<int> ans;
        ans.push_back(f);
        ans.push_back(l);
        return ans;
    }
};
