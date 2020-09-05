#include<bits/stdc++.h>
using namespace std;
struct st{
string total;
string first;
string mid;
string final1;
}str[10];
int main(){
    cout<<"enter string"<<endl;
    for(int i=0;i<3;i++){
        cin>>str[i].total;
    }
    for(int i=0;i<3;i++){
        if(str[i].total.size()%3==0){
            int x=str[i].total.size()/3;
            str[i].first=str[i].total.substr(0,x);
            str[i].mid=str[i].total.substr(x,2*x);
            str[i].final1=str[i].total.substr(2*x,3*x);
        }
        else if(str[i].total.size()%3==1){
           int x=str[i].total.size()/3;
            str[i].first=str[i].total.substr(0,x);
            str[i].mid=str[i].total.substr(x,(2*x)+1);
            str[i].final1=str[i].total.substr((2*x)+1,3*x);
        }
        else{
            int x=str[i].total.size()/3;
            str[i].first=str[i].total.substr(0,x+1);
            str[i].mid=str[i].total.substr(x+1,(2*x)+1);
            str[i].final1=str[i].total.substr((2*x)+1,(3*x)+2);
        }

    }
    str[3].first=str[0].first+str[1].first+str[2].first;
    str[3].mid=str[0].mid+str[1].mid+str[2].mid;
    str[3].final1=str[0].final1+str[1].final1+str[2].final1;
    for(int i=0;i<str[3].final1.size();i++){
        if(str[3].final1[i]>='a' && str[3].final1[i]<='z'){
            str[3].final1[i]=str[3].final1[i]-32;

    }}
        cout<<str[3].first<<" "<<str[3].mid<<" "<<str[3].final1<<endl;
    return 0;
}
