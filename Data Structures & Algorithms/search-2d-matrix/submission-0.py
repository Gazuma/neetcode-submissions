class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        for i in matrix:
            last = len(i)-1;
            if(target>i[last]):
                pass
            else:
                for j in i:
                    if(j==target):
                        return True
        return False