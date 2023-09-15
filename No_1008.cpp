#include <iostream>
using namespace std;
/*
std::fixed		// 소수점 아래로 고정
std::cout.precision(n);	// 실수 전체 자리수 중 n자리 까지 표현
----------------------------
double a = 3333.333333;
 
std::cout.precision(6);
std::cout << a;			// 3333.33 이 출력됨
 
std::cout << std::fixed;	// 고정 소수점 표기로 전환
std::cout << a;			// 3333.333333 이 출력 됨
 
std::cout.unsetf(ios::fixed);	// 고정 소수점 표기 해제
std::cout << a;			// 3333.33 이 출력됨
*/
int main() {
    double a;
    double b;

    cin >> a;
    cin >> b;
    
    cout << fixed;
    cout.precision(12);
    cout << a/b << endl;
}