#include "Package.h"

Package::Package(const string& sn, const string& sa, const string& sc, const string &ss, int sz, const string& rn, const string & ra, const string& rc, const string& rs, int rz , double w, double c)

{
	sender.name = sn, sender.address = sa, sender.city = sc,
	sender.state = ss, sender.zipcode = sz,
	recipient.name = rn, recipient.address = ra, recipient.city = rc, recipient.state = rs, recipient.zipcode = rz;
	setWeight(w);
	setCostPerOunce(c);
}


void Package::setSenderName(const string& n)
{
	sender.name = n;
} 

string Package::getSenderName() const
{
	return sender.name;
}

void Package::setSenderAddress(const string& add)
{
	sender.address = add;
}

string Package::getSenderAddress() const
{
	return sender.address;
}

void Package::setSenderCity(const string& ct)
{
	sender.city = ct;
} 

string Package::getSenderCity() const
{
	return sender.city;
}

void Package::setSenderState(const string& st)
{
	sender.state = st;
}

string Package::getSenderState() const
{
	return sender.state;
}

void Package::setSenderZIP(int zip)
{
	sender.zipcode = zip;
}

int Package::getSenderZIP() const
{
	return sender.zipcode;
}

void Package::setRecipientName(const string& n)
{
	recipient.name = n;
}

string Package::getRecipientName() const
{
	return recipient.name ;
}

void Package::setRecipientAddress(const string& add)
{
	recipient.name = add;
}

string Package::getRecipientAddress() const
{
	return recipient.address;
}

void Package::setRecipientCity(const string& ct)
{
	recipient.city = ct;
}

string Package::getRecipientCity() const
{
	return recipient.city;
}

void Package::setRecipientState(const string& st)
{
	recipient.state = st;
}

string Package::getRecipientState() const
{
	return recipient.state;
}

void Package::setRecipientZIP(int zip)
{
	recipient.zipcode = zip;
}

int Package::getRecipientZIP() const
{
	return recipient.zipcode;
}

void Package::setWeight(double w)
{
	weight = (w < 0.0) ? 0.0 : w;
}

double Package::getWeight() const
{
	return weight;
}

void Package::setCostPerOunce(double cost)
{
	costPerOunce = (cost < 0.0) ? 0.0 : cost;
}

double Package::getCostPerOunce() const
{
	return costPerOunce;
}

double Package::calculateCost() const
{
	return getWeight() * getCostPerOunce();
}