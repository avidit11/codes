/*Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.


The above elevation map is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
*/

#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,m,large,ans=0;
    vector<int> arr;
    for(int i=0;i<n;i++){
            cin>>m;
        arr.push_back(m);
    }
    vector<int> pmax(arr.size(),0);
        vector<int> smax(arr.size(),0);
    if(arr.size()==0){
        return ans;
    }
        else{
            large=arr[0];
        for(int i=0;i<arr.size();i++){
        if(arr[i]>large){
            large=arr[i];
        }
        pmax.at(i)=large;
    }
    large=arr[arr.size()-1];
     for(int i=arr.size()-1;i>=0;i--){
        if(arr[i]>large){
            large=arr[i];
        }
        smax.at(i)=large;
    }
    for(int i=1;i<arr.size()-1;i++){
        if(arr[i]<pmax[i] && arr[i]<smax[i]){
            int a=pmax[i]-arr[i];
            int b=smax[i]-arr[i];
            ans=ans+min(a,b);
        }
    }

    return ans;
        }
}
