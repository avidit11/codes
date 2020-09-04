//enter country name and output will be the wonder of that country.
#include<bits/stdc++.h>
using namespace std;
int main(){
   string country[10],wounder[10],a;
   int x;
 country[0]="a";
 country[1]="b";
 country[2]="b";
 country[3]="d";
 country[4]="e";
 country[5]="f";
 country[6]="g";
 wounder[0]="A";
 wounder[1]="B";
 wounder[2]="C";
 wounder[3]="D";
 wounder[4]="E";
 wounder[5]="F";
 wounder[6]="G";
 for(int i=0;i<7;i++){
    cout<<country[i]<<" "<<wounder[i]<<endl;
 }
 cout<<"enter"<<endl;
 getline(cin,a);
 for(int i=0;i<7;i++){
    if(a==country[i]){
       x=i;
       break;
    }
 }
cout<<wounder[x]<<endl;
 return 0;
}
