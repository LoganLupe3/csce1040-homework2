#include <iostream>

using namespace std;

enum Status {Out, In, Overdue, Lost};

class Loan{
  private:
    int id;
    int movieID;
    int custID;
    int dueDate;
    int dueTime;
    Status status;

  public:
    Loan();
    Loan(int i, int m, int c, int d, int time, Status s);

    // Accessors
    int GetID();
    int GetMovieID();
    int GetCustID();
    int GetDueDate();
    int GetDueTime();
    Status GetStatus();

    // Mutators
    void SetID(int i);
    void SetMovieID(int i);
    void SetCustID(int i);
    void SetDueDate(int d);
    void SetDueTime(int d);
    void SetStatus(Status s);
};
