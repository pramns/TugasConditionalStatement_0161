#include <iostream>
using namespace std;

void inputdata(float b,float t){
  cout << "Masukan Berat badan anda = ";
  cin >> b;
  cout << "Masukan Tinggi badan anda = ";
  cin >> t;
}

float hitungBMI (float a, float b){
  return a/(b*b);
}

string kondisiBMI(float bmi){
  if (bmi < 18.5){
    return "Berat Badan Kurang";
  }else if (bmi < 25){
    return "Berat Badan Normal";
  }else if (bmi < 30){
    return "Berat Badan Kelebihan";
  }else{
    return "Obesitas";
  }
}

int main(){
  float b,t,bmi;
  
  inputdata(b,t);
  bmi = hitungBMI(b,t);

  cout << "\nNilai BMI Anda: " << bmi << endl;
  cout << "Kondisi Berat Badan: " << kondisiBMI(bmi) << endl;
}
