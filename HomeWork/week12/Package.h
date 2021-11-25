#pragma once
#ifndef PACKAGE_H
#define PACKAGE_H
#include <iostream>
using namespace std;
#include <string>

struct Sender {
	string name;
	string address;
	string city;
	string state;
	int zipcode;
}; // 발송자 구조체 

struct Recipient {
	string name;
	string address;
	string city;
	string state;
	int zipcode;
}; // 수신자 구조체 

class Package {
private:
	Sender sender;
	Recipient recipient;

	double weight; // 질량 단위 : 온스
	double costPerOunce; // 온스 당 가격

public:
	Package(const string&, const string&, const string&, const string& , int , const string& , const string& , const string& , const string&, int , double , double );
	double calculateCost() const;

	void setSenderName(const string&); 
	string getSenderName() const; 
	void setSenderAddress(const string&); 
	string getSenderAddress() const; 
	void setSenderCity(const string&);
	string getSenderCity() const; 
	void setSenderState(const string&); 
	string getSenderState() const;
	void setSenderZIP(int);
	int getSenderZIP() const; 
	void setRecipientName(const string&);
	string getRecipientName() const; 
	void setRecipientAddress(const string&); 
	string getRecipientAddress() const; 
	void setRecipientCity(const string&);
	string getRecipientCity() const;
	void setRecipientState(const string&);
	string getRecipientState() const; 
	void setRecipientZIP(int);
	int getRecipientZIP() const;
	void setWeight(double); 
	double getWeight() const; 
	void setCostPerOunce(double); 
	double getCostPerOunce() const;

};



#endif
