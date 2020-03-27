/*
 * Points.h
 *
 *  Created on: Mar 25, 2020
 *      Author: tempshadow
 */

#ifndef POINTS_H_
#define POINTS_H_

#include <string>
using namespace std;

class Points {
private:
string name;
string abbriviation;
double latitude;
double longitude;
int zip;

public:
	Points();
	virtual ~Points();
	void setName(string n);
	void setAbbriviation(string a);
	void setLatitude(double lat);
	void setLongitude(double lon);
	void setZip(int z);
	string getName();
	string getAbbriviation();
	double getLatitude();
	double getLongitude();
	int getZip();
};

#endif /* POINTS_H_ */
