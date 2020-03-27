/*
 * Points.cpp
 *
 *  Created on: Mar 25, 2020
 *      Author: tempshadow
 */

#include "Points.h"
using namespace std;

Points::Points() {
	name = "";
	abbriviation = "";
	latitude = 0.0;
	longitude = 0.0;
	zip = 0;
}

Points::~Points() {
	// TODO Auto-generated destructor stub
}

string Points::getName() {
	return name;
}

string Points::getAbbriviation() {
	return abbriviation;
}

double Points::getLatitude() {
	return latitude;
}

double Points::getLongitude() {
	return longitude;
}

int Points::getZip() {
	return zip;
}

void Points::setName(string n) {
	name = n;
}

void Points::setAbbriviation(string a) {
	abbriviation = a;
}

void Points::setLatitude(double lat) {
	latitude = lat;
}

void Points::setLongitude(double lon) {
	longitude = lon;
}

void Points::setZip(int z) {
	zip = z;
}

