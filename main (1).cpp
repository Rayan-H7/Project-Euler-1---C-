#include <iostream>
using namespace std;

int main(){
  int eulertotal = 0;
  int total = 0;
  for (int number = 0; number < 1000; number = number + 1){
    if (number % 5 == 0){
      eulertotal = eulertotal + number;
      total = eulertotal;
    } else if (number % 3 ==0){
      eulertotal = eulertotal + number;
      total = eulertotal;
    }else {
      total = eulertotal;
    }
  }
  cout << "The total is " << eulertotal << ".\n";
  return 0;
}
//End of Program