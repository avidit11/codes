#include <bits/stdc++.h>
using namespace std;
void PASS(int idx,int temp[],int nums[],int size1,int n,int ans[],int* count1){
        if(idx==n){
            int sum=0;
            for(int i=0;i<size1;i++){
                sum+=temp[i];
            }
            ans[*count1]=sum;
            (*count1)++;
            return;
        }
        temp[size1]=nums[idx];
        PASS(idx+1,temp,nums,size1+1,n,ans,count1);
        PASS(idx+1,temp,nums,size1,n,ans,count1);
    }
int main() {
            int n;
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
           int k=pow(2,n);
        int temp[n],ans[k];
        int co=0;
        int* count1=&co;
        PASS(0,temp,arr,0,n,ans,count1);
        sort(ans,ans+k);
        for(int i=0;i<k;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
	return 0;
}
