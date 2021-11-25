#pragma once
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "Package.h"

class TwoDayPackage : public Package
{
private:
	double flatFee; // two-day-delivery service에 대한 추가 요금
public:
	TwoDayPackage(const string& sn, const string& sa, const string& sc, const string& ss, int sz, const string& rn, const string& ra, const string& rc, const string& rs, int rz, double w, double c, double f);
	double getFlatFee() const;
	void setFlatFee(double f);
	virtual double calculateCost() const;
};

#endif
