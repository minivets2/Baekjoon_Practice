#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b, int c, int d)
{
    int answer = 0;

    if (a == b && b == c && c == d && a == d)
        answer = 1111 * a;
    else if (a == b && b == c && a == c && a != d)
        answer = (10 * a + d) * (10 * a + d);
    else if (a == b && b == d && a == d && a != c)
        answer = (10 * a + c) * (10 * a + c);
    else if (a == c && c == d && a == d && a != b)
        answer = (10 * a + b) * (10 * a + b);
    else if (b == c && c == d && b == d && b != a)
        answer = (10 * b + a) * (10 * b + a);
    else if (a == b && c == d)
        answer = (a + c) * abs(a - c);
    else if (a == c && b == d)
        answer = (a + b) * abs(a - b);
    else if (a == d && b == c)
        answer = (a + b) * abs(a - b);
    else if (a == b && c != d)
        answer = c * d;
    else if (a == c && b != d)
        answer = b * d;
    else if (a == d && b != c)
        answer = b * c;
    else if (b == c && a != d)
        answer = a * d;
    else if (b == d && a != c)
        answer = a * c;
    else if (c == d && a != b)
        answer = a * b;
    else if (a != b && b != c && c != d && a != d)
        answer = min(min(a, b), min(c, d));

    return answer;
}