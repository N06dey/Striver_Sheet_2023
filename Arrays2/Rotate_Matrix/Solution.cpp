class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0,j=matrix.size()-1;i<j;i++,j--){
            vector<int> temp=matrix[i];
            matrix[i]=matrix[j];
            matrix[j]=temp;
        }

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<=i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

    }
};
