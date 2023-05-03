#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    int filled, repeatBottle, others = 0;
    
    answer += (n / a) * b;
    
    filled = (n / a) * b;
    others = n % a;
   
    while(repeatBottle >= a)
    {
        repeatBottle = filled + others;
        answer += (repeatBottle / a) * b;
        
        filled = (repeatBottle / a) * b;
        others = repeatBottle % a;        
    }
    
    return answer;
}