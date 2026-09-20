class Solution {
public:
    int reverseDegree(string s) {
        int sum =0;//sum of the no's to be returned
        for(int i=0;i<s.size();i++){
            int revValue = 26 - (s[i] - 'a');//now a is 26, b is 25, goes on
            int multValue = i+1;
            sum =sum+(revValue*multValue);
        }
        return sum;
    }
};