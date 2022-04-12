// 220411_Review.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

    //시스템 파일을 컴파일하면 > 목적파일
    //C++ 문법
    //주석: 지금 이거. 컴파일되지 x 실행되어야 하는 코드가 아니다.
    /*
    1. 띄쓰를 통해 요소를 구분한다.
    2. 마무리는 세미콜론(;)으로 한다.

    byeon su : 데이터를 저장할 메모리공간을 할당받는다.

    datatype byeonsuname;
        datatype byeonsuname = 어쩌구;
        이렇게 데이터타입을 정하고 값을 정해두는 것을 초기화라고 합니다~
    char myname = '병철이';

    데이터타입 (크기, 표현할 수 있는 숫자의 범위 알아둡시다)
    1. 정수형 (0, 1, 2, 3, ... -1, -2...)
    int
    short
    long
    long long
    __int8, __int16, __int32, __int64 ... 아마... 128까지?
    2. 실수형
    float
    double
    long double
    3. 문자형
    char
    4. 문자열
    string

    변수명 이름짓기 규칙 (표기법)
    1. 헝가리안 표기법
    - 데이터타입 약자를 접두어로 붙인다.

    2. 카멜 표기법
    int maxCount = 10;
    3. 파스칼 표기법
    int MaxCount = 10;

    int nn = 10;
    int cmprs = 20;
    이런 느낌으로 뭘 줄인 거지? 싶은 변수명 사용 x
    변수명만 보고도 어떤 변수를 지정하기 위해 사용한 변수명인지 이해할 수 있도록 해야함

    int token_max_count 이런식으로 자주씀(구글 네이밍표기법? 참고)

   1. 대소문자를 구분한다.
   2. 알파벳, 숫자, _(언더바)만 사용한다.
    2-1. 숫자는 가장 앞에 올 수 없다.

   4가지 속성
   1) 이름 input_key  2)크기 4byte(데이터 타입에 의해 결정)  3) 값 10  4)  메모리 주소 0000006EABEFFA24



   연산자
   데이터를 가공(연산)하는 모든 명령에 필요한 것들.
    1) 어떤 종류의 연산자인가
    2) 우선순위 : 어떤 순서로 연산이 되는가
    3) 결합순서 : 좌측부터 연산하는가, 우측부터 연산하는가

    1. 사칙연산 : 산술연산자
       +(더하기) , -( 빼기 ) , *( 곱하기 ) , /( 나누기 11 / 3 = 3(몫) ) , %( = 2(나머지) )
       *, /, % > +, - 우선순위. 좌 -> 우

    2. 대입연산자
       =(우측의 값을 좌측에 대입(복사)) 우 -> 좌

    3. 복합대입연산자
       +=(좌항 값 + 우항 값을 좌측에 대입) a += b; => a = a + b;
       -=(좌항 값 - 우항 값을 좌측에 대입) a -= b; => a = a - b;
       *=(좌항 값 * 우항 값을 좌측에 대입) a *= b; => a = a * b;
       /=(좌항 값 / 우항 값을 좌측에 대입) a /= b; => a = a / b; (b == 0, 런타임 에러 발생)
       %=(좌항 값 % 우항 값을 좌측에 대입) a %= b; => a = a % b; (데이터타입이 정수형이 아닐 때)

    4. 증감연산자
       특정 변수의 값을 1씩 증가시키거나 감소시킬 때 사용하는 연산자
       변수명 앞이나 뒤에 ++ / -- 를 붙여서 사용한다.
       ex)
       std::cout << input_key++ << std::endl;

    5. 관계연산자
       두 항의 값을 비교한 결과가 참(1, 암튼 0아님, true) 또는 거짓(0, false)으로 반환되는 연산자
       a < b
       a > b
       a <= b
       a >= b
       a == b
       a != b

    6. 논리연산자
       왼쪽 항과 오른쪽 항의 값을 각각 참과 거짓으로 연산해서 두 값을 비교하고 참과 거짓을 반환하는 연산자
       && : 논리곱(AND)
       // a && b (a의 결과값이 참이고 b의 결과값이 참이면 1(true)을 반환)
       || : 논리합(OR)
       // a || b (a의 결과값이 참이거나 b의 결과값이 참이면 1(true)을 반환)
       ! : 논리부정(not)
       // a ! (a의 결과값이 참이면 거짓을 반환, 거짓이면 참을 반환)
       ex)
           std::cout << !0 << std::endl; //1
           std::cout << !1 << std::endl; //0
           std::cout << !3000 << std::endl; //0
           //이유? 0이 아닌 다른 수는 다 참으로 인식하기 때문에.

    7. 삼항연산자
       a ? b : c;
       a의 결과값이 참이면 b실행문이 동작, 거짓이면 c실행문이 동작.
       ex) (10 > 5) ? std::cout << "10이 5보다 크다" : std::cout << "10이 5보다 작다";
       

    난수 (랜덤값)
       rand(); // 0 ~ 32767 사이의 랜덤한 값이 반환된다.
       ex)
       cout << rand() << endl;
       //함수 내부에 seed값이 있어서 이 값에 의해서 리턴값이 정해진다.
       기본적으로 seed : 1로 세팅되어 있다.
       프로그램을 실행시킬 때마다 seed값을 바꿔주는 방법
       srand(time(NULL));

       숙제 1. 랜드값의 데이터타입은 몇byte일까?



    */
/*
 실습 1.
       3 ~ 7 사이의 랜덤한 숫자를 출력하는 프로그램을 작성하자. (3, 7 포함)
 실습 2.
       가장 작은 값과 큰 값을 입력 받아서, 그 사이의 임의의 값을 출력하는 프로그램을 작성하자.

 실습 3.
       프로그램을 실행하면 내부적으로 1~10 사이의 숫자가 정답으로 정해진다.
       유저가 1 ~ 9(1, 9 포함) 사이의 숫자를 입력하면 맞으면 true, 틀리면 false를 출력한다.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
/*
    srand(time(NULL));
    cout << "문제 1. 3에서 7 사이의 랜덤한 숫자: " << (rand() % 5) + 3 << endl;
    cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
    
    int max_num, min_mum;
    
    */

    srand(time(NULL));
    cout << "문제 1. 3에서 7 사이의 랜덤한 숫자: " << (rand() % 5) + 3 << endl;
    cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;

    int max_num, min_num;

    cout << "가장 큰 값을 적어라" << endl;
    cin >> max_num;
    cout << "가장 작은 값" << endl;
    cin >> min_num;
    cout << "문제 2. 두 값 사이의 랜덤한 숫자: " << (rand() % (max_num - min_num) + min_num) << endl;
    cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;



    //문제 3. 

    int answer;

    cout << "문제 3. 1에서 9까지의 숫자 중 임의의 숫자를 하나 입력해주세요." << endl;
    srand(time(NULL));
    cin >> answer;
    ((rand() % 10) + 1 == answer) ? cout << "true!" : cout << "false!!" << endl;
    cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;

    //숙제

    cout << "rand() 함수의 데이터크기는" << sizeof(rand()) << "Byte" << endl;


    /*
 실습 1.
       3 ~ 7 사이의 랜덤한 숫자를 출력하는 프로그램을 작성하자. (3, 7 포함)
 실습 2.
       가장 작은 값과 큰 값을 입력 받아서, 그 사이의 임의의 값을 출력하는 프로그램을 작성하자.

 실습 3.
       프로그램을 실행하면 내부적으로 1~10 사이의 숫자가 정답으로 정해진다.
       유저가 1 ~ 9(1, 9 포함) 사이의 숫자를 입력하면 맞으면 true, 틀리면 false를 출력한다.
*/

#include <iostream>
#include <string>
    using namespace std;
/*
    int main()
    {

        srand(time(NULL));
        cout << "문제 1. 3에서 7 사이의 랜덤한 숫자: " << (rand() % 5) + 3 << endl;
        cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;

        int max_num, min_num;

        cout << "가장 큰 값을 적어라" << endl;
        cin >> max_num;
        cout << "가장 작은 값" << endl;
        cin >> min_num;
        cout << "문제 2. 두 값 사이의 랜덤한 숫자: " << (rand() % (max_num - min_num) + min_num) << endl;
        cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;



        //문제 3. 

        int answer;

        cout << "문제 3. 1에서 9까지의 숫자 중 임의의 숫자를 하나 입력해주세요." << endl;
        srand(time(NULL));
        cin >> answer;
        ((rand() % 10) + 1 == answer) ? cout << "true!" : cout << "false!!" << endl;

        //숙제

        cout << "rand() 함수의 데이터크기는" << sizeof(rand()) << "Byte" << endl;

        */

    }

    /*
    3에서 7 사이의 랜덤한 숫자


    */
    

    /*
    srand(time(NULL)); 시간에 따라 값을 랜덤(을빙자해 일정)하게 변화시키는 함수
    //이 프로그램을 언제 실행시켰느냐에 따라서 랜덤 시드값이 바뀐다. 0~32767 사이의 정수값 리턴.
    //계속 숫자가 늘어나네요?

    cout << rand() << endl;

    (10 < 5) ? std::cout << "10이 5보다 크다" : std::cout << "10이 5보다 작다";
    std::cout << std::endl;
    std::cout << !0 << std::endl; //0
    std::cout << ((10 < 5) == 0) << std::endl;


    int input_key = 10;
    std::cout << &input_key << std::endl;

    float testFloat = 5.3f;
    
        float testFloat = 5.3;
        이렇게 쓸 수 없는 이유(f를 입려갷야 하는 이유)
        또 다른 실수형 데이터타입 double(15자리)이 기본형이라 
        float(7자리)를 사용하려면 꼭 정의하려는 초기화값 뒤에 f를 쓸 것.
        또 다른 long double은 아마... 31자리?
    */
    /*char testCharacter = 'a';
    std::string testString = "Hello my name is Computer";
    std::cout << testString << std::endl;
    */





