//在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，
//每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int m= array.size(); //m行n列
        if(m==0) return false;
        int n=array[0].size();
        if(n==0) return false;
        
        //从数组右上角的元素开始找
        int i=0;
        int j=n-1;
        while(i<m&&j>=0)
        {
            int current= array[i][j];
            if (current>target)
            {
                j--;
            }
            else if(target>current)
            {
                i++;
            }
            else return true;
        }
        return false;

    }
};
