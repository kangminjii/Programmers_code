#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int count = 0;
    
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            count = 0;
            continue;
        }
        
        if(count % 2 == 0) // 짝수번째 대문자
        {
            count++;
            if(s[i] >= 65 && s[i] <= 90)    continue;
            else if(s[i] >= 97 && s[i] <= 122)  s[i] -= 32;
        }
        else if(count % 2 == 1) // 홀수번째 소문자
        {
            count++;
            if(s[i] >= 65 && s[i] <= 90)    s[i] += 32;
            else if(s[i] >= 97 && s[i] <= 122)  continue;
        }
    }
       
    answer = s;
    
    return answer;
}