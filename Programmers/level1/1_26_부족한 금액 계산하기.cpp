using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    int c = 1;

    while (count >= c)
    {
        answer += c * price;

        c++;
    }

    return answer > money ? answer - money : 0;
}