/* Jeremy Persing                                  */
/* Lab 4                                           */
/* Figure the area of the top of a cylinder        */
/* and the volume of a cylinder                    */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define FILE_IN  "lab4.dat"
//#define FILE_IN  "lab4sample.dat"

int main(void)
{
    FILE * input_file;
    FILE * data_out;
    input_file = fopen(FILE_IN, "r");
    if (input_file == NULL) {
	    printf("Error on opening the input file \n");
        exit(EXIT_FAILURE);
	}
    data_out = fopen("lab4.out", "w");
    if (data_out == NULL) {
	    printf("Error on opening the output file \n");
        exit(EXIT_FAILURE);
    }
     
    fprintf(data_out, "\nJeremy Persing.  Lab 4.\n");
    int count = 1;
    double radius, height;
    while ((fscanf(input_file,"%lf%lf", &radius, &height)) == 2){
    double area = M_PI * radius * radius;
    double vol = area * height; 
	fprintf(data_out, "\nCylinder %1d", count);
	fprintf(data_out, "\nThe radius is:    %9.3f", radius);
	fprintf(data_out, "\nThe height is:    %9.3f", height);
	fprintf(data_out, "\nThe top area is:  %9.3f", area);
	fprintf(data_out, "\nThe volume is:    %9.3f\n", vol);
    fprintf(data_out, "\n");
	count++;
    }
    fclose(input_file);
    fclose(data_out);
}

