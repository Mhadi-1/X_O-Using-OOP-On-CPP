
#pragma once

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class ClsPlayer
{


private:

	 
     static char _SymbolType ;
	 static short _Opetion;

public: 


    static void SetPlayerSymbol(char Symbol)
	{
		_SymbolType = Symbol; 
	}
    static char PlayerSymbol()
	{
		 
		 return _SymbolType;
	}

	static void SetOpetion(short Opetion)
	{
		_Opetion = Opetion; 
	}
    static short Opetion()
	{
		return _Opetion; 
	}


	_declspec(property(get = PlayerSymbol, put = SetPlayerSymbol)) char Symbol;


	 
     void SymbolType()
	 {
		

		char Player_Chooice ; 

		do{
			
		   cin >> Player_Chooice; 
		   if (toupper(Player_Chooice) == 'X' || toupper(Player_Chooice) == 'O')
		   {
			   SetPlayerSymbol(toupper(Player_Chooice));
			   return; 
		   }
		   cout << setw(28) << "\n\n " << "Incorrect Symbol Try [X/O] : ";

		} while (toupper(Player_Chooice) != 'X' || toupper(Player_Chooice) != 'O');

		  SetPlayerSymbol(toupper(Player_Chooice));
		    
	 }
     void ReadOpetion( short From, short To)
	 {
		short Opetion;

		
		cin >> Opetion;
		while (Opetion < From || Opetion > To)
		{
			cout << " Invalied Number Range !! \n";
			cout << setw(28) << "\n\n" << "Please Enter Your Chooice From [ " <<From<<"to"<<To<<"]";
			cin >> Opetion;
		}

		SetOpetion(Opetion);
	 }


};

