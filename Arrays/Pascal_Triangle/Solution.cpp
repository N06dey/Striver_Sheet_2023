class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        int i=0;

        while(i<numRows){
            vector<int> arr(i+1);
            for(int j=0;j<=i;j++){
                if(i!=j && j!=0){
                    arr[j]=res[i-1][j-1]+res[i-1][j];
                }
                else
                    arr[j]=1;
            }

            i++;
            res.push_back(arr);        
        }

        return res;
    }
};
