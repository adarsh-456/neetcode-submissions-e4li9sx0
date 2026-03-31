class Solution {
public:
    int trap(vector<int>& height) {
        int totalwater=0;
        int len=height.size();
        vector< int> lmax(len);
        vector<int> rmax(len);
        int lm=height[0];
        lmax[0]=0;
        rmax[len-1]=0;
        for(int i=1;i<len;i++){
            lm=max(lm,height[i-1]);
            lmax[i]=lm;
        }
        lm=height[len-1];
        for(int i=len-2;i>0;i--){
            lm=max(lm,height[i+1]);
            rmax[i]=lm;
        }
        for(int i=1;i<=len-1;i++){
            int w=min(lmax[i],rmax[i])-height[i];
            if(w>0){
                totalwater=totalwater+w;
            }
            
        }
        return totalwater;
    }
};
