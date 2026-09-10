#include <stdio.h>

/* Prints the table Fahrenheit-Celsius
	for fahr = 0, 20, ..., 300; float version */
int main()
{
	int fahr;

	printf("\n================================================\n");
	printf("Tabla Fahrenheit-Celsius (Inverse For variation)");
	printf("\n================================================\n");

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
}
