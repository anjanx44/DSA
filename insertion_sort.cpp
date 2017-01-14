#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    int n,a[100];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    int key,i;
    for(int j=2;j<=n;j++){
        key=a[j];
        i=j-1;
        while(i>0 && a[i]>key){
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;
    }

    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}
