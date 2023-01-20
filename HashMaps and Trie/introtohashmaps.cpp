#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<string,int> m;

    //Insertion Type 1 to insert
    pair<string,int> p = make_pair("babbar", 3);
    m.insert(p);

    //Type 2 to insert
    pair<string,int> pair2("mera" , 2);
    m.insert(pair2);

    //Type 3 to insert
    m["kya"] = 2;
    
    //What will happen if we
    m["kya"] = 3;

    //Remeber that when we first insert new value in create a spot for it and when we insert se value pair its start updating

    cout << m["mera"] << endl;
    cout << m.at("babbar") << endl;
    cout << m["Unknown"] << endl;

    //Size
    cout << m.size() << endl;
    //Count throw 0 if not present
    
    cout << m.count("hello") << endl;
    
    //Throw 1 if present

    cout << m.count("mera") << endl;

    //Erase
    cout << m.erase("babbar") <<endl;

    cout << "Now the size is : " << m.size() << endl;

    //Iterator
    unordered_map<string,int> :: iterator it = m.begin();
    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;


}