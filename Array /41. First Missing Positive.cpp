#include<iostream>
using namespace std;

#include<vector>

/*Given an unsorted integer array nums, return the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses constant extra space.

 

Example 1:

Input: nums = [1,2,0]
Output: 3
Example 2:

Input: nums = [3,4,-1,1]
Output: 2
Example 3:

Input: nums = [7,8,9,11,12]
Output: 1
 

Constraints:

1 <= nums.length <= 5 * 105
-231 <= nums[i] <= 231 - 1*/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ans;
        
//         if(nums.size()==1){
//             if(nums[0]==1)return 2;
//             else return 1;
//         }
        
        for(int i =0; i<nums.size();i++){
            if(nums[i]<=0)nums[i]=0;
        }
        
        for(int i =0; i<nums.size();i++){
            int id=nums[i]>=0?nums[i]:-nums[i];
            
           
            
          if(id<=nums.size()and id>0){
              if(nums[id-1]==0)nums[id-1]=-(nums.size()+1);
              if(nums[id-1]>0)nums[id-1]=-nums[id-1];
              //nums[id-1]=nums[id-1]==0?-(nums.size()+1):;
          }
        }
        
        
         for(int i =0; i<nums.size();i++){
             //cout<<nums[i]<<" ";
            if(nums[i]>=0){
                ans=i;break;}
        }
        
        return ans+1;
        
    }
};