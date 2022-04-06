
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // float에 관한 설명
    /*
    //변수  1)이름 :testnum   2)크기 :4byte   3)값 :2.8   4)메모리 주소 :0000005EDD2FF684
 이제 실수형 변수를 써봅시다.부동하다의 약자인 float.부유하며 움직이다의 부동. 
 숫자만 넣지 말고 끝에 float형임을 나타나는 f를 적어줘야 한다. why?
 double이라고 하는 실수형 타입도 있는데 f를 붙이지 않으면 기본적으로 double형으로 인식한다.
 double형은 소숫점 15자리까지를 쓸 수 있기 때문에 메모리를 더 많이 쓰는 쪽으로 대입이 됨. 그래서 경고가 뜬다.
 그래서 써줘야 된다.
    */
    //float 예문, 위치, 크기 등을 알아보는 코드
 /*   float testNUM = 2.8f;
    double testNUM1 = 2.8;
    cout << sizeof(testNUM) << endl;
    cout << &testNUM << endl;
    cout << testNUM1 << endl;

    std::cout << "Hello World!\n"; */
 //생일축하코드
    string yourname, myname;
    cout << "상대방 이름을 입력하세요." << endl;
    cin >> yourname;
    cout << "상대방의 이름이" << yourname << "로 저장되었습니다.\n" << endl;
    cout << "본인의 이름을 입력하세요." << endl;
    cin >> myname;
    cout << "당신의 이름이" << myname << "로 저장되었습니다.\n" << endl;
    int yourage;
    cout << "상대방 나이를 입력하세요." << endl;
    cin >> yourage;
    cout << myname << ":" << yourname << " 님" << yourage << "살 생일을 축하합니다." << endl;

    
}

// 실습 1. 상대방 이름과 내 이름, 상대방 나이를 입력 받아서 
// 축하메세지를 출력하는 프로그램을 만들어보자.
/* 예시
상대방 이름을 입력하세요.
_상대이름
본인의 이름을 입력하세요.
_내이름
상대방 나이를 입력하세요.
_상대나이

본인이름: 상대이름 님 상대나이 살 생일을 축하합니다.

*/
// 풀이
/*
이름을 입력해본다.
입력창에서 변수가 필요함을 알게 된다.
데이터타입 변수명을 정하고 초기화
문장을 써야 하죠? string입니다.
string yourname, myname ... ;
cout(출력) << (출력할것);
cin(입력) >> (입력받을내용);
*/

