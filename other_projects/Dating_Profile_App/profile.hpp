#include <iostream> 
#include <string>
#include <vector>
using namespace std; 

class Profile { 
private: 
    string name; 
    int age; 
    string city; 
    string country; 
    string pronouns; 
    vector<string> hobbies;

public: 
    Profile(); 
    Profile(string name, int age, string city, string country, string pronouns);

    string view_profile();
    void add_hobby(string new_hobby); 
};
