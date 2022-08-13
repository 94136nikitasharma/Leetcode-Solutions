class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        string ans="";
        int n=suits.size();
        map<int,int>mpp;
        map<char,int>mp;
        int freq=INT_MIN;
       
        for(int i=0;i<n;i++)
        {
           mp[suits[i]]++;
        }
        for(auto x:mp)
        {
           if(x.second==5) 
           {
               ans+="Flush";
               return ans;
           }
        }
        for(int i=0;i<ranks.size();i++)
        {
            mpp[ranks[i]]++;
            freq=max(freq,mpp[ranks[i]]);
        }
           if(freq>=3)
            {
                
                ans+="Three of a Kind";
                return ans;
            }
             if(freq==2)
            {
                 
                ans+="Pair";
                return ans;
            }
            
        
        ans+="High Card";
                return ans;
    }
};