//WAP of SubString (AMAR SINGH--- R SINGH)
#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char s1[100];
    cin>>s1;
    int start,end1;
    cin>>start>>end1;
    for(int i=start;i<end1;i++){
        cout<<s1[i];
    }
   return 0;
}
