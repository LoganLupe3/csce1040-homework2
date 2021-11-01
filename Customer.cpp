#include <iostream>
#include <string>
#include "Customer.h"

using namespace std;

Customer::Customer(){
  id = 0;
  creditCard = 0;
  name = "";
  expirationDate = 0; // This needs to be split into 3 different integers: day, month, year
  key = 0;
  numMovies = 0;
}

Customer::Customer(int i, long long int c, string n, int exp, int k, int nm){
  id = i;
  creditCard = c;
  name = n;
  expirationDate = exp; // Refactor to day, month, year
  key = k;
  numMovies = nm;
}

// Delete GetExpiration()
// Add GetDay(), GetMonth(), GetYear()
int Customer::GetID(){ return id; }
long long int Customer::GetCC(){ return creditCard; }
string Customer::GetName(){ return name; }
int Customer::GetExpiration(){ return expirationDate; }
int Customer::GetKey(){ return key; }
int Customer::GetNumMovies(){ return numMovies; }

// Delete SetExpiration(int)
// Add SetDay(int), SetMonth(int), SetYear(int)
void Customer::SetID(int i){ id = i; }
void Customer::SetCC(long long int c){ creditCard = c; }
void Customer::SetName(string n){ name = n; }
void Customer::SetExpiration(int e){ expirationDate = e; }
void Customer::SetKey(int k){ key = k; }
void Customer::SetNumMovies(int n){ numMovies = n; }

