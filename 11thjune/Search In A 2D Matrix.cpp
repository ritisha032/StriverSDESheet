bool searchMatrix(vector<vector<int>>& mat, int target) {
        
        //logic:- target bada hai toh agli row me hoga warna pichle column me


        int row=0,col=mat[row].size()-1;


        while(row<mat.size() && col>=0 ){

            if(mat[row][col]==target)
                return true;
            else if(target>mat[row][col])
                ++row;
            else
                --col;
        }



        return false;
}