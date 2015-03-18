#include <iostream>
#include <string>

using namespace std;

int main()
{
    int alt;
    string str;
    string::iterator it, it2;

    while(getline(cin, str)){
        alt = 0;
        it2 = str.begin();
        for(it = str.begin(); it != str.end(); ++it){
            if(*it != ' ' ){
                if (!alt){
                    *it = toupper(*it);
                    alt = 1;
                }
                else{
                    *it = tolower(*it);
                    alt = 0;
                }
            }
        }
        cout << str << endl;
    }

    return 0;
}
