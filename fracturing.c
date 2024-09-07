#include <math.h>
#include <stdio.h>

#define PI 3.14159

// *******************************************
// double askForUserInput
// Purpose: Helper function that gets input from user
// Output: None
// Return: Returns user input
// *******************************************
double askForUserInput()
{
  double temp = 0; 
  
  // asking for user input
  scanf("%lf", &temp);
  return temp;
  
}

// *******************************************
// double fetchData
// Purpose: Helper function that calculates distance between 2 points 
// Output: Prints points 1 and 2
// Return: Returns distance
// *******************************************
double fetchData()
{
  // Getting all 4 user inputs to determine the point locations
  double varOneX = askForUserInput();
  double varTwoX = askForUserInput();
  double varOneY = askForUserInput();
  double varTwoY = askForUserInput();

  //outputting the first 2 lines specifying point locations
  printf("Point #1 entered: x1 = %.3lf; y1 = %.3lf\nPoint #2 entered: x2 = %.3lf; y2 = %.3lf\n", varOneX, varOneY, varTwoX, varTwoY);

  // distance formula to calculate distance between points, Order of Operations was slightly confusing to apply and I see why it was on the CS Placement exam. 
  double distance = sqrt(pow((varTwoX - varOneX),2) + pow((varTwoY - varOneY),2));
  return distance;
  
}

// *******************************************
// double calculateDistance
// Purpose: Prints distance by calling fetch data function
// Output: Prints distance
// Return: Returns distance
// *******************************************
double calculateDistance() 
{
  // initializing a new variable to store the calculated distance (this is in every function that uses the distance)
  double calculatedDistance = fetchData();
  // printing the 3rd line of output, specifying the distance between the two points (this is also in every function, but what its specifying is different)
  printf("The distance between the two points is %.3lf\n",calculatedDistance);

  return calculatedDistance;
}

double calculatePerimeter()
{
  double calculatedDistance = fetchData();
  // perimeter (circumference) of a circle is PI * Diameter, in this case the distance. 
  double perimeter = calculatedDistance * PI;
  printf("The perimeter of the city encompassed by your requewst is %.3lf\n",perimeter);

  return 3.0;
}

// *******************************************
// double calculateArea
// Purpose: Prints area by calling fetch data function then performing area calculation
// Output: Prints area
// Return: Returns difficulty
// *******************************************
double calculateArea()
{
  double calculatedDistance = fetchData();
  // calculating the area of a circle, Diameter divided by 2 to find the radius, raised to the second power, then multiplied by PI. 
  double area = (pow((calculatedDistance/2),2) * PI);
  printf("The area of the city encompassed by your request is %.3lf\n",area);

  return 3.0;
}

// *******************************************
// double calculateWidth
// Purpose: Prints width by calling fetch data function
// Output: Prints width
// Return: Returns difficulty
// *******************************************
double calculateWidth()
{
  double calculatedDistance = fetchData();
  // here the width of a circle is the same as its diameter, so nothing needs to be done to the value, and I'm reassigning it purely for continuity and conformity sake.
  double width = calculatedDistance;
  printf("The width of the city encompassed by your request is %.3lf\n",width);

  return 3.0;
}

// *******************************************
// double calculateHeight
// Purpose: Prints height by calling fetch data function
// Output: Prints height
// Return: Returns difficulty
// *******************************************
double calculateHeight()
{
  double calculatedDistance = fetchData();
  // again nothing needs to be modified.
  double height = calculatedDistance;
  printf("The height of the city encompassed by your request is %.3lf\n",height);

  return 3.0;
}

// *******************************************
// int main (int argc, chat **argv)
// Purpose: Calls all other functions
// Output: None
// Return: Returns 0
// *******************************************
int main(int argc, char **argv)
{
  
  calculateDistance();
  calculatePerimeter();
  calculateArea();
  calculateWidth();
  calculateHeight();

  return 0;
}
