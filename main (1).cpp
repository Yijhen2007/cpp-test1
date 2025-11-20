#include <iostream>
using namespace std;

// Function to calculate BMI
double calculateBMI(double weight_kg, double height_cm) {
    if (height_cm <= 0) return 0.0;  // Prevent division by zero or negative height

    double height_m = height_cm / 100.0;  // Convert height from cm to meters
    double bmi = weight_kg / (height_m * height_m);  // BMI calculation
    return bmi;
}

int main() {
    double weight1, weight2, height1, height2;

    // Assigning sample data
    weight1 = 80;
    weight2 = 70;
    height1 = 168;
    height2 = 188;

    // Calculating and printing BMI for two individuals
    cout << "Your BMI is: " << calculateBMI(weight1, height1) << endl;
    cout << "Another BMI is: " << calculateBMI(weight2, height2) << endl;

    return 0;
}
