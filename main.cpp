#include <iostream>
using namespace std;

int main() {
  const int height = 61;
  const int weight = 130;

 //convert to kilograms

 double kg = weight * 0.453592;
 double meters = height * 0.0254;
//compute bmi
  double bmi = kg / (meters*meters);


cout << "The BMI for this person is : " << bmi << "."<< endl;


}
