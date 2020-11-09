#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    string answer = "";
    unordered_map<string, int> m;
    for (auto name : participant)
    {   // ����ϸ� +1
        m[name]++;
    }
    for (auto name : completion)
    {   // �����ϸ� -1
        m[name]--;
    }
    // �ؽ� ���̺� ��ȸ
    for (auto pair : m)
    {   // �ؽ� 2��° ���� 0���� ū ���
        if (pair.second > 0)
        {
            answer = pair.first;
            break;
        }
    }
    return answer;
}