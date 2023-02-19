#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



char* Hexadecimal() {
	char hexChar[16] = {'0', '1', '2', '3', '4', '5',
	'6', '7', '8', '9', 'A', 'B',
	'C', 'D', 'E', 'F' };

	static char hexadecimal[8];

	for (int j = 0; j < 7; j++) {

		hexadecimal[j] = (char)hexChar[rand() % 16];

	}


	hexadecimal[6] = '\0';

	return hexadecimal;

}



int main(int argc, char* argv[]) {

	srand(time(NULL));



        FILE* colors = fopen("scheme-01.css", "w");
        fprintf(colors, ":root {\n--primary-color: #%s;\n--secondary-color-rgb: %d, %d, %d;\n\n--secondary-color: #%s;\n--secondary-color-rgb: %d, %d, %d;\n}", Hexadecimal(), (rand() % 255), (rand() % 255), (rand() % 255), Hexadecimal(), (rand() % 255), (rand() % 255), (rand() % 255));
        fclose(colors);

        FILE* colors1 = fopen("scheme-04.css", "w");
        fprintf(colors1, ":root {\n--primary-color: #%s;\n--secondary-color-rgb: %d, %d, %d;\n\n--secondary-color: #%s;\n--secondary-color-rgb: %d, %d, %d;\n}", Hexadecimal(), (rand() % 255), (rand() % 255), (rand() % 255), Hexadecimal(), (rand() % 255), (rand() % 255), (rand() % 255));
        fclose(colors1);



	return 0;
}