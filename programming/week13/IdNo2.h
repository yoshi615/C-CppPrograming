#ifndef ___Class_IdNo2
#define ___Class_IdNo2
class IdNo2 {
    static int counter;
    int id_no;
public:
    IdNo2() ;
    int id() const ;
    static int get_max_id() ;
};
#endif