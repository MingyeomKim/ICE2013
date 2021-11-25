class Account {
private:
	int balance; // ���� �ܾ�
	string name;
public:
	Account(int my_balance, string my_name) {
		balance = my_balance;
		name = my_name;
	}
	//���� �ܾ׿� �ݾ��� �߰��ϴ� �Լ�
	void credit() {
		cout << "Enter amount to add for " << name << ": ";
		int amt; cin >> amt;
		balance += amt;
		cout << endl;
	}

	//���� �����ϴ� �Լ�
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

	// �ܾ��� ��ȯ�ϴ� �Լ�
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

	account2.debit(); //���� �޼��� ���

	account2.credit();

	account1.getBalance();
	account2.getBalance();

	return 0;
}
