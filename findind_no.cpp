#include<bits/stdc++.h>
using namespace std;
int main(){
  int nums[100],n,key;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  cin>>key;
	   if(nums[0]<nums[n-1]){
	        int l=0,h=n-1,ans=-1;
	        while(l<=h){
	            int mid=l+((h-l)/2);
	            if(nums[mid]==key){
	                ans=mid;
	                break;
	            }
	            else if(nums[mid]<key) l=mid+1;
	            else h=mid-1;
	        }
	        return ans;
	    }
	    else{
	        int ans=0,l=0,h=n-1,temp=-1;
	    while(l<=h){
	        int mid=l+((h-l)/2);
	        if(nums[mid]>mid){
	            if(nums[mid+1]<mid+1){
	                ans=mid;
	                break;
	            }
	            else l=mid+1;
	        }
	        else if(nums[mid]<mid) h=mid-1;
	    }
	    if(key>=nums[0]){
	        l=0,h=ans;
	        while(l<=h){
	            int mid=l+((h-l)/2);
	            if(nums[mid]<key) l=mid+1;
	            else if(nums[mid]>key) h=mid-1;
	            else{
	                temp=mid;
	                break;
	            }
	        }
	        if(nums[temp]==nums[temp-1]){
	            temp=temp-1;
	        }
	    }
	    else{
	        l=ans+1,h=n-1;
	        while(l<=h){
	            int mid=l+((h-l)/2);
	            if(nums[mid]<key) l=mid+1;
	            else if(nums[mid]>key) h=mid-1;
	            else{
	                temp=mid;
	                break;
	            }
	        }
	        if(nums[temp]==nums[temp-1]){
	            temp=temp-1;
	        }
	    }
	    return temp;

}
