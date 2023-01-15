#include <iostream> 
#include <string>
#include <vector>
#include "profile.hpp" 
using namespace std; 

Profile::Profile() {
    name = "Default Name"; 
    age = 0;
    city = "Default City"; 
    country = "Default Country"; 
    pronouns = "they/them";
}

Profile::Profile(string name, int age, string city, string country, string pronouns) {
    this->name = name; 
    this->age = age;
    this->city = city; 
    this->country = country; 
    this->pronouns = pronouns;
}

string Profile::view_profile() { 
    string bio = "Name: " + name; 
    bio += "\nAge: " + to_string(age); 
    bio += "\nCity: " + city;
    bio += "\nCountry: " + country;
    bio += "\nPronouns: " + pronouns;

    string hobbys = "Hobbies: \n"; 
    for (int i = 0; i < hobbies.size(); i++) { 
        hobbys += " - " + hobbies[i] + "\n";
    }

    return bio + "\n" + hobbys;
}

void Profile::add_hobby(string new_hobby) { 
    hobbies.push_back(new_hobby);
}
