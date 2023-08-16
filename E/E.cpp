#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    set <int> s;
    for(int i=0; i<n; i++){
        int g; 
        cin>>g;
        while(g--) {
            int a;
            cin >> a;
            s.insert(a);
        } 
    }
    cout<<(s.size()==m? "Yes" : "No")<<'\n';
    return 0;
}