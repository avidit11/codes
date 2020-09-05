/*WAP to accept a String count the frequency of each alphabet in the String.
banana
b	1
a	2
n	2*/
#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char s1[100];
    cin.getline(s1,100);
    int b=0,a=0,n=0;
   for(int i=0;s1[i]!=0;i++){
    if(s1[i]=='b'){
        b++;
    }
    else if(s1[i]=='a'){
        a++;
    }
    else if(s1[i]=='n'){
        n++;
    }
   }
   cout<<b<<" "<<a<<" "<<n<<endl;
    return 0;
}



