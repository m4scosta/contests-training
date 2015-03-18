#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <map>

using namespace std;

vector<string> space_split(string str) {
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	vector<string> tokens;
	istringstream iss(str);
	copy(istream_iterator<string>(iss),
    	istream_iterator<string>(),
    	back_inserter(tokens));
    return tokens;
}

int main()
{
    char previous;
    string str;
    
    while( getline(cin, str) )
    {
	    vector<string> words = space_split(str);
	    vector<string>::iterator it;
	    int count = 0;
	    
	    previous = words[0][0];
	    for (it = words.begin() + 1; it != words.end()-1; ++it) {
	    	if ((*it)[0] == previous && (*it)[0] != (*(it+1))[0]) {
	    		count++;
	    	}
	    	previous = (*it)[0];
	    }
	    if (previous == words[words.size()-1][0])
	    	count++;
	    cout << count << endl;
    }
    return 0;
}