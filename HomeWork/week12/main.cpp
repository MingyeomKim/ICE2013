#include <iostream>
using namespace std;
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"

int main() {
	Package package1("ȫ�浿", "������ �������", "����", "state1", 1234, "��ΰ�", "����Ȧ�� �ѳ����", "��õ������", "state2", 5678, 3.0,20); // �Ϲ� ���Ϲ� ��ü
	TwoDayPackage package2("ȫ�浿", "������ �������", "����", "state1", 1234, "��ΰ�", "����Ȧ�� �ѳ����", "��õ������", "state2", 5678, 3.0, 20, 10); // two-day deliver ���Ϲ� ��ü
	OvernightPackage package3("ȫ�浿", "������ �������", "����", "state1", 1234, "��ΰ�", "����Ȧ�� �ѳ����", "��õ������", "state2", 5678, 3.0, 20, 5); // over-night deliver ���Ϲ� ��ü

	// �ù� ���� �� ��� ���
	cout << "Package1" << endl;
	cout << "Sender \n" << "name : " << package1.getSenderName() << endl <<
		"address : " << package1.getSenderAddress() << endl << "city : " << package1.getSenderCity() << endl << "state : " << package1.getSenderState() << endl << "zipCode : " << package1.getSenderZIP() << endl << endl;

	cout << "Recipient \n" << "name : " << package1.getRecipientName() << endl << "address : " << package1.getRecipientAddress() << endl << "city : " << package1.getRecipientCity() << endl << "state : " << package1.getRecipientState() << endl << "zipCode : " << package1.getRecipientZIP() << endl<< endl;
	cout << "Cost : " << package1.calculateCost() << endl; // 60

	cout << endl << endl;


	cout << "Package2" << endl;
	cout << "Sender \n" << "name : " << package2.getSenderName() << endl <<
		"address : " << package2.getSenderAddress() << endl << "city : " << package2.getSenderCity() << endl << "state : " << package2.getSenderState() << endl << "zipCode : " << package2.getSenderZIP() << endl << endl;

	cout << "Recipient \n" << "name : " << package2.getRecipientName() << endl << "address : " << package2.getRecipientAddress() << endl << "city : " << package2.getRecipientCity() << endl << "state : " << package2.getRecipientState() << endl << "zipCode : " << package2.getRecipientZIP() << endl << endl;
	cout << "Cost : " << package2.CalculateCost() << endl; // 70

	cout << endl << endl;

	cout << "Package3" << endl;
	cout << "Sender \n" << "name : " << package3.getSenderName() << endl <<
		"address : " << package3.getSenderAddress() << endl << "city : " << package3.getSenderCity() << endl << "state : " << package3.getSenderState() << endl << "zipCode : " << package3.getSenderZIP() << endl << endl;

	cout << "Recipient \n" << "name : " << package3.getRecipientName() << endl << "address : " << package3.getRecipientAddress() << endl << "city : " << package3.getRecipientCity() << endl << "state : " << package3.getRecipientState() << endl << "zipCode : " << package3.getRecipientZIP() << endl << endl;
	cout << "Cost : " << package3.CalculateCost() << endl; // 75

	return 0;
}