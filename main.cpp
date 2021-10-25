#include <iostream>
#include <string>
#include "Customer.h"

using namespace std;

int main(){
  Customer* testCustomer = new Customer(123456, 123456123456, "Logan", 9032001, 123, 2);

  cout << testCustomer->GetName() << " has " << testCustomer->GetNumMovies() << " movies out." << endl;
}
