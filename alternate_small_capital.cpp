//WAP to accept  String and Convert its individual characters to capital and Small alternately.(Amar----- aMaR)
#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char s1[100];
    cin>>s1;
    for(int i=0;s1[i]!=0;i++){
        if(i%2==0){
            if(s1[i]>='A' && s1[i]<='Z'){
                s1[i]=s1[i]+32;
            }
        }
        else{
            if(s1[i]>='a' && s1[i]<='z'){
                s1[i]=s1[i]-32;
            }
        }
    }
    cout<<s1;
   return 0;
}
