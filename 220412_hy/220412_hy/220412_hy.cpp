
#include <iostream>
#include <string>
using namespace std;

int main()
{

    //조건문 설명
    /*
    오늘 배울 것: 제어문
    배운 것: 데이터(타입) / 연산자

    제어 구조! 를 배울 것입니다

    1. 조건문 : 특정 조건에 따라서 실행문을 실행할지 안할지 제어(if / switch)
    2. 반복문 : 특정 조건에 따라서 실행문을 일정 횟수만큼 반복 실행하도록 제어(while, for)

    조건문
    1. if 문
    if (조건식)
      { //조건식 결과는 참/거짓이 된다.
        실행문;
        }
        else if (조건식 2)
        {
        실행문 3;
        }
        else
            {
            실행문2;
            }
    if문의 조건식이 실행문 1에서 통과될 시 실행문 2는 실행되지 않음
    실행문 1이 참이 아닐 때 실행문 2가 실행.

    조건문 실습1.
    정수를 하나 입력 받아서
    입력 받은 숫자가 10보다 크면 "입력된 숫자가 10보다 큽니다."
    10이하 9초과(10)이면 9보다 큽니다 출력
    9이하 6 초과 이면 "6보다 큽니다" 출력
    그 이외 "6보다 작거나 같습니다."

    2. switch문
    switch (정수형 변수)
    {
    case 정수1:
         실행문1;
    break;
    case 정수2:
         실행문2;
    break;
    case -3:
         실행문3;
    default: //해당하는 정수값이 없을 때
        실행문4;
    }

    조건문 실습2.(switch문)
    당신의 고향은 어디입니까? 질문 출력
    예제 출력
    1. 서울  2. 양평  3. 광주  4. 대전  5. 제주도
    _1

    안녕하세요. 당신의 고향은 서울이군요. 이런식으로 출력되는 프로그램을 만들자
    디폴트 : 5개 중에 선택해주세요.

    */
    //문제풀이
    /*
#pragma region switch문을if문으로
    //입력
    int hometoun_ifnum;
    cout << "switch문 > if 문 실습. 당신의 고향은 어디입니까?" << endl;
    cout << "1. 서울  2. 양평  3. 광주  4. 대전  5. 제주도" << endl;
    cin >> hometoun_ifnum;

    //처리
    //출력

    if (hometoun_ifnum == 1)
    {
        cout << "당신의 고향은 서울이군요.";
    }
    else if (hometoun_ifnum == 2)
    {
        cout << "당신의 고향은 양평이군요.";
    }
    else if (hometoun_ifnum == 3)
    {
        cout << "당신의 고향은 광주군요.";
    }
    else if (hometoun_ifnum == 4)
    {
        cout << "당신의 고향은 대전이군요.";
    }
    else if (hometoun_ifnum == 5)
    {
        cout << "당신의 고향은 제주도군요.";
    }
    else
    {
        cout << "5개 중에서 선택하시죠";
    }
    cout << endl;
    cout << "___________________________" << endl;


#pragma endregion

#pragma region switch문실습
    //입력
    int hometown_num;
    cout << "당신의 고향은 어디입니까?" << endl;
    cout << "1. 서울  2. 양평  3. 광주  4. 대전  5. 제주도" << endl;
    cin >> hometown_num;
    //처리
    //출력
    switch (hometown_num)
    {
    case 1:
        cout << "안녕하세요. 당신의 고향은 서울이군요.";
        break;
    case 2:
        cout << "안녕하세요. 당신의 고향은 양평이군요.";
        break;
    case 3:
        cout << "안녕하세요. 당신의 고향은 광주군요.";
        break;
    case 4:
        cout << "안녕하세요. 당신의 고향은 대전이군요.";
        break;
    case 5:
        cout << "안녕하세요. 당신의 고향은 제주도군요.";
        break;
    default: //해당하는 정수값이 없을 때
        cout << "5개 중에서 선택해주십시오.";
        //case 숫자가 겹치면 오류가 뜸. 어차피 잘 지키겠지만 case에는 각자 다른 숫자가 들어가야 한다!
    }

    cout << endl;
    cout << "___________________________" << endl;


#pragma endregion

#pragma region if문실습
    //입력
    int input_number;
    cout << "정수를 입력하시오. : ";
        cin >> input_number;
    cout << endl;


    //처리
    if (input_number > 10)
    {
        cout << "입력된 숫자가 10보다 큽니다." << endl;
    }

        else if (input_number > 9)
    {
            cout << "입력된 숫자가 9보다 큽니다." << endl;
    }

    else if (input_number > 6)
    {
        cout << "입력된 숫자가 6보다 큽니다." << endl;
    }

    else
    {
        cout << "입력된 숫자가 6보다 작거나 같습니다." << endl;
    }
#pragma endregion
    */

    //반복문
    /*
    반복문
    1. while문
    while (조건식)
    {
        실행문;(반복~)
        조건식을 바꾸는 실행문; //while문을 중단시키는 첫 번째 방법

        if (조건식)
        {
            break;
            //while문을 중단시키는 두 번째 방법
        }
    }

    do-while문
    do
    {
        실행문;
    }
    while (조건식);

    2. for문
    for ( (1)초기식(int 어쩌고 = 3;)  ; (2)조건식(if 어쩌고) ;  (3)증감식(어쩌고++);)
    {
        (4)실행문;
    }

    (1) => (2) => (4) => (3) => (2) => (4) => (3) ... 조건식의 결과값이 0이 나올 때까지
    */
    //for문 예시
    /*
        for (int i = 0; i < 5; i++) //or i += 1
        {
            cout << "Hello World" << endl;
        }
        */
        //for문 실습문제
        /*
        for문 실습1.
        10부터 1까지 차례대로 출력되는 코드를 작성해보자.
        for문 실습2.
        100 미만의 3의 배수가 차례대로 출력되는 코드를 작성해보자.
        for문 실습3.
        1000 미만의 2의 승수를 차례대로 출력되는 코드를 작성해보자.
        2의0승., 2의 1승, 2의 2승 ... 1, 2, 4, 8, ..
        */
        //실습 문제풀이
        /*
        //실습1

        for (int i = 10; 0 < i; i--) //or i += 1
        {
            cout << i << endl;
        }
        cout << "____________________" << endl;

        //실습2
        for (int i = 3;i < 100; i += 3) //or i += 1
        {
            cout << i << endl;
        }
        cout << "____________________" << endl;
        //실습3

        for (int i = 1; i < 1000; i *= 2) //or i += 1
        {
            cout << i << endl;
        }

        */
        //for문 실습문제 2
        /*
        실습 4. 구구단을 출력해보자. 구구단 2단
             4-1. 구구단 2단 ~ 9단을 출력해보자.
             4-2. 구구단 2단 ~ 9단을 다음과 같은 형태로 출력해보자
             2단 3단 4단
             5단 6단 7단
             8단 9단
        */
        //실습 4-1

   /*for (int i = 2, j = 1; j < 10; j++)
    {
        cout << i << " * " << j << " = " << i * j << endl;
    }
   */
   //풀이
   /*
   for (int i = 1; i < 10; i++)
   {
           cout << " 2 * " << i << " = " << 2 * i << endl;
   }

   int gugu_su, gugu_dan

   for (int gugu_dan = 2; gugu_dan < 10; gugu_dan++)
       {
           for (int i = 1; i < 10; i++)
               {
                   cout << gugu_dan << " * " << i << " = " << gugu_dan * i << endl;
               }
               cout << endl;
       }
   */
    int i, gugu_su, gugu_dan;
    for (i = 0; i < 3; i++)
    {
        for (gugu_su = 1; gugu_su <= 9; gugu_su++)
        {
            for (gugu_dan = i * 3 + 1; gugu_dan <= (i + 1) * 3; gugu_dan++)
            {
                cout << gugu_dan << " x " << gugu_su << " = " << gugu_dan * gugu_su << "  ";
            }
            cout << endl;
        } cout << endl;
    }



    //실습 4-2
/* for (int i = 2; i <= 9; i++)
 {
     for(int j = 1; j <= 9; j++)
     cout << i << " * " << j << " = " << i * j << endl;

 }
*/
//실습 4-3 기존
/*
for (int i = 2; i <= 9; i+= 3) //9보다 커지면 식이 끝난다
{
    for (int j = 1; j <= 9; j++)
    {
        cout << i << " * " << j << " = " << i * j << "  "
         << (i + 1) << " * " << j << " = " << (i + 1) * j << "  "
         << (i + 2) << " * " << j << " = " << (i + 2) * j << "  " << endl;
    }
    }
}
*/
    int j = 0;
    for (i = 0; i < 5;)
    {
        if (j <= i + 1)
        {
            cout << "*";
            j++;
        }
        else
        {
            i++;
            cout << endl;
        }
    }
}
/*과제
1)
*
**
***
****
*****

2)
    *
   **
  ***
 ****
*****

3)
*****
****
***
**
* 

4)
*****
 ****
  ***
   **
    *

5)
      *
     ***
    *****
   *******
  *********
 
 6)
  *********
   *******
    *****
     ***
      *
 7)
      *
     ***
    *****
   *******
  *********
  *********
   *******
    *****
     ***
      *
*/


    //hello world를 5번 출력시키는 프로그램을 만들자
// int repeat_count = 0;
//do-while문으로 헬로월드 5번쓰기
/*
do
{
    cout << "Hello World!" << endl;
    ++repeat_count;
} 
while (repeat_count < 5);

*/
//while문으로 헬로월드 5번쓰기
/*
while (1)
{
    cout << "Hello World!" << endl;
    //까지하면 결과가 똑같다. 왜? repeat_count는 계속 0이니까 이녀석을 한번씩 증가시켜줘야됨.
    repeat_count++;

    if (repeat_count >= 5)
    {
        break;
    }
 

    }
*/
//위의 문제풀이(1~9 사이 어쩌고에서 정답출력)을 while문으로
/*
srand(time(NULL));


//입력
int correct_number = rand() % 9 + 1;
int input_quiz_number = -1;
while ((input_quiz_number != correct_number)) //에다가 조건식(input_quiz_number != correct_number) 을 넣거나 삼항연산자 넣기
{
    cout << "1에서 9까지의 숫자 중 하나를 입력하세요. : ";
    cin >> input_quiz_number;

    (input_quiz_number == correct_number) ? cout << "true" << endl : cout << "false" << endl;
}
*/
    /*
    중괄호를 사용하는 이유?
    지금의 실행문이 한 줄인 지금의 코드 기준으로는 꼭 해야 하는 건 아니지만,
    여러 줄의 경우 다음 실행문이 이전 세미콜론에 막혀 다른 요소로 분리가 된다. 
    그래서 이어지는 else if문에 에러가 뜸!
    중괄호를 왼쪽에만 놔두는 이유는? 
    요소를 형태에 맞춰 분리하면 가독성이 좋음(1:1매칭)
    */



