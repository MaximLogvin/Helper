/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ifstream cin("Input.txt");
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        map<ll,bool> m;
        ll count=0;
        ll max=-1;
        for(ll i=0;i<n;i++) m[a[i]]=0;
        for(ll i=0;i<n;i++){
            //if(m[a[i]]!=-1) {
                if(m[a[i]]==0) {
                    m[a[i]]=1;
                    count++;
                    if(max<count) max=count;
                }
                else{
                    m[a[i]]=0;
                    count--;
                }
        }
        cout<<max<<endl;
    
    }

    return 0;
}