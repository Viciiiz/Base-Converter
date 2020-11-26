#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// function to reverse a string
void reverse (char *input);
void reverse(char *input){
	char output[10000]="";
	for (int i = 0; i < strlen(input); i++){
		output[i] = input[strlen(input)-1-i];
	}
	printf("%s\n", output);
}




int main (int argc, char **argv){

	// take the input as a string (the input is a decimal)
	char *initialValue = argv[1];

	// convert it to an integer (still a decimal)
	int value = atoi(initialValue);



	// convert from decimal to binary
	int value1 = value;
	char binaryStr[10000];
	char currentBinary[10];
	while (value1!=0){
		sprintf(currentBinary, "%d", value1%2); //convert the current digit to a string
		strcat(binaryStr,currentBinary); // add that string digit to the binaryStr string
		value1 /= 2;
	}
	printf("Binary: ");
	reverse(binaryStr); // reverse the string to have the final result



	// convert from decimal to octal
	int value2 = value;
	char octalStr[10000];
	char currentOctal[10];
	while (value2!=0){
		sprintf(currentOctal, "%d", value2%8);
		strcat(octalStr,currentOctal);
		value2 /= 8;
	}
	printf("Octal: ");
	reverse(octalStr);



	// print the decimal version (the input)
	printf("Decimal: %s\n", initialValue);



	// convert from decimal to hex
	int value3 = value;
	char hexStr[10000];
	while(value3!=0){
		char digit[1000] = "";
		int current = value3%16;
		if (current == 10){ // check for each case from 10 to 15
			strcat(hexStr,"A"); // append hexStr with "A"
		} else if (current == 11){
			strcat(hexStr, "B");
		} else if (current == 12){
			strcat(hexStr, "C");
		} else if (current == 13){
			strcat(hexStr, "D");
		} else if (current == 14){
			strcat(hexStr, "E");
		} else if (current == 15){
			strcat(hexStr, "F");
		} else {		// if the remainder is less than 10, convert that remainder to a string and add it to the  string hexStr
			sprintf(digit, "%d", current);
			strcat(hexStr,digit);
		}
		value3/=16;
	}
	printf("Hexadecimal: 0x");
	reverse(hexStr);

	return 0;
}

