#include <stdio.h>

/* Prints the table Fahrenheit-Celsius
	for fahr = 0, 20, ..., 300; float version */
int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;			/* lower limit of the temperature table */
	upper = 300;		/* upper limit */
	step = 20;			/* size of the increment */

	printf("\n========================\n");
	printf("Tabla Fahrenheit-Celsius");
	printf("\n========================\n");

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
