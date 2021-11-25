#include <iostream>
using namespace std;
#include "Time.h"

int main() {
    Time t1(23, 59, 57);
    Time t2; // default constructor 호출x
    Time t3(1, 1, 1);
    Time t4(99, 99, 99);
    for (int i = 0; i < 9; i++)
    {
        t1.printStandard();
        t1.tick();
    }
    for (int i = 0; i < 9; i++)
    {
        t1.printUniversal();
        t1.tick();
    }
    cout << endl;
    t3.printStandard(); // 01:01:01 AM 의 형태로 맞추기위해 printStandard를 수정하였습니다. 
    t2.printStandard(); //defualt 생성자에서 정오시간으로 초기화됨을 확인
    t4.printStandard(); // 유효성 검사를 잘 거쳐서 값이 할당됨을 확인
  

    cout << endl;
    cout << "생성된 Time 클래스의 객체 수 : " << Time::getCount() << endl;
    return 0;
}