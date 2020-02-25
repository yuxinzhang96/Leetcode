//地上有一个m行n列的方格，从坐标 [0,0] 到坐标 [m-1,n-1] 。
//一个机器人从坐标 [0, 0] 的格子开始移动，它每次可以向左、右、上、下移动一格（不能移动到方格外），也不能进入行坐标和列坐标的数位之和大于k的格子。
//例如，当k为18时，机器人能够进入方格 [35, 37] ，因为3+5+3+7=18。但它不能进入方格 [35, 38]，因为3+5+3+8=19。请问该机器人能够到达多少个格子？
class Solution {
public:
    int count= 0;
    int movingCount(int m, int n, int k) {
        vector<vector<int>> record(m, vector<int>(n,0));
        search(m,n,k,record,0,0);
        return count;
    }
    void search(int m, int n, int k, vector<vector<int>>& record, int i, int j){
        if(i>=m||j>=n||i<0||j<0) return;
        if(record[i][j]==1) return;
        if((i%10+i/10+j%10+j/10)>k) return;
        count++;
        record[i][j]=1;
        search(m,n,k,record,i+1,j);
        search(m,n,k,record,i-1,j);
        search(m,n,k,record,i,j+1);
        search(m,n,k,record,i,j-1);
    }
};
