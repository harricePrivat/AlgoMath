#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x){
		double y=log(x)-3;
		
		return y;
	}
int main(){
	double surface=0.00000;
	double epsilonne=0.0001;
	double a=0.000,b=0.0000;
	printf("Donnez l'intervalle [a,b]\n");
	printf("Donnez a:");scanf("%lf",&a);
	printf("Donnez b:");scanf("%lf",&b);
	while((a+epsilonne)<b){
		
		surface+=epsilonne*f(a);
		a+=epsilonne;
	}
	printf("La surface %lf",surface);
	return 0;
}
