#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
        int ans,ans1=0,ans2=0;
             int first=INT_MIN; int second=INT_MIN;int third=INT_MIN;
        int min1=INT_MAX;int min2=INT_MAX;
        for(int i=0;i<n;i++){
            first=max(first,nums[i]); }
        for(int i=0;i<n;i++){
            min1=min(min1,nums[i]);}
        for(int i=0;i<n;i++){
         if(nums[i]!=first){
                second=max(second,nums[i]);}}
         for(int i=0;i<n;i++){
           if(nums[i]!=first && nums[i]!=second){
                third=max(third,nums[i]);}}
         for(int i=0;i<n;i++){
          if(nums[i]!=min1){
                min2=min(min2,nums[i]);}}
                cout<<first<<" "<<second<<" "<<third<<" "<<min1<<" "<<min2<<endl;
        int count1=0,count2=0,count3=0;
        for(int i=0;i<n;i++){
                if(nums[i]==first){
                    count1++;
                }
                else if(nums[i]==second){
                    count2++;
                }
                else if(nums[i]=min1){
                    count3++;
                }
            }
            cout<<count1<<" "<<count2<<" "<<count3<<endl;
                  if(count1>=3){
                ans1=first*first*first;}
                   else if(count1==2){
                ans1=first*second*first;
                cout<<ans1<<endl;
            }
                            else if(count2>=2){
                ans1=first*second*second;
                cout<<ans1<<endl;}


         else{ans1=first*second*third;}
     if(min1<first &&  min2<first){
            if(count3>=2){
            ans2=first*min1*min1;}
        else{ans2=min1*min2*first;}
     }
     cout<<ans1<<" "<<ans2<<endl;
        ans=max(ans1,ans2);
        return ans;
}
