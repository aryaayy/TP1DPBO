#include <bits/stdc++.h>
#include "Character.cpp"
#include "Mission.cpp"

using namespace std;

class Hero : public Character{
    private:
        string weapon;
        int maxHp;
        int curHp;
        int atk;
        vector<Mission> missions;
    
    public:
        Hero(){

        }

        Hero(string weapon, int maxHp, int curHp, int atk){
            this->weapon = weapon;
            this->maxHp = maxHp;
            this->curHp = curHp;
            this->atk = atk;
        }

        string getWeapon(){
            return this->weapon;
        }

        void setWeapon(string weapon){
            this->weapon = weapon;
        }

        string getMaxHp(){
            return this->maxHp;
        }

        void setMaxHp(string maxHp){
            this->maxHp = maxHp;
        }

        string getCurHp(){
            return this->curHp;
        }

        void setCurHp(string curHp){
            this->curHp = curHp;
        }

        string getAtk(){
            return this->atk;
        }

        void setAtk(string atk){
            this->atk = atk;
        }

        vector<string> getMissions(){
            return this->missions;
        }

        void setMissions(vector<string> missions){
            this->missions = missions;
        }

        void addMission(string mission){
            this->missions.push_back(mission);
        }

        ~Hero(){
            
        }
};