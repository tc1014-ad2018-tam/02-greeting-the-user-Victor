/*
   This program will ask the user a integer value, depending on the hour, the program will greet him. 
   The value must be provided as an integer between 0 and 23. 
   The program should provide the following messages:
   
   "Good morning!" if the hour is greater than or equales to 3 but less than 12.
   "Good afternoon!" if the hour is greater than or equals to 12 but less than 19.
   "Good evening!" if the hour is greater than or equals to 19 but less than 22.
   "Good night!" if the hour is greater than or equals to 22 but less than or equals to 2.
   
   Also the program should send an error message if the user inputs an invalid value.
   
   Author: Victor Manuel Gastelum Huitzil
   Date: August 26th, 2018.
   e-mail: a01411985@itesm.mx
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	int hour; // The variable that will hold the hour that the user will give us
	
	system("COLOR 70"); //I change the color of the console
	
	//I ask the user for the time and save the value
	printf("Welcome, give me a integer value according to the hour you are in so i can greet you properly\n");
	scanf("%u", &hour);
	
	// If the input is valid, I greet them depending on the hour
    // of the day.
    
	if((hour>=3) && (hour<12)){
	printf("\n Good morning");
}

    else if((hour>=12) && (hour<19)){
	printf("\n Good afternoon");
}

	else if((hour>=19) && (hour<22)){
	printf("\n Good evening");
}
	
	else if((hour>=22) && (hour<=24)){
	printf("\n Good night");
}

	else if((hour>=0) && (hour<=2)){
	printf("\n Good night");
}
	// This will send a message if the user gives me an invalid input
	else {
	printf("Error 404 :(, that's not a valid hour");
}

 return 0;
}
