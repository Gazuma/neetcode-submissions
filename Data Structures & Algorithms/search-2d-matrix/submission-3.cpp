class Solution {
public:

    bool binarySearch(vector<int> arr, int target){
        int p1 = 0;
        int p2 = arr.size() - 1;

        while(p1<=p2){
            int mid = p1 + (p2-p1)/2;
            if(arr[mid]==target){
                return true;
            }
            else if (arr[mid]<target){
                p1 = mid + 1;
            }
            else if (arr[mid]>target){
                p2 = mid - 1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();
        int p2 =  n - 1;
        int row = 0;
        while(row<matrix.size() and matrix[row][p2]<target){
            row++;
        }
        if(row>=matrix.size()){
            return false;
        }
        return binarySearch(matrix[row],target);
    }
};
