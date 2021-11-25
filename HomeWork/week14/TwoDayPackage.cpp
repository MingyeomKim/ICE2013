#include "TwoDayPackage.h"
#include <iostream>
using namespace std;
#include <string>

TwoDayPackage::TwoDayPackage(const string& sn, const string& sa, const string& sc, const string& ss, int sz, const string& rn, const string& ra, const string& rc, const string& rs, int rz, double w, double c, double f)
	: Package(sn, sa, sc, ss, sz, rn, ra, rc, rs, rz, w, c)
{
	setFlatFee(f);
}

double TwoDayPackage::getFlatFee() const
{
	return flatFee;
}

void TwoDayPackage::setFlatFee(double f)
{
	flatFee = (f > 0.0) ? f : 0.0;
}

double TwoDayPackage::calculateCost() const
{
	return Package::calculateCost() + getFlatFee();
} // package 클래스의 calculateCost 멤버 함수를 불러와 FlatFee와 더해 반환
