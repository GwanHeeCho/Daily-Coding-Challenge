#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    string answer = "";
    unordered_map<string, int> m;
    for (auto name : participant)
    {   // 출발하면 +1
        m[name]++;
    }
    for (auto name : completion)
    {   // 완주하면 -1
        m[name]--;
    }
    // 해쉬 테이블 순회
    for (auto pair : m)
    {   // 해쉬 2번째 값이 0보다 큰 경우
        if (pair.second > 0)
        {
            answer = pair.first;
            break;
        }
    }
    return answer;
}