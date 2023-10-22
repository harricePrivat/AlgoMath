#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

double f(double x);
int main(){
	double epsilonne=0.0000000001;
	double a=0.000,b=0.0000;
	printf("Donnez l'intervalle [a,b]\n");
	printf("Donnez a:");scanf("%lf",&a);
	printf("Donnez b:");scanf("%lf",&b);
	if(f(a)*f(b)<0){
	while(fabs(a-b)>=epsilonne){
			if(f(a)*f((a+b)/2)<0){
				b=(a+b)/2;
			}
			else{
				a=(a+b)/2;
				}
	}
	printf("Voici a=%lf et voici b=%lf",a,b);
}else{
	
	printf("Aucune solution");}
	return 0;
}

double f(double x){
		double y=log(x)-3;
		
		return y;
	}

