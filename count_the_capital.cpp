//WAP to accept a String and Count number of Capital letters present in it.(eq- ComPuter - 2)
#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char s[100];
    int flag=0;
    cin.getline(s,100);
    for(int i=0;s[i]!=0;i++){
        if(s[i]>='A' && s[i]<='Z'){
            flag++;
        }
    }
    cout<<flag;
   return 0;
}
