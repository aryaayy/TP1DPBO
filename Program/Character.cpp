#include <bits/stdc++.h>
#include "Item.cpp"
#include "Mission.cpp"

using namespace std;

class Character{
    private:
        string name;
        char gender;
        vector<Item> items;
        vector<Mission> missions;

    public:
        Character(){
            name = "-";
            gender = '-';
        }

        Character(string name, char gender, vector<Item> items){
            this->name = name;
            this->gender = gender;
            this->items = items;
        }

        string getName(){
            return this->name;
        }

        void setName(string name){
            this->name = name;
        }

        char getGender(){
            return this->gender;
        }

        void setGender(char gender){
            this->gender = gender;
        }

        void talk(string sentence){
            cout << sentence;
        }

        void dropItem(string i){
            // if(){
            //     talk("Sorry, I don't have the item you're looking for");
            //     return;
            // }
            
            // i--;

        }

        void dropAllItems(){

        }

        ~Character(){
            
        }
};