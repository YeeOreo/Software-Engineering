#include <iostream>
using namespace std;

string Conflict_example_1(string s)
{
    //還回字串值
    string rv = "give back " + s + "\n";
    return rv;
}

int main()
{   
    /*"Conflict_happening 1!!!"*/
    string str = "Let's go to test the GitHub Conflict Condition!"; //Hi Hi~ I've been changed like this.
    /*a new line*/
    cout << Conflict_example_1(s);
    return 0;
}

