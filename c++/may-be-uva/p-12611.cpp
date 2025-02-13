#include<cstdio>
#include<cmath>
#include<iostream>
#include<vector>

using namespace std;

#define MAXN 9223372036854775807
#define MINN 9223372036854775808

#define MAXP 1000000
#define MAX 100000

int main(){
    int r,cno=0,t;
    cin>>t;
    while(t--){
        cin>>r;
        cout<<"Case"<<" "<<++cno<<":"<<"\n";
        double l,w;
        l=(double)((100.0*r)/20);
        w=(double)(60.0*r)/20;
        int ulx=-(int)((45*l)/100);
        int uly=(int)(w/2);
        cout<<ulx<<" "<<uly<<"\n";
        int urx=(int)((55*l)/100);
        cout<<urx<<" "<<uly<<"\n";
        cout<<urx<<" "<<-uly<<"\n";
        cout<<ulx<<" "<<-uly<<"\n";
    }
    return 0;
}
