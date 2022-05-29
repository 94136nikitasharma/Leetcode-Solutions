class Solution {
public:
    int count_word(string &str)
    {
        int count=0;
        for(char ch:str)
        {
              if(ch==' ') count++;
        }
      
        return count+1;
        
    }
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string,int>mpp;
        for(int i=0;i<messages.size();i++)
        {
            int count=count_word(messages[i]);
            mpp[senders[i]]+=count;
        }
        int count=0;
        string ans;
        for(auto it:mpp)
        {
            if(it.second>=count)
            {
                count=it.second;
                ans=it.first;
            }
            
        }
        return ans;
    }
};