#include <iostream>
#include <vector>
using namespace std;
void error(string s)
{
    throw runtime_error(s);
}
void error(string s1,string s2)
{
    throw runtime_error(s1+s2);
}
int main()
{
    try{
    error("dumb dumb","die die");
    }catch(exception& e)
    {
        cerr<<"runtime error: "<<e.what()<<endl;
        return -1;
    }
    return 0;
}
