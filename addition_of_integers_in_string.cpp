#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    stringstream geek(a);
    stringstream sweet(b);
    int x=0,y=0;
    geek>>x;
    sweet>>y;
    int z=x+y;
    string c=to_string(z);
    cout<<c;
return 0;
}
