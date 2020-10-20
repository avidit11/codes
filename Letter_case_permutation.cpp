#include<bits/stdc++.h>
using namespace std;
void solve(string input,string output){
        if(input.length()==0){
            cout<<output<<" ";
            return;
        }
        string output1=output;
        string output2=output;
        for(int i=0;i<input.length();i++){
            if(input[i]>='a' && input[i]<='z'){
                output1.push_back(input[i]-32);
                output2.push_back(input[i]);
                input.erase(input.begin()+0);
                break;
            }
            else{
                output1.push_back(input[i]);
                output2.push_back(input[i]);
            }
        }
        solve(input,output1);
        solve(input,output2);
    }
int main(){
    string s;
    cin>>s;
    string output;
    solve(s,output);
    return 0;
}
