#include <iostream>
#include <string>
#include "Customer.h"
#include "Movie.h"
#include "Loan.h"

using namespace std;

int main(){
  Customer* testCustomer = new Customer(123456, 123456123456, "Logan", 9032001, 123, 2);

  cout << testCustomer->GetName() << " has " << testCustomer->GetNumMovies() << " movies out." << endl;

  Loan* testLoan = new Loan(12345678, 123, 123, 1231, 2341, Out);

  cout << "Loan ID: " << testLoan->GetID() << endl;
}
