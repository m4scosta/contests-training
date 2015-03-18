#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int comp(int a, int b){
	
	if(a % 2 == 0 && b % 2 == 0)
		return a < b;
	else if (a % 2 == 1 && b % 2 == 1)
		return a > b;
	else if (a % 2 == 0)
		return 1;
	else
		return 0;
}

int main(){
	
	vector<int> nums;
	int n, k;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> k;
		nums.push_back(k);
	}
	
	sort(nums.begin(), nums.end(), comp);
	
	for(int i = 0; i < n; i++){
		cout << nums[i] << endl;
	}
	
	return 0;
}