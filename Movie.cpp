#include <iostream>
#include <string>
#include "Movie.h"

using namespace std;

Movie::Movie(){
  id = 0;
  title = "";
  releaseDate = 0; // Split into day, month, year
  rating = "";
  duration = 0;
  rentalCost = 0.0;
  replacementCost = 0.0;
}

Movie::Movie(int i, string t, int date, string r, int d, double rental, double replace){
  id = i;
  title = t;
  releaseDate = date;
  rating = r;
  duration = d;
  rentalCost = rental;
  replacementCost = replace;
}

// Modify GetReleaseDate() to format day, month, and year into mm/dd/yyyy
// Add GetDay(), GetMonth(), GetYear()
int Movie::GetID(){ return id; }
string Movie::GetTitle(){ return title; }
int Movie::GetReleaseDate(){ return releaseDate; }
string Movie::GetRating(){ return rating; }
int Movie::GetDuration(){ return duration; }
double Movie::GetRentalCost(){ return rentalCost; }
double Movie::GetReplacementCost(){ return replacementCost; }

void Movie::SetID(int i){ id = i; }
void Movie::SetTitle(string t){ title = t; }
void Movie::SetReleaseDate(int r){ releaseDate = r; }
void Movie::SetRating(string r){ rating = r; }
void Movie::SetDuration(int d){ duration = d; }
void Movie::SetRentalCost(double r){ rentalCost = r; }
void Movie::SetReplacementCost(double r){ replacementCost = r; }
