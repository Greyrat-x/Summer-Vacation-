#include <bits/stdc++.h>
using namespace std;

int n,a[10001]={1},total=0;
void search(int s,int t){
    for(int i=a[t-1];i<=s;i++){
        if(i<n){
            a[t]=i;
            s-=i;
            if(s==0){
                for(int j=1;j<=t;j++){
                    cout << a[j];
                    if(j<t) cout << '+';
                }
                cout << endl;
                total++;
            }
            else{
                search(s,t+1);
            }
            s+=i;
        }
    }
}
int main(){
    cin >> n;
    search(n,1);
}
    