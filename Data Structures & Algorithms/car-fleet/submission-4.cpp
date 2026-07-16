class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector <pair<int,float>> S;
        int fleet = 0;


        for (int i=0;i<position.size();i++){
            S.push_back({position[i], (float(target) - float(position[i])) / float(speed[i])});
        }

        sort(S.begin(), S.end());

        float time = 0;
        while(!S.empty()){
            //cout << " " << S.back().first << " " << S.back().second << " ";
            if (time < S.back().second)
            {
                fleet++;
                time = S.back().second;
            }

            S.pop_back();
    
        }

        return fleet;
    }
};
