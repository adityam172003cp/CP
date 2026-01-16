#include<bits/stdc++.h>

using namespace std;



int aggressiveCows(vector<int> &v, int k)
{
    //    Write your code here.
    sort(v.begin(),v.end());



    long long l=0;
    long long r=1e18;
    long long ans=-1;
    while(l<r){

        long long mid = (l+r)/2*1ll;

        long long cows=1;

        long long prev=v[0];

        for(int i=1;i<v.size();i++){

            if(prev+mid <=v[i]){
                prev=v[i];
                cows++;
            }
        }

        //cout<<mid<<" "<<cows<<" "<<k<<endl;

        if(cows>=k){
            l=mid+1;
            ans=mid;
        }
        else{
            r=mid;
        }



    }

        return ans;
}