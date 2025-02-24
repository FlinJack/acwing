#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;

    vector<int> a1(s1.length()),a2(s2.length());
    for(int i=0;i<s1.length();i++){
        a1[i]=s1[s1.length()-1-i]-'0';
    }
    for(int i=0;i<s2.length();i++){
        a2[i]=s2[s2.length()-1-i]-'0';
    }

    int max_len=max(s1.length(),s2.length());
    vector<int> res(max_len+1,0);
    for(int i=0;i<max_len;i++){
        int num1 = i < s1.length() ? a1[i] : 0;  // 如果超出长度，填充为0
        int num2 = i < s2.length() ? a2[i] : 0;
        res[i] += num1 + num2;
        if(res[i]>=10){
            res[i+1]+=res[i]/10;
            res[i]%=10;
        }
    }
    
    if (res[max_len] > 0) {
        cout << res[max_len];
    }
    for(int i=max_len-1;i>=0;i--){
        cout<<res[i];
    }
}