#include<bits/stdc++.h>
using namespace std;

/*A Binary Search based function to find the latest job (before current job) that doesn't conflict with current job.  
"i" is index of the current job. This function returns -1 if all jobs before index conflict with it. The vector v is sorted in increasing order of finish time.
*/
int findLatestJob(int lo, int hi, int i, vector<pair<pair<int,int>,int>> v){

	int pos = -1;

	while(lo <= hi){
		
		int mid = (lo + hi)/2;

		if(v[mid].first.second <= v[i].first.first){
			
			pos = mid ;
			lo = mid + 1;
		}
		else{
			hi = mid - 1;
		}
	}
	return pos;
}
int findMaximumProfit(vector<pair<pair<int,int>,int>> v){
	
	int n = v.size();
	//an array to store solutions of subproblems dp[i] stores the profit for jobs till dp[i]
	vector<int> dp(n);

	dp[0] = v[0].second;

	for(int i = 1; i < n; i++){
		
		int lo = 0, hi = i - 1, inc = v[i].second; // Find profit including the current job

		int pos = findLatestJob(lo, hi, i, v);

		if(pos != -1){
			inc += dp[pos];
		}
		
		int exc = dp[i-1];

		dp[i] = max(inc,exc); // Store maximum of including and excluding
	}
	return dp[n-1];
}
bool cmp(pair<pair<int,int>,int> p1, pair<pair<int,int>,int> p2){

	return p1.first.second < p2.first.second;

}
int main(){
	
	int n;
	//cout << "Enter number of jobs: " << endl;
	cin >> n;

	vector<int> startTime(n), endTime(n), profit(n);

	
	for(int i = 0; i < n; i++){
		//cout << "Enter the start time, end timer, profit associated with job " << i + 1 << endl;
		cin >> startTime[i] >> endTime[i] >> profit[i];
	}

	vector<pair<pair<int,int>,int>> v;
	
	pair<int,int> p;
	
	for(int i = 0; i < n; i++){
		
		p = {startTime[i],endTime[i]};
		v.push_back({p,profit[i]});
	}	
	// Sort jobs according to finish time
	sort(v.begin(), v.end(), cmp);

	cout << "Maxmimum Profit: " << findMaximumProfit(v) << endl;

}