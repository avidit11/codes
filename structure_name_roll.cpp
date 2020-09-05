//WAP to accept roll no, name of 5 students and display them back on the screen in tabular form.
  #include<bits/stdc++.h>
using namespace std;
struct student {
    char firstName[50];
    int roll;
} s[10];

int main() {
    int i;
    // storing information
    for (i = 0; i < 5; i++) {
         cout<<"enter roll no ";
    cin>>s[i].roll;
    cout<<"enter name ";
    cin>>s[i].firstName;
    cout<<endl;
    }
    cout<<"display information";
    // displaying information
    for (i = 0; i < 5; i++) {
        cout<<s[i].roll<<"  "<<"firstname: "<<s[i].firstName<<endl;
    }
    return 0;
}
