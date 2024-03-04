#include <bits/stdc++.h>
#include "Character.cpp"

using namespace std;

class NPC : public Character{
    private:
        string item;
    
    public:
        NPC(){
            item = "";
        }

        NPC(string item){
            this->item = item;
        }

        string getItem(){
            return this->item;
        }

        void setItem(string item){
            this->item = item;
        }

        ~NPC(){

        }
};