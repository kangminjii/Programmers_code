#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    
    int count = 0;
    
    for(int i = 1; i <= a; i++)
    {
        if((i == 4) || (i == 6) || (i == 9) || (i == 11))
        {
            for(int j = 1; j <= 30; j++) 
            {
                count++;
                if((i == a) && (j == b))  break;
            }
        }
        else if(i == 2)
        {
            for(int j = 1; j <= 29; j++)    
            {
                count++;
                if((i == a) && (j == b))  break;
            }
        }
        else
        {
            for(int j = 1; j <= 31; j++)    
            {
                count++;
                if((i == a) && (j == b))  break;
            }
        }
    }
    
    switch(count % 7)
    {
        case 1:
            answer = "FRI";
            break;
        case 2:
            answer = "SAT";
            break;
        case 3:
            answer = "SUN";
            break;
        case 4:
            answer = "MON";
            break;
        case 5:
            answer = "TUE";
            break;
        case 6:
            answer = "WED";
            break;
        case 0:
            answer = "THU";
            break;
    }
    
    
    return answer;
}