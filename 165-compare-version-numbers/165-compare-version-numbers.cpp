class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n=version1.length();
        int m=version2.length();
        int i=0;
        int j=0;
        int number1=0;
        int number2=0;
        while(i<n or j<m)
        {
           while(i<n and version1[i]!='.')
           {
               number1=number1*10+(version1[i]-'0');
               i++;
           }
            while(j<m and version2[j]!='.')
            {
                number2 = number2 * 10 + (version2[j] - '0');
                j++;
            }
             if(number1 > number2)
             {
                 return 1;
                 
             }
             if(number1 < number2)
             {
                 return -1;
             }
            number1=0;
            number2=0;
            i++;
            j++;
        }
        return 0;
    }
};
