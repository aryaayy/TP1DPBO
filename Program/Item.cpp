#include <bits/stdc++.h>

using namespace std;

class Item{
    private:
        string name;
        string type;
        int price;

    public:
        Item(){
            this->name = "";
            this->type = "";
            this->price = 0;
        }

        Item(string name, string type, int price){
            this->name = name;
            this->type = type;
            this->price = price;
        }

        string getItemName(){
            return this->name;
        }

        void setItemName(string name){
            this->name = name;
        }

        string getItemType(){
            return this->type;
        }

        void setItemType(string type){
            this->type = type;
        }

        int getItemPrice(){
            return this->price;
        }

        void setItemPrice(int price){
            this->price = price;
        }

        ~Item(){

        }
};