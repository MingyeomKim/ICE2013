#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"

int main() {
	
	vector < Package* > packages(3);

	packages[0] = new Package("Lou Brown", "1 Main St.", "Boston", "MA", 11111 ,"Mary Smith", "7 Elm St.", "New York", "NY", 22222 , 8.5, .5); // 일반 수하물 객체
	packages[1] = new TwoDayPackage("Lisa Klein", "5 Broadway", "Somerville", "MA", 33333 , "Bob George", "21 Pine Rd.", "Cambridge", "MA",  44444, 10.5, .65, 2.0); // two-day deliver 수하물 객체
	packages[2] = new OvernightPackage("Ed Lewis", "2 Oak St.", "Boston", "MA", 55555, "Don Kelly", "9 Main St.", "Denver", "CO", 66666, 12.25, 0.7, 0.25); // over-night deliver 수하물 객체

	double totalShippingCost = 0.0;

	cout << fixed << setprecision(2);

	for (size_t i = 0; i < packages.size(); i++)
	{
		// 택배 정보 및 비용 출력
		cout << "Package" << i + 1 << "\nSender \n" << "name : " << packages[i]->getSenderName() << endl <<
			"address : " << packages[i]->getSenderAddress() << endl << "city : " << packages[i]->getSenderCity() << endl << "state : " << packages[i]->getSenderState() << endl << "zipCode : " << packages[i]->getSenderZIP();

		cout << "\n\nRecipient \n" << "name : " << packages[i]->getRecipientName() << endl << "address : " << packages[i]->getRecipientAddress() << endl << "city : " << packages[i]->getRecipientCity() << endl << "state : " << packages[i]->getRecipientState() << endl << "zipCode : " << packages[i]->getRecipientZIP();
		double cost = packages[i]->calculateCost();
		cout << "\n\nCost : $" << cost << endl << endl;
		totalShippingCost += cost;
	}
	cout << "Total Shipping Cost : $" << totalShippingCost << endl;

	packages.clear();
	for (size_t i = 0; i < packages.size(); i++)
		delete packages[i];
	return 0;
}