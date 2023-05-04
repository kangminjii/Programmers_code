#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    for(int i = 1; i < food.size(); i++)
    {
        if((food[i] % 2) != 0)    food[i]--;
        food[i] /= 2;
    }
    
    int count = 1;
    while(count < food.size())
    {
        for(int i = 0; i < food[count]; i++)
            answer += to_string(count);
        
        count++;
    }
   
    answer += to_string(0);
    
    int count2 = food.size() - 1;
    while(count2 >= 1)
    {
        for(int i = 0; i < food[count2]; i++)
            answer += to_string(count2);
        
        count2--;
    }
    
    return answer;
}