#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    bool negative = false;
    if (s1.length() < s2.length() || (s1.length() == s2.length() && s1 < s2)) {
        swap(s1, s2);
        negative = true;
    }
    vector<int> a1(s1.length()),a2(s2.length());
    for(int i=0;i<s1.length();i++){
        a1[i]=s1[s1.length()-1-i]-'0';
    }
    for(int i=0;i<s2.length();i++){
        a2[i]=s2[s2.length()-1-i]-'0';
    }
    int maxline =max(s1.length(),s2.length());
    vector<int> res(maxline);
    for(int i=0;i<maxline;i++){
        int num1=i<s1.length()?a1[i]:0;
        int num2=i<s2.length()?a2[i]:0;
        res[i]+=num1-num2;
        if(res[i]<0){
            res[i+1]-=1;
            res[i]+=10;

        }
    }
    for(int i=maxline-1;i>=0;i--){
        cout<<res[i];
    }
    return 0;
}