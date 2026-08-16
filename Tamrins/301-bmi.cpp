

/*
  =========================================================
  Tamrin 301: Mohasebe-ye BMI
  =========================================================

  Salam! in tamrin baraye hamin ast ke ba function va condition
  mored estefade az C++ behtar yadet bere!

  Chizayi ke bayad bokoni:
  1) Az user ghad (height) va vazn (weight) ro begir.
  2) BMI ra ba formula payin mohasebe kon:
       BMI = weight / (height * height)
     - Ghad bayad be meter bashe.
     - Vazn bayad be kilogram bashe.
  3) Ba estefade az if/else, BMI ro be categories jadval kon:
       - kame az 18.5  -> "Low weight" / "Kam-vazn"
       - 18.5 ta 24.9  -> "Normal" / "Narmal"
       - 25 ta 29.9    -> "Overweight" / "Ezafe-vazn"
       - 30 va bishtar -> "Obesity" / "Chagh"
  4) Function ro benvis ke amount ro boro back.
  5) Dar main(), meghdar haye voroodi ra begir va natije ra chap kon.

  Nokat:
  - Chon ghad va vazn mishe adad ashari dashte bashand,
    bejaye int az double estefade kon.
  - Variable haei ke be function midahi bayad be tartib barabar
    ba signature function bashand.
  - Dar in code, baraye function BMI, vorudi ha bayad be in sorat bashe:
        BMI(weight, height)
    ya in ke function be in tartib vorudi migirad.

  example:
    weight = 70
    height = 1.75
    BMI = 70 / (1.75 * 1.75) = 22.86
    => "Normal"

  Yadet bashe: az TODO khali kon va code ra kamel kon!
  =========================================================
*/

#include <iostream>
using namespace std;
double BMI(int weight, int height){
  double  bmi = ((height * height) / weight);
  return bmi;

}

int main(){
    int height, weight;
    cout << "Enter your Height:";
    cin >> height;
    cout << "Enter your Weight:";
    cin >> weight;  
    double bmi = BMI(height, weight);
    cout << bmi;
    return 0;
}