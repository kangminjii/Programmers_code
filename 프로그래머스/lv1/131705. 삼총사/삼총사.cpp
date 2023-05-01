#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0, sum;
    
    for(int i = 0; i < number.size(); i++)
    {
        int firstIndex = number[i];
        
        for(int j = i + 1; j < number.size(); j++)
        {
            int secondIndex = number[j];
            
            for(int k = j + 1; k < number.size(); k++)
            {
                sum = 0;
                
                int thirdIndex = number[k];
                sum = firstIndex + secondIndex + thirdIndex;
                
                if(sum == 0)   answer++;
                else           continue;
                
            }
        }
    }
    
    
    return answer;
}