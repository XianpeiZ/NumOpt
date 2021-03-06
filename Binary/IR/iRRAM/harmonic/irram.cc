#include <string>
#include <iostream>
#include "iRRAM.h"
#include <cfenv>
#include <sys/time.h>
#include "../../../../Source/backend/points.h"

// Herbie case: float_extension
iRRAM::REAL evaluate(int n) {
    int i=1;
    iRRAM::REAL initval = 0;
    for(i=1;i<n;++i){
        initval += (iRRAM::REAL(1)/iRRAM::REAL(i*i));
    }
    return initval;
}

void compute() {
	std::fesetround(FE_DOWNWARD);
	std::cout << std::scientific << std::setprecision(std::numeric_limits<double>::digits10);
	iRRAM::cout << iRRAM::setRwidth(30);
	std::string n_str;
	iRRAM::cin >> n_str;
	int n_int = binary2int(n_str);
    struct timeval tstart, tfinish;
    if(gettimeofday(&tstart,NULL)!=0){
        printf("Get time error!\n");
        return;
    }
	iRRAM::REAL r_irram = evaluate(n_int);
    if(gettimeofday(&tfinish,NULL)!=0){
        printf("Get time error!\n");
        return;
    }
    double usec=(tfinish.tv_sec-tstart.tv_sec)*1000000+tfinish.tv_usec-tstart.tv_usec;
	double r_double = r_irram.as_double();
	iRRAM::cout << usec << "\n";
	iRRAM::cout << double2binary(r_double) << "\n";
}
