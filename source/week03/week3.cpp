#include "../std_lib_facilities.h"

double convert(double num, string unit){
    if(unit == "cm"){
        return num / 100.0;
    }
    else if(unit == "m"){
        return num;
    }
    else if(unit == "in"){
        return num * 0.0254;
    }
    else if(unit == "ft"){
        return num * 0.3048;
    }
    else{
        error("invalid unit");
        return 0;
    } 
  
}

int main() {
    
/*   int first_number = 0;
     int second_number = 0;
     while (cin >> first_number >> second_number){
          cout << first_number << " " << second_number << endl;
          if(first_number == '|'){
               break;
          }
           if(first_number < second_number){
               cout << "The smaller value is: " << first_number << endl;
               cout << "The larger value is: " << second_number << endl;
     }
          else if(first_number == second_number){
               cout << "The numbers are equal" << endl;
          }
          else{
               cout << "The smaller value is: " << second_number << endl;
               cout << "The larger value is: " << first_number << endl;
     }
 } 
     
     double first_number = 0;
     double second_number = 0;  
     while (cin >> first_number >> second_number){
          if(first_number < second_number){
               cout << "The smaller value is: " << first_number << endl;
               cout << "The larger value is: " << second_number << endl;
          if((first_number - second_number) < 1.0/100){
               cout << "The numbers are almost equal" << endl;
          }
     }
          else if (first_number == second_number){
               cout << "The numbers are equal" << endl;
          }
          else{
               cout << "The smaller value is: " << second_number << endl;
               cout << "The larger value is: " << first_number << endl;
          if((second_number - first_number) < 1.0/100){
               cout << "The numbers are almost equal" << endl;
          }
     }
} */

double num = 0;
double smallest = 99999;
double largest = -99999;
double sum_of_val = 0;
double num_of_val = 0;
string unit;
vector<double> vectorS;

while(cin >> num >> unit){
     double meters = convert(num, unit);
     sum_of_val += meters;
     num_of_val++;
     vectorS.push_back(meters);
     if(meters > largest){
          largest = meters;
     }
     if(meters < smallest){
          smallest = meters;
     }
}
     sort(vectorS);

     cout << "The smallest so far: " << smallest << endl;
     cout << "The largest so far: " << largest << endl;
     cout << "The sum of values: " << sum_of_val << endl;
     cout << "The number of values: " << num_of_val << endl;
     cout << "Elements of the vector in increasing order: " << endl;
     for(double x : vectorS){
          cout << x << endl;
     }
     return 0;
}