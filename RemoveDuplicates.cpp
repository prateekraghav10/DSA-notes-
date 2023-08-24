class Solution {
public:
    // int removeDuplicates(vector<int>& nums) {
    //     int unique =1;
    //     for(int i=1;i<nums.size();i++)
    //     if(nums[i] != nums[i-1])
    //     nums[unique++] = nums[i];
    //     return unique;

    // }
    int removeDuplicates(vector<int>& nums){
	nums.erase(unique(nums.begin() ,nums.end()),nums.end() ); 
	return nums.size() ;
}
};
