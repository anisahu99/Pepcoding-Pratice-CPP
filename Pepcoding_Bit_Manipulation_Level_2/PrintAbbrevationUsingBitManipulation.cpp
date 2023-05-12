#include <bits/stdc++.h>
#include <sstream>  // for string streams
#include <string>
using namespace std;
int main()
{
    string str = "pep";
    int n=(1<<str.length())-1;
    vector<string> v(n,"");
    for (int j = 0; j < (1 << str.length()); j++)
    {
        
        int count = 0;

        for (int i = 0; i < str.length(); i++)
        {
            int bit = str.length() - 1 - i;
            if (j & (1 << bit) == 0)
            {
                if (count == 0)
                    v[j]=v[j]+str[i];

                else
                {
                    ostringstream str1;
                    str1 << count;
                    string c = str1.str();
                    v[j]=v[j]+c;
                    v[j].push_back(str[i]);v[j]=v[j]+str[i];
                    count = 0;
                }
            }
            else
                count++;
        }
    }
    for(string s:v){
        cout<<s<<endl;
    }
    return 0;
}