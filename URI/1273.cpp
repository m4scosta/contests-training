#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
 
using namespace std;
 
int main(void)
{
    int n, lenght, i;
    string str;
    vector<string> v;
    
    cin >> n;
    
    while(n){
    	
        lenght = 0;
        for(i = 0; i < n; i++){
            cin >> str;
            v.push_back(str);
            if(str.size() > lenght){
                lenght = str.size();
            }
        }
        
        for(i = 0; i < n; i++){
            cout << right << setw(lenght) << v[i];
            cout << endl;
        }
        
        if((cin >> n) && n)
        	cout << endl;
        
        v.clear();
    }
     
    return 0;
}