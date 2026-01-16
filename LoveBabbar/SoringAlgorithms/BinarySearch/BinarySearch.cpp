#include<bits/stdc++.h>

using namespace std;



int binarySearch(vector<int>arr,int key){
    int l =0;
    int r =arr.size()-1;

    while(l<r){

        int mid = (l+r)/2;

        if(arr[mid]<key){
            l=mid+1;
        }
        else if(arr[mid]>key){
            r=mid-1;
        }
        else{
            return mid;
        }
    }

    return -1;

}



int main(){
 vector<int>v={2,5,7,8,12,34,54,55,65};


 cout<<binarySearch(v,112)<<endl;

}