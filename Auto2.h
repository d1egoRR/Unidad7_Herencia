#ifndef AUTO2_H
#define AUTO2_H

#include "Auto.h"

class Auto2 : public Auto {
protected:
	bool cambio;
	int colorAuto;
	
public:
	Auto2(int v, int x0,int y0);
	Auto2(){};
	void Cambio();
	void update();	
};


#endif

