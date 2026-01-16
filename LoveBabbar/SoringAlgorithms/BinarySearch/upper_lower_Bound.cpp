#include<bits/stdc++.h>

using namespace std;




int lowerBound(vector<int>v,int num)
{
    int l=0;
    int r=v.size()-1;
    int ans = l-1;
    while(l<r){
        
        int mid=l+(r-l)/2;
        if(num==v[mid])ans=mid;
        if(num<=v[mid])r=mid;
        else l=mid+1;



        
    }

    return ans;
}


int upperBound(vector<int>v,int num)
{
    int l=0;
    int r=v.size()-1;
    int ans = r+1;
    while(l<r){
        
        int mid=l+(r-l)/2;

        if(num==v[mid])ans=mid;

        if(num>=v[mid])l=mid+1;
        else r=mid;
    }

    return ans;
} 


int peakOfArray(vector<int>v){

    int l=0;
    int r=v.size()-1;

    int ans=-1;

    while(l<r){
        int mid=(l+r)/2;

        if(v[mid]<v[mid+1]){
            l=mid+1;
        }
        else{
            r=mid;
        }
    }

    return r;
}

int main(){

    vector<int>v={1,2,2,3,3,4,5,6};
    cout<<lowerBound(v,1)<<" "<<upperBound(v,1)<<endl;
}