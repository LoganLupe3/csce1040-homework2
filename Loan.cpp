#include <iostream>
#include "Loan.h"

using namespace std;

Loan::Loan(){
  id = 0;
  movieID = 0;
  custID = 0;
  dueDate = 0; // Split into day, month, year
  dueTime = 0;
  status = Out;
}

Loan::Loan(int i, int m, int c, int d, int time, Status s){
  id = i;
  movieID = m;
  custID = c;
  dueDate = d;
  dueTime = time;
  status  = s;
}

// Modify GetDueDate() to combine and format day, month, and year into mm/dd/yyyy
// Add GetDay(), GetMonth(), GetYear()
int Loan::GetID(){ return id; }
int Loan::GetMovieID(){ return movieID; }
int Loan::GetCustID(){ return custID; }
int Loan::GetDueDate(){ return dueDate; }
int Loan::GetDueTime(){ return dueTime; }
Status Loan::GetStatus(){ return status; }

// Delete SetDueDate(int)
// Add SetDay(int), SetMonth(int), SetYear(int)
void Loan::SetID(int i){ id = i; }
void Loan::SetMovieID(int i){ movieID = i; }
void Loan::SetCustID(int i){ custID = i; }
void Loan::SetDueDate(int d){ dueDate = d; }
void Loan::SetDueTime(int d){ dueTime = d; }
void Loan::SetStatus(Status s){ status = s; }
