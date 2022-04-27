
#ifndef RESERS_H_
#define RESERS_H_

class resers
{
public:
		int pnr;
	    int tno;
	    char tname[100];
	    char bp[10];
	    char dest[100];
	    char pname[10][100];
	    int age[20];
	    char clas[10];
	    int nosr;
	    int i;
	    int d,m,y;
	    int con;
	    float amc;
	void getresdet();
	void displayresdet();
};

#endif /* RESERS_H_ */
