#include <iostream>
#include <string>

using namespace std;

class Movie{
  private:
    int id;
    string title;
    int releaseDate;
    string rating;
    int duration;
    double rentalCost;
    double replacementCost;

  public:
    Movie();
    Movie(int i, string t, int date, string r, int d, double rental, double replace);

    int GetID();
    string GetTitle();
    int GetReleaseDate();
    string GetRating();
    int GetDuration();
    double GetRentalCost();
    double GetReplacementCost();

    void SetID(int i);
    void SetTitle(string t);
    void SetReleaseDate(int r);
    void SetRating(string r);
    void SetDuration(int d);
    void SetRentalCost(double r);
    void SetReplacementCost(double r);
};
