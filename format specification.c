#include<stdio.h>

int main(){
	char ch = 'y';  //only single quote for a character
	printf("%c", ch); //printing the variable ch
	
	int a = 4, b = 7; //defining a and b variable as integer
	printf("\n%d", a); //printing a
	printf("\n%d", b); //printing b
	
	float c = 12.56;  //declaring variable c as float
	printf("\n%f", c); //printing the variable c as float
	printf("\n%e", c); //printing the variable c in float as exponential power form
	
	int d = 13; //declaring d as integer and assigning value
	printf("\n%o", d); //prining octal number of variable d
	printf("\n%x", d); //printing hexadecimal number of variable d
	
	char str[] = "information era"; //declaring str as a string
	printf("\n%s", str);  //printing str
	printf("\n%20s", str); //reserving 20bits for the string
	printf("\n%-20s",str); 
	printf("\n%20.4s", str); //.4 denotes the number of letter in the str to be printed
	printf("\n%-20.4s", str);
	return 0;
}
