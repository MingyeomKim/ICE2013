class Account {
private:
	int balance; // 계좌 잔액
	string name;
public:
	Account(int my_balance, string my_name) {
		balance = my_balance;
		name = my_name;
	}
	//현재 잔액에 금액을 추가하는 함수
	void credit() {
		cout << "Enter amount to add for " << name << ": ";
		int amt; cin >> amt;
		balance += amt;
		cout << endl;
	}

	//돈을 인출하는 함수
	void debit()
	{
		cout << endl << "Enter withdrawal amount for " << name << " : ";
		int amt; cin >> amt;
		cout << endl;
		if (amt <= balance)
		{
			cout << "attempting to subtract " << amt << " from " << name << " balance " << endl << endl;
			balance -= amt;
		}
		else {
			cout << "attempting to subtract " << amt << " from " << name << " balance" << endl << endl;
			cout << "Debit amount exceeded account balance" << endl << endl;
		}
	}

	// 잔액을 반환하는 함수
	void getBalance() {
		cout << name << " balance: $" << balance << endl;
	}
};


int main()
{
	Account account1(50, "account1");
	Account account2(25, "account2");

	account1.getBalance();
	account2.getBalance();

	account1.debit();

	account1.getBalance();
	account2.getBalance();

	account2.debit(); //오류 메세지 출력

	account2.credit();

	account1.getBalance();
	account2.getBalance();

	return 0;
}
