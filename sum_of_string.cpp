#include<bits\stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    a=a+" ";
    int sum=0;
    string w="";
    for(int i=0;a[i]!=0;i++){
        if(a[i]!=' '){
            w=w+a[i];
        }
        else{
                if(w.size()%2==0){
                        for(int j=0;j<w.size()/2;j++){
                    int x=a[j]-a[w.size()-j-1];
                    if(x>=0){
                        sum=sum+x;
                    }
                    else
                        sum=sum-x;
                } }
                else if(w.size()%2!=0){
                    for(int j=0;j<w.size()/2;j++){
                       int x=a[j]-a[w.size()-j-1];
                    if(x>=0){
                        sum=sum+x;

                    }
                    else
                        sum=sum-x;
                    }
                    sum=sum+a[w.size()/2]-96;
                }
            w="";
        }
    }
    cout<<sum;
    return 0;
}
