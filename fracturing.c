#include <math.h>
#include <stdio.h>

#define PI 3.14159

double askForUserInput()
{
  double temp = 0; 
  
  // asking for user input
  scanf("%lf", &temp);
  return temp;
  
}

// seperate function I made in to acquire the distance without necessarily printing it everytime, (i noticed that when I just re-used the caclulateDistance function it would output the distance calculated everytime, even when it wasn't required.
// this way also requires less keystrokes so less room for frustrating typos that leave me confused. 
double fetchData()
{
  // Getting all 4 user inputs to determine the point locations
  double varOneX = askForUserInput();
  double varTwoX = askForUserInput();
  double varOneY = askForUserInput();
  double varTwoY = askForUserInput();

  //outputting the first 2 lines specifying point locations
  printf("Point #1 entered: x1 = %lf; y1 = %lf \nPoint #2 entered: x2 = %lf; y2 = %lf\n", varOneX, varOneY, varTwoX, varTwoY);

  // distance formula to calculate distance between points, Order of Operations was slightly confusing to apply and I see why it was on the CS Placement exam. 
  double distance = sqrt(pow((varTwoX - varOneX),2) + pow((varTwoY - varOneY),2));
  return distance;
  
}

double calculateDistance() 
{
  // initializing a new variable to store the calculated distance (this is in every function that uses the distance)
  double calculatedDistance = fetchData();
  // printing the 3rd line of output, specifying the distance between the two points (this is also in every function, but what its specifying is different)
  printf("The distance between the two points is %.3lf",calculatedDistance);

  return 3.0;
}

double calculatePerimeter()
{
  double calculatedDistance = fetchData();
  // perimeter (circumference) of a circle is PI * Diameter, in this case the distance. 
  double perimeter = calculatedDistance * PI;
  printf("The perimeter of the city encompassed by your requewst is %.3lf",perimeter);

  return 3.0;
}

double calculateArea()
{
  double calculatedDistance = fetchData();
  // calculating the area of a circle, Diameter divided by 2 to find the radius, raised to the second power, then multiplied by PI. 
  double area = (pow((calculatedDistance/2),2) * PI);
  printf("The area of the city encompassed by your request is %.3lf",area);

  return 3.0;
}

double calculateWidth()
{
  double calculatedDistance = fetchData();
  // here the width of a circle is the same as its diameter, so nothing needs to be done to the value, and I'm reassigning it purely for continuity and conformity sake.
  double width = calculatedDistance;
  printf("The width of the city encompassed by your request is %.3lf",width);

  return 3.0;
}

double calculateHeight()
{
  double calculatedDistance = fetchData();
  // again nothing needs to be modified.
  double height = calculatedDistance;
  printf("The height of the city encompassed by your request is %.3lf",height);

  return 3.0;
}

int main(int argc, char **argv)
{
  
  calculateDistance();
  calculatePerimeter();
  calculateArea();
  calculateWidth();
  calculateHeight();

  return 0;
}
