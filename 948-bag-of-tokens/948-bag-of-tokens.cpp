class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i=0;
        int j=tokens.size()-1;
        int score=0;
       int res=0;
        while(i<=j)
        {
            if(tokens[i]<=power)
            {
                power-=tokens[i];
                i++;
                score++;
                res=max(res,score);
                
                
            }
            else if(score>0)
            {
                score--;
                power+=tokens[j];
                
                j--;
            }
            else
            {
                break;
            }
        }
        return res;
    }
};