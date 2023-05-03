#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
   
    int answer = 0;
    int repeatBottle, filled, others;
    
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
    
    
    /*
    // 다른 풀이(변수 간소화)
    int answer = 0;
   
    while(n >= a)
    {
        int temp = (n/a)*b;
        answer += temp;
        n = (n/a)*b + n%a;
     }
    */ 
    
    return answer;
}