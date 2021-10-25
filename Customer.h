#include <iostream>
#include <string>

using namespace std;

class Customer{
  private:
    int id;
    long long int creditCard;
    string name;
    int expirationDate;
    int key;
    int numMovies;

  public:
    Customer();
    Customer(int id, long long int cc, string n, int exp, int k, int nm);

    // Accessor
    int GetID();
    long long int GetCC();
    string GetName();
    int GetExpiration();
    int GetKey();
    int GetNumMovies();

    // Mutators
    void SetID(int i);
    void SetCC(long long int c);
    void SetName(string n);
    void SetExpiration(int e);
    void SetKey(int k);
    void SetNumMovies(int n);
};
