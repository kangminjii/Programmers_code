#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    
    
    int count = 1;
    while(count < food.size())
    {
        for(int i = 0; i < food[count]/2; i++)
            answer += to_string(count);
        
        count++;
    }
   
    answer += to_string(0);
    
    int count2 = food.size() - 1;
    while(count2 >= 1)
    {
        for(int i = 0; i < food[count2]/2; i++)
            answer += to_string(count2);
        
        count2--;
    }
    
    return answer;
}