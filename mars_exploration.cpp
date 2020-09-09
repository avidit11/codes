#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    cin.getline(a,100);
    string w="SOS";
    int j=0,count =0;
    for(int i=0;a[i]!=0;i++){
     if(j%3==0){
        j=0;
     }
     if(a[i]!=w[j]){
        count++;
     }
     j++;
    }
cout<<count;
    return 0;
}

