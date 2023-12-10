#ifndef NURSE_H
#define NURSE_H

#include "person.h"

//Nurse will do protected inheritance
class Nurse : protected Person
{
	friend std::ostream& operator<<(std::ostream& , const Nurse& operand);
public:
	Nurse();
	~Nurse();
	
    void some_func(){
        m_full_name = "John Snow";
        m_age = 23;
        
    }
 
    
private : 
    int practice_certificate_id{0};
};

#endif // NURSE_H       