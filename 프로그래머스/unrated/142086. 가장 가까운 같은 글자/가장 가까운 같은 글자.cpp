#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    for(int i = 0; i < s.size(); i++)
    {
        int count = 0;
        
        for(int j = 0; j < i; j++)
        {
            if(s[i] == s[j])    count = i-j;
        }
        
        if(count == 0) answer.push_back(-1);
        else           answer.push_back(count);
        
    }
    
    return answer;
}