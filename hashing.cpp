#include <iostream>
#include <stdio.h>
#include <unordered_map>
#include <map>

using namespace std;

int main()
{
    // creation

    unordered_map<string, int> mp;

    // key-value pair storing ..for above ex. - stored in string,int form

    // insertion

    // 1
    pair<string, int> p = make_pair("gudu", 3);

    mp.insert(p);

    // 2
    pair<string, int> p2("enu", 3);
    mp.insert(p2);

    // updation of map key value pair

    mp["gudu"] = 1;
    mp["gudu"] = 3;

    for (auto u : mp)
    {
        cout << u.first << " " << u.second << endl;
    }

    unordered_map<string, int>::iterator it = mp.begin();

    while (it != mp.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}
