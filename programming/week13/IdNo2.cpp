#include "IdNo2.h"
int IdNo2::counter = 0;
IdNo2::IdNo2() {id_no = ++counter;}
int IdNo2::id() const {return id_no;}
int IdNo2::get_max_id() {return counter;}