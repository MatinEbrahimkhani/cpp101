// =========================================================
// Tamrin 301: Mohasebe-ye BMI (body-mass index)
// =========================================================
// Formula: BMI = vazn / (ghad * ghad)
//   Ghad be meter (mesle 1.75), vazn be kilogram (mesle 70).
// Categories:
//   <18.5 -> Kam-vazn | <25 -> Normal
//   <30 -> Ezafe-vazn | else -> Chagh
// Nokte: az double estefade kon (na int).
// Example: 70, 1.75 -> 22.86 -> Normal.
// =========================================================

#include <iostream>
#include <string>

double calcBMI(double weightKg, double heightM) {
    return weightKg / (heightM * heightM);
}

std::string bmiCategory(double bmi) {
    if (bmi < 18.5) return "Kam-vazn (underweight)";
    if (bmi < 25.0) return "Normal";
    if (bmi < 30.0) return "Ezafe-vazn (overweight)";
    return "Chagh (obese)";
}

int main() {
    double height, weight;
    std::cout << "Ghad be meter (mesle 1.75): ";
    std::cin >> height;
    std::cout << "Vazn be kilogram (mesle 70): ";
    std::cin >> weight;
    double bmi = calcBMI(weight, height);
    std::cout << "BMI = " << bmi << " -> " << bmiCategory(bmi) << std::endl;
    return 0;
}
