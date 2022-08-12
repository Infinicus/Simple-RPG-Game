#include <iostream>
#include <string>
#ifndef PLAYER_H
#define PLAYER_H

class Player{
    //player stats
    private:
        std::string name = "Traveler";
        int health = 100;
        std::string role = "Warrior";
        int attack = 1;
        int defense = 1;
        int speed = 1;
        int level = 1;
        int exp = 0;
        int expToLevel = 100;
        int money = 0;
        bool gender = 0;

    public:
        Player();
        void setName(std::string);
        void setRole(std::string);
        void setHealth(int);
        void setAttack(int);
        void setDefense(int);
        void setSpeed(int);
        void setLevel(int);
        void setExp(int);
        void setExpToLevel(int);
        void setMoney(int);
        void setGender(bool);

        std::string getName();
        std::string getRole();
        int getHealth();
        int getAttack();
        int getDefense();
        int getSpeed();
        int getLevel();
        int getExp();
        int getExpToLevel();
        int getMoney();
        char getGender();

        void promptName();
        void promptGender();
        void promptRole();

        void levelUp();
        void addExp(int);
        void addMoney(int);
        void subtractMoney(int);
        void subtractHealth(int);
        void subtractAttack(int);
        void subtractDefense(int);
        void subtractSpeed(int);
        void subtractLevel(int);
        void subtractExp(int);
        void subtractExpToLevel(int);

        void printStats();
        void printEquipment();
        void printSkills();
};

#endif // PLAYER_H