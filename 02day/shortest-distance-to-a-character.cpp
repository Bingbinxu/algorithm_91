#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<int> shortestToChar(string s, char c) {
    vector<int> cp;
    
    int len = s.size()-1;
    vector<int> sp{len+1}; 
    for(int i = 0; i < len; i++)
    {
        if (s[i]== c)
        {
            cp.push_back(i);
        }
    }
    for(int i = 0; i < len; i++)
    {
        sp[i] = abs(i -cp[0]);
        for (int j =1; j < cp.size(); j ++)
        {
            int a = abs(i -cp[j]);
            if(sp[i] > a)
            {
                sp[i] = a;
            }
        }
    }
    return sp;

}
int main(){
    string s = "loveleetcode";
    char c = 'c';
    vector<int> sp;

    sp = shortestToChar(s,c);
    

}
