#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "ClsPlayer.h"

using namespace std;

class ClsScreen
{

  #define RED     "\033[31m"    
  #define YELLOW  "\033[33m"  
  #define GREEN   "\033[32m"
  #define RESET   "\033[0m"
  #define BLUE    "\033[34m" 


public :


	static void ShowGameHeader()
	{
		cout << GREEN << "\n\t  X O GAME  \n\n" << RESET << endl;
	}

	static void ShowFinalGameScreen(string Title)
	{
      


	   cout <<YELLOW << "\n\n Game Over The Winner Is \a : " ;
	   if(Title == "Computer")
	   cout << RED << Title  <<  "\n\n" << RESET << endl;
	   else if  (Title  == "Player")
	   cout << GREEN << Title << "\n\n" << RESET << endl;

	   system("pause > 0 "); 
	}


};

