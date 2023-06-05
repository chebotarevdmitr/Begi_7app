#include <iostream>

using namespace std;

int main() {
  //BMI calculator
  //weight(kg), / (height * height(m))	   
  // Underweight <  18.5 - низкая масса тела
  //Overweight > 25 - избыточная масса тела
  //Normal weight = 18.6 - 24.9 - нормальная масса тела
 float weight, height, bmi;	//объявлена пер вес и рост,bmi- индекс массы тела
    cout<<"Inhut weight(kg) height(m)"	;
    cin>> weight>> height;	
	bmi= weight/ (height * height);
	
	if(bmi< 18.5)
	    cout<<" Underweight " <<endl;//низкая масса тела
	else if (bmi>25)
     	cout<<" Overweight " <<endl;//избыточная масса тела
	else 
	    cout<<" Normal weight " <<endl;//нормальная масса тела
	cout<<"Your BMI = "<< bmi;
	    
	system("pause>0");
}