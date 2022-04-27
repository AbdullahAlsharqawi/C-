/*
 * conc.h
 *
 *  Created on: 27 Apr 2022
 *      Author: abdul
 */

#ifndef CONC_H_
#define CONC_H_

class conc
{
public:
	int pnr;
		int tno;
		char tname[100];
		char bp[10];
		char dest[100];
		char pname[10][100];
		int age[20];
		int i;
		char clas[10];
		int nosc;
		int d, m, y;
		float amr;
	void getcancdet();
	void displaycancdet();
};

#endif /* CONC_H_ */
