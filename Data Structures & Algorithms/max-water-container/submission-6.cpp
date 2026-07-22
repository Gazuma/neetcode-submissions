class Solution {
public:
    int maxArea(vector<int>& heights) {
        int p1 = 0;
        int n = heights.size();
        int p2 = n-1;
        int result = 0;
        while(p1<p2){
            int area = min(heights[p1],heights[p2])*(p2-p1);
            result = max(result,area);
            if(heights[p2]>=heights[p1]){
                p1++;
            }
            else{
                p2--;
            }
        }
        return result;
    }
};
