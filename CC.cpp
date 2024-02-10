#include <iostream>
#include <string>

using namespace std;


int main() {
    int shift;
    string str;
    char temp[str.length()];
    char direction;
cin>>shift;
cin.ignore();
cin>>direction;
cin.ignore();
getline(cin, str);


for(int a=0;a<str.length();a++){
    temp[a] = str[a];
}
for(int a=0;a<str.length();a++){
    cout << temp[a]; 
}

if(direction=='L'){

for(int a=60;a<125;a++){
    if (temp[a]==a){cout<<char(a-shift);
}}

}
else if(direction=='R'){
for(int a=60;a<125;a++){
    if (temp[a]==a){cout<<char(a-shift);
}}
}

  return 0;
}
