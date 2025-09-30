#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a={1,2,4,5,7};
    vector<int> b;
    for(int i=0;i<a.size()-1;i++){
        if(a[i+1]!=a[i]+1){
            b.push_back(a[i]+1);
        }
    }
    for(auto it:b){
        cout<<it;
    }
}