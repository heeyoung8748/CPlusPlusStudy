

#include <iostream>
#include <string>
using namespace std;


int main()
{
    /*
    연산자
    데이터를 가공(연산)하는 모든 명령에 필요한 것들
    수업 목표
    1) 어떤 종류의 연산자들이 있는지?
    2) 우선 순위 : 연산자들이 여러 개 있을 때 어떤 순서로 연산이 진행되는지?
    3) 결합 순서 : 좌측부터 연산하는 연산자, 우측부터 연산하는 연산자

    1. 사칙연산 : 산술연산자 (좌측부터 연산)
    + : 더하기
    - : 빼기
    * : 곱하기
    / : 나누기  11 / 3 => 3
    % : 나머지  11 % 3 => 2
    계산 순서
    *, /, % > +, -

    2. 대입연산자 (우측부터 연산)
    = : 왼쪽 항에 오른쪽 항의 값을 대입한다. (복사한다)
    왼쪽부터 쭉 읽어보다가 대입연산자가 나와? 대입연산자 기준 오른쪽부터 계산.

    3. 복합대입연산자
    += : a += b;  => a = a + b;
    -= : a -= b;  => a = a - b;
    *= : a *= b;  => a = a * b;
    /= : a /= b;  => a = a / b;
    %= : a %= b;  => a = a % b; (a와 b는 정수형타입이어야 한다.)
    문제1. )
    어떻게 하면 이 복합대입연산자 코드를 볼 수 있을까?

    4. 증감연산자
    특정 변수의 값을 1씩 증가시키거나 감소시킬 때 사용한다.
    변수의 앞이나 뒤에 ++ / -- 를 붙여서 사용한다.

    5. 관계연산자
    두 값을 비교한 결과가 참(1, true)인지 거짓(0, false)인지 반환하는 연산자
    0이 아니면 참
    < : a < b : 왼쪽 항의 값이 오른쪽 항의 값보다 작으면 참을 반환한다.
    > : a > b : 왼쪽 항의 값이 오른쪽 항의 값보다 크면 참을 반환한다.
    <= : a <= b : 왼쪽 항의 값이 오른쪽 항의 값보다 작거나 같으면 참을 반환한다.
    >= : a >= b : 왼쪽 항의 값이 오른쪽 항의 값보다 크거나 같으면 참을 반환한다.
    == : a == b : 왼쪽 항의 값이 오른쪽 항의 값보다 같을 때, 참을 반환한다.
    != : a != b : 왼쪽 항의 값과 오른쪽 항의 값이 다를 때, 참을 반환한다.
    문제1. )고객의 나이를 입력받아서 미성년자(19세 이하)면 True를 출력
    성인이면 False를 출력

    문제2. )아까 입력 받은 나이를 기준으로, 주민등록증 발급대상(20살만)이면 true를, 아니면 false를 출력.

    +아홉수이면 true, false 어쩌구

    */
    int howOld;
    cout << "당신의 나이는 몇 살입니까?" << endl;
    cin >> howOld;
    // boolalpha : 0, 1로 출력되는 결과를 True, False로 바꿔 출력해준다.
    cout << boolalpha << "당신은 미성년자인가?" << endl;
    cout << (howOld <= 19) << endl;
    cout << "당신은 주민등록증 발급대상인가?" << endl;
    cout << (howOld == 20) << endl;
    cout << "당신은 아홉수인가?" << endl;
    cout << (howOld % 10 == 9);

    //두 개의 변수 선언, 초기화
 /*   int left_value = 14;
    int right_value = 3; */

    //증감연산자 실습
   /* left_value++; //대입연산자를 쓰지는 않았지만 값이 바뀌는 경우. => 15
    cout << left_value++ << endl;
   //   ++left_value; //16
    cout << ++left_value << endl;
    //어쩌구++ => 출력 이후 더해진다. ++어쩌구 => 더한 값을 출력한다.

    left_value--;
    cout << left_value << endl; //13
    --left_value;
    cout << left_value << endl; //12

    cout << --left_value << endl; //11
    cout << left_value-- << endl; //출력 후 증감연산자가 적용되어 여전히 출력된 결과는 11
    */


    // 풀이 1
    /*
    left_value += right_value;
    cout << "a += b의 값은? : " << left_value << endl;

    left_value -= right_value;
    cout << "a += b의 값은? : " << left_value << endl;

    left_value *= right_value;
    cout << "a += b의 값은? : " << left_value << endl;

    left_value /= right_value;
    cout << "a += b의 값은? : " << left_value << endl;

    left_value %= right_value;
    cout << "a += b의 값은? : " << left_value << endl;

    */

    //풀이 2
    /*
    cout << "a += b의 값은? : " << (left_value += right_value) << endl;

    cout << "a -= b의 값은? : " << (left_value -= right_value) << endl;

    cout << "a *= b의 값은? : " << (left_value *= right_value) << endl;

    cout << "a /= b의 값은? : " << (left_value /= right_value) << endl;

    cout << "a %= b의 값은? : " << (left_value &= right_value) << endl;

    */
    //풀이 3
    /*  int leftRightPlus = left_value += right_value;
    cout << "a += b의 값은? : " << leftRightPlus << endl;

    left_value = 11;
    int leftRightMinus = left_value -= right_value;
    cout << "a -= b의 값은? : " << leftRightMinus << endl;

    left_value = 11;
    int leftRightMultipication = left_value *= right_value;
    cout << "a *= b의 값은? : " << leftRightMultipication << endl;

    left_value = 11;
    int leftRightDivision = left_value /= right_value;
    cout << "a /= b의 값은? : " << leftRightDivision << endl;

    left_value = 11;
    int leftRightRest = left_value &= right_value;
    cout << "a %= b의 값은? : " << leftRightRest << endl;

    */


/*

    cout << "+: " << left_value + right_value << endl;
    cout << "-: " << left_value - right_value << endl;
    cout << "*: " << left_value * right_value << endl;
    cout << "/: " << left_value / right_value << endl;
    cout << "%: " << left_value % right_value << endl;

    */


}




