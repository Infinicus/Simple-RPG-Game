#include "Player.h"

Player::Player(){
    
}

//Section for setting player stats
void Player::setName(std::string name){
    Player::name = name;
}
void Player::setRole(std::string role){
    Player::role = role;
}
void Player::setHealth(int health){
    Player::health = health;
}
void Player::setAttack(int attack){
    Player::attack = attack;
}
void Player::setDefense(int defense){
    Player::defense = defense;
}
void Player::setSpeed(int speed){
    Player::speed = speed;
}
void Player::setLevel(int level){
    Player::level = level;
}
void Player::setExp(int exp){
    Player::exp = exp;
}
void Player::setExpToLevel(int expToLevel){
    Player::expToLevel = expToLevel;
}
void Player::setMoney(int money){
    Player::money = money;
}
void Player::setGender(bool gender)
{
    Player::gender = gender;
}

//Section for getting player stats
void Player::promptName(){
    printf("What is your name?: ");
    std::cin >> Player::name;
}
void Player::promptGender(){
    printf("What is your gender? (0 for Male, 1 for Female): ");
    std::cin >> Player::gender;
}
void Player::promptRole(){
    printf("What is your Role? (Warrior/Assassin/Paladin): ");
    std::cin >> Player::role;
}

//Section for getting player stats
std::string Player::getName(){
    return Player::name;
}
std::string Player::getRole(){
    return Player::role;
}
int Player::getHealth(){
    return Player::health;
}
int Player::getAttack(){
    return Player::attack;
}
int Player::getDefense(){
    return Player::defense;
}
int Player::getSpeed(){
    return Player::speed;
}
int Player::getLevel(){
    return Player::level;
}
int Player::getExp(){
    return Player::exp;
}
int Player::getExpToLevel(){
    return Player::expToLevel;
}
int Player::getMoney(){
    return Player::money;
}
char Player::getGender(){
    if(Player::gender == 0){
        return 'M';
    }
    else{
        return 'F';
    }
}

//Stats Modifiers
void Player::levelUp(){
    Player::level++;
    Player::expToLevel += 100;
    Player::exp = 0;
}
void Player::addExp(int exp){
    Player::exp += exp;
}
void Player::addMoney(int money){
    Player::money += money;
}
void Player::subtractMoney(int money){
    Player::money -= money;
}
void Player::subtractHealth(int health){
    Player::health -= health;
}
void Player::subtractAttack(int attack){
    Player::attack -= attack;
}
void Player::subtractDefense(int defense){
    Player::defense -= defense;
}
void Player::subtractSpeed(int speed){
    Player::speed -= speed;
}
void Player::subtractLevel(int level){
    Player::level -= level;
}
void Player::subtractExp(int exp){
    Player::exp -= exp;
}
void Player::subtractExpToLevel(int expToLevel){
    Player::expToLevel -= expToLevel;
}

