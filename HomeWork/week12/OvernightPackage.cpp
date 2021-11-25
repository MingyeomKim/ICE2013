#include "OvernightPackage.h"
#include <iostream>
#include <string>
using namespace std;

OvernightPackage::OvernightPackage(const string& sn, const string& sa, const string& sc, const string& ss, int sz, const string& rn, const string& ra, const string& rc, const string& rs, int rz, double w, double c, double of)
	:Package(sn, sa, sc, ss, sz, rn, ra, rc, rs, rz, w, c)
{
	setOverNightPackage(of);
}

void OvernightPackage::setOverNightPackage(double of)
{
	overnightFeePerOunce = (of > 0.0 )? of : 0.0;
}

double OvernightPackage::getOvernightFeePerOunce() const
{
	return overnightFeePerOunce;
}

double OvernightPackage::CalculateCost() const
{
	return getWeight() * (getCostPerOunce() + getOvernightFeePerOunce());
}