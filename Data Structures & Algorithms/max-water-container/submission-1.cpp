class Solution {
public:
    int maxArea(vector<int>& heights) {
       
        int i=0;
        int l=heights.size();
        int j=l-1;
        //  int maxh=max(heights[0],heights[j]);
        
        int mini=min(heights[0],heights[j]);
        int area=j*mini;
        while(i<j){
            
            if(heights[i]<heights[j]){
                i++;
                mini=min(heights[i],heights[j]);
            }
            else{
                j--;
                mini=min(heights[i],heights[j]);
            }
            area=max(area,(mini*(j-i)));
        }
        return area;
    }
};
