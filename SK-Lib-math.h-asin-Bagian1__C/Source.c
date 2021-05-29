/* asin example */
#include <stdio.h>      /* printf */
#include <math.h>       /* asin */
#include <conio.h>		/* _getch() */

/*	Source by CPlusPlus
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/

#define PI 3.14159265

int main(){
	double param, result;
	param = 0.5;

	result = asin(param) * 180.0 / PI;
	printf("The arc sine of %f is %f degrees\n", param, result);

	_getch();
	return 0;
}