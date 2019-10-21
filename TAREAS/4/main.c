#include <stdio.h>
#include <stdlib.h>
int main (int argc, char*argv[]){
	double x=0;
	for(int i=1; i<argc; i++){
		double y=atof(argv[i]);
		x=y+x;
	}
	double promedio=x/(argc-1);
	printf("%.2lf\n", promedio);

	return 0;
}
