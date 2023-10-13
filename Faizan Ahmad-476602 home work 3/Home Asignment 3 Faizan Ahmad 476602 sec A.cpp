//-----------------------------------------------------------------------------------------------------------------------------------------------
//This code is written by Faizan Ahmad (476602) from smme section A, and covers all 6 home tasks from home assignment 3.


#include<iostream>
using namespace std;
int main ()
{
	//Task 1
	
	//The following code prints the population number for a selected province of Pakistan.
	int province;
	//this is the only variable used.
	//simple prompt asking for an input, the key is used to assign each province its own number which will allow switch funtion to be used.
	cout<<"TASK 1"<<endl;
	cout<<"Enter 1 for Punjab, 2 for Sindh, 3 for KPK and 4 for Balochistan."<<endl;
	cin>>province;
	//the integer is placed in the switch and now the conditions can be set for each province.
	switch (province)
	{
		case 1: //code to be executed if province = 1.
			cout<<"The population of Punjab is"<<endl<<"127,474,000"<<endl; //if integer falls under case 1 then a simple prompt will be printed.
			break;
		
		case 2: //code to be exicuted if province = 2.
			cout<<"The population of Sindh is"<<endl<<"54,858,515"<<endl; // if integer is 2 then this prompt will be displayed.
			break;
			
		case 3: //code to be executed if province = 3.
			cout<<"The population of KPK is"<<endl<<"40,850,000"<<endl; // idf integer is 3 then this will be displayed.
			break;
			
		case 4: //code to be exicuted if province = 4.
			cout<<"The population of Balochistan."<<endl<<"21,700,000"<<endl;
			break;
			
		default: //this code will display if the input value is not 1,2,3 or 4. 
			cout<<"Your input was invalid."<<endl<<"Try again"<<endl;
	}
	
	//Task 2
	
	//The following code checks whether an input is a vowel or consonant using switch cases.
	char letter, res; //for this code i used char since the input can only be character.
		cout<<"TASK 2"<<endl;
		cout<<"Enter your alphabet."<<endl; //simple prompt asking for an alphabet.
		cin>>letter;
	switch (letter)
	{	case 'a': // using '' i can define the alphabet that this code will detect and run.
			cout<<"Your alphabet is a vowel."<<endl;
			break;
		case 'e': // using '' i can define the alphabet that this code will detect and run.
			cout<<"Your alphabet is a vowel."<<endl;
			break;
		case 'i': // using '' i can define the alphabet that this code will detect and run.
			cout<<"Your alphabet is a vowel."<<endl;
			break;
		case 'o': // using '' i can define the alphabet that this code will detect and run.
			cout<<"Your alphabet is a vowel."<<endl;
			break;
		case 'u': // using '' i can define the alphabet that this code will detect and run.
			cout<<"Your alphabet is a vowel."<<endl;
			break;
		case 'A': // using '' i can define the alphabet that this code will detect and run.
			cout<<"Your alphabet is a vowel."<<endl;
			break;
		case 'E': // using '' i can define the alphabet that this code will detect and run.
			cout<<"Your alphabet is a vowel."<<endl;
			break;
		case 'I': // using '' i can define the alphabet that this code will detect and run.
			cout<<"Your alphabet is a vowel."<<endl;
			break;
		case 'O': // using '' i can define the alphabet that this code will detect and run.
			cout<<"Your alphabet is a vowel."<<endl;
			break;
		case 'U': // using '' i can define the alphabet that this code will detect and run.
			cout<<"Your alphabet is a vowel."<<endl;
			break;
		default: //this using default any other alphabet is a consonant.
			cout<<"Your alphabet is a consonant."<<endl; }
	
	//Task 3
	
	//The following code will check if a number is positive, negative or equal to 0 using switch.
	int x; // the integer used is x
	cout<<"TASK 3"<<endl;
	cout<<"Enter an integer value."<<endl; // simple prompt that asks for user input.
	cin>>x;
	// since you cant use expressions like case x > 0: within a switch statement i had to first use if statement to convert positive,
	// negative and zero into integers so that i could place the respective integers in their cases.
	// this question could have been so much more straight forword if we were told to only use if statement.
	if (x>0) {
		x = 1;
	}
	else if (x<0) {
		x = 2;
	}
	else {
		x = 3;
	}
	
	switch (x)
	{
		case 1:
			cout<<"The integer is positive"<<endl; // this code is displayed if x was greater then 0.
			break;
			
		case 2:
			cout<<"The integer is negative"<<endl; // this code is displayed if x was less then 0.
			break;
			
		case 3:
			cout<<"The integer is equal to 0"<<endl; // this code is displayed if x was equal to 0.
			break;
	}
	
	//Task 4
	
	//The following code is used to find out if a person is a child, teenager or an adult.
	
	int age; //This code uses only 1 variable, age.
	cout<<"TASK 4"<<endl;
	cout<<"Enter your age"<<endl; //simple code that asks for the users age.
	cin>>age;
	
	if (age < 13) { //condition 1 age is less the 13 aka the a age of a child.
		cout<<"Acording to your input you are a child"<<endl;
	}
	else if (age >=13) // the start of a nested if-else statmentx.
	{
		if (age < 18) {cout<<"Acording to your input you are a teenager"<<endl; // condtion 2 age is less then 18 which is the age of a teenager.
		}
		else if (age < 20 && age > 17) {cout<<"Acording to your input you are an adult teenager"<<endl; // conditon for an adult teen.
		}
		else if (age > 19) {cout<<"Acording to your input you are an adult"<<endl; // conditon for an adult.
		}
	}
	
	//Task 5
	
	//The following code uses nested if-else statments to decide the largest number amoung 3 input numbers.
	
	//Used float so that my code is compatible with decimal inputs.
	float X, Y, Z;
	//This code is a simple prompt that asks for 3 individual numbers.
	cout<<"TASK 5"<<endl;
	cout<<"Enter 3 numbers"<<endl;
	cin>>X>>Y>>Z;
	
	//The first if statment sees if x is greater then y if it is then it checks if x is also greater then z thus becomeing the largest number
	//if it is greater then y but less then z then z automaticly becomes the largest
	//if first condition fails then safe to essume that y is greater then x so then the code checks if y is also greater then z if so
	//then y is the largest, if not then z is the largest.
	if ( X > Y ) {
		if ( X > Z ) {
			cout<<"The largest number amoung your inputs is "<<X<<endl; // X is the largest if this path of ifs is followed
		}
		else {cout<<"The largest number amoung your inputs is "<<Z<<endl; // z is the largest if this path of ifs is followed
		}
	}
	else {
		if ( Y > Z ) {
			cout<<"The largest number amoung your inputs is "<<Y<<endl; // y is the largest if this path of ifs is followed
		}
		else {
			cout<<"The largest number amoung your inputs is "<<Z<<endl; // z is the largest if this path of the code is followed
		} 
	}
	
	//Task 6
	
	// the following code checks if a entered alphabet is a vowel or a consonant using nested if-else.
	
	char alpha;
	// a simple code that asks for an input
	cout<<"TASK 6"<<endl;
	cout<<"Enter an alphabet"<<endl;
	cin>>alpha;
	
	if ( ( alpha >= 'a' && alpha <= 'z' ) || ( alpha >= 'A' && alpha <= 'Z' ) ) { // first if is used to check if the input is even an alphabet
		if ((alpha == 'a') || (alpha == 'e') || (alpha == 'i') || (alpha == 'o') || (alpha == 'u')) { //this code checks vowels in lowercase letters
			cout<<"This letter is a vowel"<<endl; //if a vowel is detected the out put is displayed
	}
		else if ((alpha == 'A') || (alpha == 'E') || (alpha == 'I') || (alpha == 'O') || (alpha == 'U')) { // code checks for uppercase vowels
		// the repeteation of code for lower and upper case vowels could have been avoided using tolower() funtion that would convert any input into its 
		// lower case form.
			cout<<"This letter is a vowel"<<endl; //if a vowel is detected the out put is displayed
	}
		else {
			cout<<"Your alphabet is a consonant"<<endl; //output if non of the above conditions are true
		}
	}
	else {
		cout<<"Invalid Input"<<endl; //output if the first condition failed

	}
	
	
	
	
	
	
return 0;
}
