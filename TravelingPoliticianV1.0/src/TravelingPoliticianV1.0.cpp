//============================================================================
// Name        : 0.cpp
// Author      : Nigel Mansell
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <cmath>
#include "Points.h"

using namespace std;

long double toRadians(const long double degree)
{
	long double one_deg = (M_PI) / 180;
	return (one_deg * degree);
}

long double distance(long double lat1, long double long1,
		long double lat2, long double long2)
{

	lat1 = toRadians(lat1);
	long1 = toRadians(long1);
	lat2 = toRadians(lat2);
	long2 = toRadians(long2);

	//Haversine Formula
	long double dlong = long2 - long1;
	long double dlat = lat2 - lat1;

	long double ans = pow(sin(dlat / 2), 2) +
			cos(lat1) * cos(lat2) *
			pow(sin(dlong / 2), 2);

	ans = 2 * asin(sqrt(ans));

	// Radius of Earth in
	// Kilometers, R = 6371
	// Use R = 3956 for miles
	long double R = 6371;

	// Calculate the result
	ans = ans * R;

	return ans * 0.62137;
}


void read(Points *point) {
	fstream fin;
	fin.open("src/pointsV1.0.csv", ios::in);
	string line;
	getline(fin, line);
	int count = 0;
	while(getline(fin,line)){
		stringstream word(line);
		string id;
		getline(word, id, ',');
		point[count].setName(id);
		getline(word, id, ',');
		point[count].setAbbriviation(id);
		getline(word, id, ',');
		point[count].setLatitude(::atof(id.c_str()));
		getline(word, id, ',');
		point[count].setLongitude(::atof(id.c_str()));
		getline(word, id, ',');
		point[count].setZip(::atoi(id.c_str()));
		count++;
	}
}

int main() {
	Points point[2];
	read(point);
	double val = distance(point[0].getLatitude(), point[0].getLongitude(),
			point[1].getLatitude(), point[1].getLongitude());
	cout << "The Distance between "<< point[0].getAbbriviation() << ":" <<
			point[1].getAbbriviation() << " is " << val << " miles" << endl;
	return 0;
}
