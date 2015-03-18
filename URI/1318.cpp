#include <iostream>
#include <string.h>
#define MAX 20500

using namespace std;

int main()
{
	int n, m, t;
	int nums[MAX];

	while((cin >> n >> m) && (n || m))
	{
		memset(nums, 0, sizeof(nums));
		
		for (int i = 0; i < m; i++){
			cin >> t;
			nums[t]++;
		}
		
		int dup = 0;
		for (int i = 1; i <= n; i++) {
			if (nums[i] > 1)
				dup++;
		}
		cout << dup << endl;
	}

}