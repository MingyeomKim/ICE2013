#include <iostream>
using namespace std;
#include "Time.h"

int main() {
    Time t1(23, 59, 57);
    Time t2; // default constructor ȣ��x
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
    t3.printStandard(); // 01:01:01 AM �� ���·� ���߱����� printStandard�� �����Ͽ����ϴ�. 
    t2.printStandard(); //defualt �����ڿ��� �����ð����� �ʱ�ȭ���� Ȯ��
    t4.printStandard(); // ��ȿ�� �˻縦 �� ���ļ� ���� �Ҵ���� Ȯ��
  

    cout << endl;
    cout << "������ Time Ŭ������ ��ü �� : " << Time::getCount() << endl;
    return 0;
}