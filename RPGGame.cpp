#include "Player.h"

using namespace std;

void menu()
{
    cout << "What do you want to do?" << endl;
}

void printBorder()
{
    cout << "========================================================" << endl;
}

int main()
{
    Player player;
    cout << "Welcome to DeezRPG!" << endl;
    printBorder();
    player.promptName();
    player.promptGender();

    printBorder();
    cout << "Your name is " << player.getName() << endl;

    return 0;
}