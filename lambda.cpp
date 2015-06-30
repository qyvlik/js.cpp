/*
 * -std+=c++11 or -std+=c++13
*/
#include <iostream>
using namespace std;

#define var auto
#define function(arg...) [&](arg)

class SampleTest
{
public:
    void action(){
        cout <<"sample Test action"<<endl;
    }
};

int main()
{
    var foo = function(){
        return SampleTest();
    };
    var g = foo();
    g.action();
}

