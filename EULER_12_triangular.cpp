#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

// 주어진 수의 약수의 개수를 구하는 함수 (소인수분해 활용)
int getDivisorCount(long long n) {
    int count = 1;
    long long temp = n;

    // 2부터 시작하여 소인수분해 진행
    for (long long i = 2; i * i <= temp; ++i) {
        if (temp % i == 0) {
            int exponent = 0;
            while (temp % i == 0) {
                exponent++;
                temp /= i;
            }
            count *= (exponent + 1);
        }
    }
    
    // 소인수분해 후 남은 수가 1보다 크다면, 그 수 자체가 소수이므로 (지수 1)
    if (temp > 1) {
        count *= 2; // (1 + 1)을 곱해줌
    }

    return count;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    long long n = 1;
    long long triangleNumber = 0;

    while (true) {
        // n번째 삼각수 구하기
        triangleNumber += n;

        // 약수의 개수 계산
        int divisors = getDivisorCount(triangleNumber);

        // 약수의 개수가 500개 이상이면 출력 후 종료
        if (divisors >= 500) {
            cout << n << "번째 삼각수: " << triangleNumber << endl;
            cout << "약수의 개수: " << divisors << "개" << endl;
            break;
        }
        n++;
    }

    return 0;
}