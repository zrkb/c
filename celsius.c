#include <stdio.h>

/* Prints the table Celsius-Fahrenheit
	for fahr = 0, 20, ..., 300; float version */
int main()
{
	float celsius, fahr;
	int lower, upper, step;

	lower = 0;			/* lower limit of the temperature table */
	upper = 100;		/* upper limit */
	step = 5;			/* size of the increment */

	printf("\n========================\n");
	printf("Tabla Celsius-Fahrenheit");
	printf("\n========================\n");

	celsius = lower;
	while (celsius <= upper) {
		fahr = (celsius / (5.0 / 9.0)) + 32.0;
		printf("%3.0f\t%6.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
