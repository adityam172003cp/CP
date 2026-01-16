// Book alocation Problem 
#include <bits/stdc++.h> 

using namespace std;





long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.


	long long l =*max_element(time.begin(),time.end());
	long long r =1e18;


	while(l<r){

		long long mid= (l+r)/2*1ll;

		long long days=1;
		long long t=mid;
		for(int i =0;i<m;i++){


			if(time[i]<=t){
				
				t-=time[i];
			}
			else{
				days++;
				t=mid-time[i];
			}

		}
		//cout<<mid<<" = "<<days<<" = "<<n<<endl;

		if(days>n){
			l=mid+1;
		}
		else{
			r=mid;
		}


	}



	return r;
}

