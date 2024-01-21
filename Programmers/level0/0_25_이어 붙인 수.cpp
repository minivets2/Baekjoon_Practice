#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list)
{
    int answer = 0;
    string odd_num = "";
    string even_num = "";

    for (int i = 0; i < num_list.size(); i++)
    {
        if (num_list[i] % 2 == 0)
            even_num += to_string(num_list[i]);
        else
            odd_num += to_string(num_list[i]);
    }

    answer = stoi(even_num) + stoi(odd_num);

    return answer;
}