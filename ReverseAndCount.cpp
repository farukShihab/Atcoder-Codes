#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define endl '\n'
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define mp make_pair
#define vi vector<int>
#define vll vector<long long>
#define di deque<int>
#define dll deque<long long>
#define CY cout<< "Yes"
#define CN cout<< "No"
#define C(x) cout<<x<<endl
#define pi acos(-1)
#define sc second
#define fi first


int main()
{
    //ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    int n,k;
    cin>>n>>k;
    vi a;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        a.pb(t);
    }
    vector<vector<int>>v;
    for(int i=0;i<n;i++){
        vector<int> b=a;
        for(int j=i+1;j<n;j++){
            C(j);
            reverse(b.begin()+i,b.begin()+j);
            for(int i=0;i<b.size();i++)cout<<b[i]<< " ";
            C(endl);
            v.pb(b);
            b.clear();
            b=a;
        }

    }

    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)cout<< v[k-1][i]<< " ";
    cout<<endl;













    return 0;
}

