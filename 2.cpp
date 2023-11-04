#include <iostream>
using std::string;

class AbstractEmp {
    virtual void AskForPromotion() = 0;
};

class Employee {
    private:
    string Name;
    string Company;
    int Age;
    
    public:
    void setName(string name) {
        Name = name;
    }
    
    string getName() {
        return Name;
    }
    
    void setCompany(string company) {
        Company = company;
    }
    
    string getCompany() {
        return Company;
    }
    
    void setAge(int age) {
        if (age>18) {
            Age = age;
        }
        
    }
    
    int getAge() {
        return Age;
    }

    void IntroduceYourself() {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
    
    void AskForPromotion() {
        if (Age>30) {
            std::cout<<Name<< " got promoted! "<< std::endl;
        }
        else {
            std::cout<<Name<< ", sorry no promotion for you! "<< std::endl;
        }
    }
    
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main() {
    Employee emp1= Employee("Hafsa", "IT", 25);
    Employee emp2= Employee("Noorain", "Business", 35);
    emp1.AskForPromotion();
    emp2.AskForPromotion();
}