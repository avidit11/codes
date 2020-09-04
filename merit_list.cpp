#include<bits/stdc++.h>
using namespace std;
struct student{
 char name[50];
 int marks;
}s[10];
int main(){
 for(int i=0;i<5;i++){
    cin>>s[i].name;
    cin>>s[i].marks;
 }
for(int i=0;i<5;i++){
    int j=i;
    while(j>0 && s[j].marks<s[j-1].marks){
        swap(s[j],s[j-1]);
        j--;
    }
}
 for(int i=0;i<5;i++){
    cout<<s[i].marks<<" "<<s[i].name<<endl;
 }
return 0;
}
