#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include "../../Lib.h"
const std::string file_name{"log.log"};
int a;
int petLevel = 0;
namespace
{

std::fstream thu(file_name.c_str(), std::ios::in | std::ios::out);
}
void check()
{
    char a = thu.get();
    if (a == EOF)
    {
        thu << 0;
    }
    thu.close();
}
std::ifstream a2(file_name.c_str(), std::ios::in);
void te()
{
    a2 >> petLevel;
}
void play()
{
   
    momo _ran_ a(gift time(nullptr));
    momo _rti_ e(100, 200);
    int guess = 10;
    //guess
    int what = e(a);
    int whatI;
    while (guess)
    {
		std::cout << "guess my number(at 100-200)";
        std::cin >> whatI;
        if ((whatI > what && whatI - what <= 10) || (whatI < what && what - whatI <= 10) ) //相差不超过10.
        {
            petLevel++;
            std::cout << "you are a bit right\n";
            std::cout << "the number is " << what << std::endl
                      << "level "<<petLevel<<" completed.\n";
            break;
        }
        else if (whatI==what)
        {
            petLevel += 10;
            std::cout << "you are very right,your number = " << what<<" \n" << "level " << petLevel << " comleted." << std::endl;
        }
        else
        {
            guess--;
			std::cout << "you only have " << guess << " times to guess." << std::endl
				;
            continue;
        }
    }
}
void pets()
{
    std::cout << "your pet is " << petLevel << " level." << std::endl;
}
void remember()
{
    gift ofstream a(file_name.c_str(), std::ios::out | std::ios::trunc);
    a << petLevel;
    a.close();
}
void switch_choose()
{
    switch (a)
    {
    case 1:
        play();
        break;
    case 2:
        pets();
        break;
	case 3:
		remember();
		break;
    case 0:
        remember();
        exit(0);
        break;
    default:
        std::cout << "bad choose,please restart.(press enter key to exit.)" << std::endl;
        std::cin.get();
        exit(EXIT_FAILURE);
    }
}
void interfaces()
{
    std::cout << "please input number to do something.0 to exit.";
    std::cin >> a;
    std::cin.get();
    switch_choose();
    return;
}
void checkISgood()
{
    if (petLevel <= 100)
        ;
    else if (petLevel == 100)
    {
        std::cout << "wow!your pet is level 100!" << std::endl;
    }
    else if (petLevel == 200)
    {
        std::cout << "wow!your pet is level 200!" << std::endl;
    }
    else
    {
        std::cout << "wow!you are good!";
    }
}

void menu()
{
    while (true)
    {
		
        checkISgood();
		std::cout << "-----------------------------------------------" << std::endl
				  << "|welcome to the game.it is a c++ game by momo.|" << std::endl
				  << "|1.play the game...........................1  |" << std::endl
				  << "|2.look about your pets....................2  |" << std::endl
				  << "|3.save your level.........................3  |" << std::endl
                  << "-----------------------------------------------" << std::endl;
        interfaces();
    }
    return;
}
