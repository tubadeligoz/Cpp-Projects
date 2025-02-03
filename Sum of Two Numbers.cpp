#include <iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace to avoid prefixing with 'std::'

int main()
{
int a,b,sum;// Declare variables to store two numbers and their sum

cout<<"Enter the first number"<<endl; // Prompt the user to enter the first number
cin>>a;// Read the first number from user input

cout<<"Enter the second number"<<endl;// Prompt the user to enter the second number
cin>>b;// Read the second number from user input

sum=0;// Initialize sum to 0
sum=a+b;// Calculate the sum of the two numbers

cout<<"The sum of numbers="<<sum<<endl;// Display the result
return 0;// Indicate that the program ended successfully
}