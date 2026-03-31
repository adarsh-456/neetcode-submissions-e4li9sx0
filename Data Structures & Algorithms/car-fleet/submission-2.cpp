class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        map<int,int,greater<int>> mp;
        int fleet=0;
        double prevFleet=-1.0;
        int n=position.size();
        for( int i=0;i<n;i++){
            mp[position[i]]=speed[i];
        }


        for( auto &k:mp){
           double time=double(target-k.first)/k.second;
           if(prevFleet<time){
            fleet++;
            prevFleet=time;
           }
        }
        return fleet;
    }
};
