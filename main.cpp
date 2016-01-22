/*
 * -std+=c++11 or -std+=c++14
*/

#include <iostream>

#include "src/variant.h"

using namespace std;

#define var auto
#define function(arg...) [&](arg)

class SampleTest
{
public:

    void action(){
        cout << "sample Test action" << endl;
    }

    friend bool operator ==(const SampleTest& , const SampleTest& )
    {  return true; }

};

STATIC_REGISTER_COMPLEX_TYPE(SampleTest, "SampleTest")

int main()
{
    var foo = function(){
        return SampleTest();
    };
    Variant obj0 = foo();
    obj0.value<SampleTest>().action();
    obj0.reference<SampleTest>().action();

    var obj1 = foo();
    obj1.action();
}

