#include "Auto2.h"
#include <cstdlib>
#include <conio2.h>
#include <iostream>
using namespace std;


/*
// CONSTRUCTOR
*/

Auto2::Auto2(int vel, int x0, int y0){
	
	
	
	velocidad = vel;
	paso=CLOCKS_PER_SEC/velocidad; //fps
	tempo=clock(); //inicializamos tempo con el reloj
	cambio = true;
	colorAuto = 10;
	
	
	matriz[0][0]=0;  color[0][0] = 8;
	matriz[0][1]=219; color[0][1] = 15;
	matriz[0][2]=0; color[0][2] = 8;
	matriz[0][3]=219; color[0][3] = 15;
	matriz[1][0]=0;  color[1][0] = colorAuto;
	matriz[1][1]=61; color[1][1] = 8;
	matriz[1][2]=47; color[1][2] = colorAuto;
	matriz[1][3]=61; color[1][3] = 8;
	matriz[2][0]=30; color[2][0] = colorAuto;
	matriz[2][1]=61; color[2][1] = 8;
	matriz[2][2]=0;  color[2][2] = colorAuto;
	matriz[2][3]=61; color[2][3] = 8;
	matriz[3][0]=0;  color[3][0] = colorAuto;
	matriz[3][1]=61; color[3][1] = 8;
	matriz[3][2]=92; color[3][2] = colorAuto;
	matriz[3][3]=61; color[3][3] = 8;
	matriz[4][0]=0;  color[4][0] = 8;
	matriz[4][1]=219; color[4][1] = 15;
	matriz[4][2]=0; color[4][2] = 8;
	matriz[4][3]=219; color[4][3] = 15;
	
	
	ancho = 5;
	alto = 4;
	pasoX = 3;
	pasoY = 3;
	x = x0;
	y = y0;
	xnueva = x0;
	ynueva = y0;
	
	
	dibujar();
	
}

/// El metodo update lo tiene cada objeto pero es 
//// distinto en cada caso, por lo que se debe implementar 
/// en cada clase
void Auto2::Cambio(){
	
	if (cambio){
	matriz[4][0]=219;  color[4][0] = 15;
	matriz[4][1]=0; color[4][1] = 8;
	matriz[4][2]=219; color[4][2] = 15;
	matriz[4][3]=0; color[4][3] = 8;
	
	matriz[3][0]=61;  color[1][0] = 8;
	matriz[3][1]=47; color[1][1] = colorAuto;
	matriz[3][2]=61; color[1][2] = 8;
	matriz[3][3]=0; color[1][3] = 8;
	
	matriz[2][0]=61; color[2][0] = 8;
	matriz[2][1]=0; color[2][1] = colorAuto;
	matriz[2][2]=61;  color[2][2] = 8;
	matriz[2][3]=31; color[2][3] = colorAuto;
	
	matriz[1][0]=61;  color[3][0] = 8;
	matriz[1][1]=92; color[3][1] = colorAuto;
	matriz[1][2]=61; color[3][2] = 8;
	matriz[1][3]=0; color[3][3] = 8;
	
	matriz[0][0]=219;  color[0][0] = 15;
	matriz[0][1]=0; color[0][1] = 8;
	matriz[0][2]=219; color[0][2] = 15;
	matriz[0][3]=0; color[0][3] = 8;
	}
	else {
		matriz[0][0]=0;  color[0][0] = 8;
		matriz[0][1]=219; color[0][1] = 15;
		matriz[0][2]=0; color[0][2] = 8;
		matriz[0][3]=219; color[0][3] = 15;
		matriz[1][0]=0;  color[1][0] = colorAuto;
		matriz[1][1]=61; color[1][1] = 8;
		matriz[1][2]=47; color[1][2] = colorAuto;
		matriz[1][3]=61; color[1][3] = 8;
		matriz[2][0]=30; color[2][0] = colorAuto;
		matriz[2][1]=61; color[2][1] = 8;
		matriz[2][2]=0;  color[2][2] = colorAuto;
		matriz[2][3]=61; color[2][3] = 8;
		matriz[3][0]=0;  color[3][0] = colorAuto;
		matriz[3][1]=61; color[3][1] = 8;
		matriz[3][2]=92; color[3][2] = colorAuto;
		matriz[3][3]=61; color[3][3] = 8;
		matriz[4][0]=0;  color[4][0] = 8;
		matriz[4][1]=219; color[4][1] = 15;
		matriz[4][2]=0; color[4][2] = 8;
		matriz[4][3]=219; color[4][3] = 15;
		
	}
	
	cambio = !cambio;
	
}

void Auto2::update(){
	
	if(tempo+paso<clock()){
		dibujar();
		tempo=clock(); // tomamos el tiempo para saber la proxima vez que movemos la pelotita
	}
}
