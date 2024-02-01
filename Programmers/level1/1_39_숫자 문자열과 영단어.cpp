#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(string s)
{
    string result = "";
    map<string, string> numbers = { {"zero", "0"}, {"one", "1"}, {"two", "2"}, {"three", "3"}, {"four", "4"},
                               {"five", "5"}, {"six", "6"}, {"seven", "7"}, {"eight", "8"}, {"nine", "9"} };
    string word = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
            result += s[i];
        else
        {
            word += s[i];

            if (numbers.find(word) != numbers.end())
            {
                result += numbers[word];
                word.clear();
            }
        }
    }

    return stoi(result);
}