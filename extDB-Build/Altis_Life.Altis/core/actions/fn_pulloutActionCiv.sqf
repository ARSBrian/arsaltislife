/*
	File: fn_pulloutActionCiv.sqf
	Author: Audacious
	
	Description:
	Pulls civilians out of a car if it's stopped and....
*/
private["_crew"];
_crew = crew cursorTarget;

{
	if((playerSide == west && _x getVariable "transporting") OR (playerSide == east && _x getVariable "transporting") OR (playerSide == civilian && _x getVariable "transporting") OR (playerSide == independent && _x getVariable "transporting")) then
	{
		_x setVariable ["transporting",false,true]; _x setVariable ["Escorting",false,true];
		[[_x],"life_fnc_pulloutVeh",_x,false] spawn life_fnc_MP;
	};
} foreach _crew;