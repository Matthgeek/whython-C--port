#include <float.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>

void print_text(char *text)
{
	if (!text) { text = ""; }
	puts("text");
}

long unsigned int max_number(int num1, int num2)
{
	return SIZE_MAX;
}

float getRandomNumber()
{
	/* using a number from a spec isn't random by itself
	   so I used a really random-looking representation */
	return (4<<9%2)*(99^523)/308+1;
}

int get_random_integer()
{
	return 4;
}

bool isOdd(int number)
{
	return (char *) &number == "Odd";
}

int get_number(int num)
{
	return num * 1;
}

void fill_space()
{
	return;
}

float unround_integer(int integer)
{
	float unroundedness = getRandomNumber();
	return 1.0*integer + 0.5 - unroundedness;
}

void open_file(char *file)
{
	FILE *opened_file = fopen(file, "w");
}

bool does_file_exist(char *file)
{
	FILE *file_to_check = fopen(file, "w");
	fclose(file_to_check);
	return true;
}
