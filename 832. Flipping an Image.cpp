class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i=0;i<A.size();i++){
            for(int j=0,k=A[i].size()-1;j<=k;j++,k--){
                if(A[i][j]==A[i][k]){
                    if(j==k){
                        A[i][j]^=1;
                    }else{
                        A[i][j]^=1;
                        A[i][k]^=1;
                    }
                }
            }
        }
        return A;
    }
};
