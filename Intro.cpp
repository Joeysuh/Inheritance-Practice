#include <iostream>
#include "person.h"
#include "player.h"
#include <string_view>
#include "player.cpp"
#include "person.cpp"
#include "nurse.cpp"
#include "nurse.h"
#include "engineer.cpp"
#include "engineer.h"
#include "civileng.cpp"
#include "civileng.h"
#include "child.h"
#include "child.cpp"
//#include "parent.h"
//#include "parent.cpp"




using namespace std;

// cpp feature that lets us build hierarchies of classes that depend on other classes.
// type: people, and they can be doctors, musicians. doctors are people and can inherit features from the person class
// OOP is building types on other types. Inheritance hierarchies can be set up to suit your needs while improving code reusability
// derived classes can use public members variables of the base class but not private. This also applies to friends of the derived class

int main(){



Child C1(21);

C1.print_var(); // since member variables are named the same, the derived class will eclipse the parent class
C1.show_values();



    return 0;
}
