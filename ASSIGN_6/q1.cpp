class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        vector<int>ans;
      
        int mini=0;
        int maxi=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='I'){
                ans.push_back(mini);
                mini++;
            }
            if(s[i]=='D'){
                ans.push_back(maxi);
                maxi--;
            }
        }
       ans.push_back(maxi);
       
        return ans;
    }
};