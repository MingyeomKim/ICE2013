#pragma once
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "Package.h"

class OvernightPackage : public Package
{
private:
	double overnightFeePerOunce; //over-night-delivery Service에 따른 per ounce 추가 요금
public:
	OvernightPackage(const string&, const string&, const string&, const string&, int , const string&, const string&, const string&, const string&, int, double, double, double);
	void setOverNightPackage(double);
	double getOvernightFeePerOunce() const;
	double CalculateCost() const;

};

#endif
