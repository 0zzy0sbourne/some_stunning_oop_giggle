#include "Person.cpp"

int main() {
    Person* worst_person_in_otonom = new Person(); 
    Person* leader_of_otonom = new Person("Ozan", 21);
    Person* member_of_otonom = new Person("Kadir", 21); 
    leader_of_otonom->print_the_age();
    leader_of_otonom->print_the_name();  
    member_of_otonom->print_the_age(); 
    member_of_otonom->print_the_name(); 
    delete leader_of_otonom;
    delete member_of_otonom;
    delete worst_person_in_otonom;   
}