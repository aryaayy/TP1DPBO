#include <bits/stdc++.h>
#include "Character.cpp"

using namespace std;

#define ll long long
#define pb push_back
#define sp ' '
#define nl '\n'
#define upper(a) transform(a.begin(), a.end(), a.begin(), ::toupper)

int main(){
    cout << "Welcome!\nPlease choose your character:" << nl;
    cout << "1. Nova\n2. Jane\n3. Sora\n4. Aloy" << nl;

    Item tempItem("Kuda", "Weapon", 100);
    vector<Item> temp;
    temp.pb(tempItem);
    Character nova("Nova", 'M', temp);
    Character jane("Jane", 'F', temp);
    Character sora("Sora", 'M', temp);
    Character aloy("Aloy", 'F', temp);

    string input;
    Character curChara;
    do{
        cin >> input;
        upper(input);
        if(input == "NOVA"){
            curChara = nova;
        }
        else if(input == "JANE"){
            curChara = jane;
        }
        else if(input == "SORA"){
            curChara = sora;
        }
        else if(input == "ALOY"){
            curChara = aloy;
        }
        else{
            cout << "The character you input doesn't exist" << nl;
        }

    }while(curChara.getName() == "-");

    cout << "Hello, " << curChara.getName() << nl;

    vector<vector<string>> command;
    command.pb({"HELLO", "ADRIAN", "to interact with Adrian"});
    command.pb({"HELLO", "LYRA", "to interact with Lyra"});
    do{
        int i = 1;
        for(auto itr = command.begin(); itr != command.end(); itr++){
            cout << i << ". Type ";
            for(auto word = itr->begin(); word != itr->end(); word++){
                cout << *word << sp;
            }
            cout << nl;
            i++;
        }

        getline(cin >> ws, input);
        upper(input);

        bool val = 0;
        int idx = 0;
        for(auto itr = command.begin(); itr != command.end(); itr++){
            istringstream s(input);
            string token;
            
            auto last = itr->end();
            last--;
            
            auto word = itr->begin();
            for(word = itr->begin(); word != last; word++){
                s >> token;
                if(token != *word){
                    break;
                }
            }

            if(word == last){
                val = 1;
                break;
            }

            idx++;
        }

        if(val && idx == 0){
            cout << "HELLO, " << curChara.getName()<< "! I'm Adrian. What can I help you?" << nl << "...list..." << nl;
        }
        // while(s >> token){
        //     if(token == HELLO)
        //     cout << token << nl;
        // }
    }while(input != "BYE");

    return 0;
}