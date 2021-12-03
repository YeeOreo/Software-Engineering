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
    cout << "Hello GitHub!" << endl;
    string s = "Let's go to test the GitHub Conflict Condition!";
    cout << Conflict_example_1(s);
    return 0;
}

