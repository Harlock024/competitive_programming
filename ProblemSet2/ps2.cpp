#include <iostream>

using namespace std;

int main(){
    int p, aw=0,dw=0;
    cin >> p;
    string w;
    cin>>w;
    for (char ply:w) {
        if(ply=='A')aw++;
        else if (ply=='D')dw++;
    }

    if(aw > dw) cout << "Anton"<<endl;
    else if (aw <dw) cout << "Danik"<<endl;
    else cout << "Friendship"<<endl; // lul
    return 0;

}
