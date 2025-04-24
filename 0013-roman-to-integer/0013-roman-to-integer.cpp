#include<bits/stdc++.h>
class Solution {
public:
    int romanToInt(string s) {
        map<char,int>m1;
        m1['I'] = 1;
        m1['V'] = 5;
        m1['X'] = 10;
        m1['L'] = 50;
        m1['C'] = 100;
        m1['D'] = 500;
        m1['M'] = 1000;
        int sum =0;
        for(int i=0;i<s.length();i++){
            char c1=s[i];
            if(i<s.length()-1 && m1[c1]<m1[s[i+1]]){
                sum=sum+(m1[s[i+1]]-m1[c1]);
                i++;
            }else{
                sum=sum+m1[c1];
            }
        }
        return sum;
    }
};