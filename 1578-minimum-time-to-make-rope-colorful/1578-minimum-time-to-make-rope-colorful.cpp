class Solution
{
    public:
        int minCost(string colors, vector<int> &neededTime)
        {
            stack<char> st;
            st.push(colors[0]);
           
            int sum = 0;
            int n = colors.size();
            int count=neededTime[0];
            for (int i = 1; i < n; i++)
            {
                

                    if (st.top() == colors[i])
                    {
                         st.pop();
                       
                         st.push(colors[i]);
                         sum += min(count,neededTime[i]);
                        count=max(count,neededTime[i]);
                       
                    }
                    
                    else
                    {
                        st.push(colors[i]);
                        count=neededTime[i];
                    }
                
            }
            return sum;
        }
};