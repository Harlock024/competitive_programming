#include <iostream>

using namespace std;
int main(){
    int a,b;
    int y=0;
    cin>>a>>b;
    while (a<=b) {
        y++;
        if(a==b)break;
        a*=3;
        b*=2;
    }
    cout<<y<<endl;
    return 0;
}
