#include<bits/stdc++.h>

using namespace std;


void selectionSort(vector<int>&v){

    int  n =v.size();
    for(int i =0;i<n;i++){

        for(int j =i+1;j<n;j++){

            if(v[i]>v[j]){
                swap(v[i],v[j]);
            }

        }
    }



}


int main(){

    vector<int>v={3,1,6,3,2,6,7,3};

    selectionSort(v);
    for(auto i :v)cout<<i<<" ";
}