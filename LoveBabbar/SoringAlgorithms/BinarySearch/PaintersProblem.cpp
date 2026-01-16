#include<bits/stdc++.h>

using namespace std;

// this is same as book allocation problem little bit change 




int findLargestMinDistance(vector<int> &v, int k)
{
    



    long long l=*max_element(v.begin(),v.end());
    long long r=1e18;
    long long ans=-1;
    while(l<r){

        long long mid = (l+r)/2*1ll;

        long long cows=1;

        long long time=mid;

        for(int i=0;i<v.size();i++){

           if(time>=v[i]){
               time-=v[i];
           }
           else{
               time=mid-v[i];
               cows++;
           }
        }

       // cout<<mid<<" "<<cows<<" "<<k<<endl;

        if(cows<=k){
            r=mid;
            ans=mid;
            
        }
        else{
            l=mid+1;
        }



    }

        return ans;
}