#include <macro.h>
/*
	File: fn_p_openMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Opens the players virtual inventory menu
*/
if(!alive player || dialog) exitWith {}; //Prevent them from opening this for exploits while dead.
createDialog "playerSettings";
disableSerialization;

switch(playerSide) do
{
	case west: 
	{
		ctrlShow[9519,false];
		ctrlShow[9520,false];
		ctrlShow[1932,false];
		ctrlShow[1933,false];
	};
	
	case civilian:
	{
		ctrlShow[2012,false];
		ctrlShow[9521,false];
		ctrlShow[9800,false];
		ctrlShow[9801,false];
	};
};

if(__GETC__(life_adminlevel) < 1) then
{
	ctrlShow[1207,false];
	ctrlShow[1606,false];
};

[] call life_fnc_p_updateMenu;

if(__GETC__(life_adminlevel) < 1) then
{
	ctrlShow[1207,false];
	ctrlShow[1606,false];
};