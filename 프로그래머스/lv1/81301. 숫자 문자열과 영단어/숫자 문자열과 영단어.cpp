#include <string>
#include <vector>

using namespace std;
// s = regex_replace(s, regex("zero"), "0");

int solution(string s) {
    int answer = 0;
    string temp;
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'a')
        {
            if(s[i] == 'z') 
            {
                temp.push_back('0');
                s.erase(i+1, 3);
            }
            if(s[i] == 'o')
            {
                temp.push_back('1');
                s.erase(i+1, 2);
            }
            if(s[i] == 't')
            {
                if(s[i+1] == 'w')
                {
                    temp.push_back('2');
                    s.erase(i+1, 2);
                }
                else if(s[i+1] == 'h')
                {
                    temp.push_back('3');
                    s.erase(i+1, 4);
                }
            }
            if(s[i] == 'f')
            {
                if(s[i+1] == 'o')
                {
                    temp.push_back('4');
                    s.erase(i+1, 3);
                }
                else if(s[i+1] == 'i')
                {
                    temp.push_back('5');
                    s.erase(i+1, 3);
                }
            }
            if(s[i] == 's')
            {
                if(s[i+1] == 'i')
                {
                    temp.push_back('6');
                    s.erase(i+1, 2);
                }
                else if(s[i+1] == 'e')
                {
                    temp.push_back('7');
                    s.erase(i+1, 4);
                }
            }
            if(s[i] == 'e')
            {
                temp.push_back('8');
                s.erase(i+1, 4);
            }
            if(s[i] == 'n')
            {
                temp.push_back('9');
                s.erase(i+1, 3);
            }
        }
        else    temp.push_back(s[i]);
    }
    
    answer = stoi(temp);
    
    return answer;
}