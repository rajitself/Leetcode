class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        int i=0,j=0;
        while(i<n && j<m){

            if(s.at(i)==t.at(j)){
                i++;j++;
            }else{
               j++; 
            }
        }
        if(i==n) return 1;
        else  return 0;
    }
};