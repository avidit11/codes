#include<bits/stdc++.h>
using namespace std;
void Call(int n,int k,vector<int>& comb,vector<vector<int>>& ans,int i,int j){
        if(comb.size()==k){
            if(n==0){
                ans.push_back(comb);
                return ;
            }
            else return;
        }
if(comb.size()>k){
    return;
}
if(i<10){
comb.push_back(i);
Call(n-i,k,comb,ans,i+1,j+1);
comb.pop_back();
Call(n,k,comb,ans,i+1,j);
}

}
    int main(){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> ans;
        vector<int> comb;
        Call(n,k,comb,ans,1,0);
        for(int i=0;i<ans.size();i++){
                for(int j=0;j<ans[i].size();j++){
                    cout<<ans[i][j]<<" ";
                }
                cout<<endl;
        }
        return 0;
    }
