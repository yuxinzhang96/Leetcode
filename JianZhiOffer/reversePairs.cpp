//在数组中的两个数字，如果前面一个数字大于后面的数字，则这两个数字组成一个逆序对。输入一个数组，求出这个数组中的逆序对的总数。
class Solution {
private:
    int count=0;
public:
    int (vector<int>& nums) {
        int reversePairslen= nums.size();
        MergeSort(nums,0,len-1);
        return count;
    }
    void MergeSort(vector<int>& nums, int left, int right){
        if(left>=right) return;
        int mid= left+ (right-left)/2;
        MergeSort(nums,left,mid);
        MergeSort(nums,mid+1,right);
        Merge(nums,left,mid,right);
    }

    void Merge(vector<int>& nums, int left, int mid, int right){
        int len= right- left+1;
        vector<int> temp(len);
        int i= left, j=mid+1;
        int k=0;
        while(i<=mid&&j<=right)
        {
            if(nums[i]>nums[j])
            {
                temp[k++]=nums[j++];
                count+=mid-i+1;               
            }
            else 
                temp[k++]= nums[i++];
        }
        while(i<=mid)
            temp[k++]= nums[i++];
        while(j<=right)
            temp[k++]= nums[j++];
        for(int m=0;m<len;m++)
            nums[left+m]= temp[m];

    }
    

};
