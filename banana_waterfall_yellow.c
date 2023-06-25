#include <stdio.h>

/* A southern-style restaurant that serves up comfort food and hospitality
 * that feels like home. */
 
//Defining constants 
#define MAX_LINE_LENGTH 80 
#define MAX_LINES 2000 
 
//Function Prototypes 
void print_line(int n); 
void print_lines(int m); 
void print_text(char* str); 
void print_menu(); 
 
int main() 
{ 
	//Declaring Local Variables 
	char str[MAX_LINE_LENGTH] = "Welcome to Ford's Dixie Kitchen!\n"; 
	 
	//Print 2000 lines 
	print_lines(MAX_LINES); 
	 
	//Print greeting  
	print_text(str); 
	 
	//Print menu 
	print_menu(); 
	 
	//Print 2000 lines 
	print_lines(MAX_LINES); 
	 
	return 0; 
} 
 
//Prints n lines 
void print_lines(int n) 
{ 
	for(int i = 0; i < n; i++) 
		printf("\n"); 
} 
 
//Prints a single line 
void print_line(int n) 
{ 
	for(int i = 0; i < n; i++) 
		printf("="); 
	printf("\n"); 
} 
 
//Prints a string 
void print_text(char* str) 
{ 
	//Get length of string 
	int str_length = 0; 
	while(str[str_length] != '\0') 
		str_length++; 
		 
	//Calculating number of preceding spaces 
	int spaces = (MAX_LINE_LENGTH - str_length) / 2; 
	 
	//Print preceding spaces 
	for(int i = 0; i < spaces; i++) 
		printf(" "); 
		 
	//Print string 
	printf("%s\n", str); 
} 
 
//Prints the menu 
void print_menu() 
{ 
	print_line(MAX_LINE_LENGTH); 
	 
	//Menu items 
	char* items[5] = { 
		"Fried chicken & waffles\n", 
		"Shrimp & Grits\n", 
		"Chicken & Dumplings\n", 
		"Fried Green Tomatoes\n", 
		"Pulled Pork Sandwich\n" 
	}; 
	 
	//Printing menu items 
	for(int i = 0; i < 5; i++) 
		print_text(items[i]); 
		 
	print_line(MAX_LINE_LENGTH); 
}