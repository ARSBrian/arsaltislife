/*
	File: fn_restrainAction.sqf
	Author: Bryan "Tonic" Boardwine
	Edit: Audacious

	Description:
	Retrains the target.
*/
private["_unit"];
_unit = cursorTarget;
if(isNull _unit) exitWith {}; //Not valid
if((_unit getVariable "restrained")) exitWith {};
//if(side _unit == west) exitWith {};
if(player == _unit) exitWith {};
if (side player == civilian) then {
	if(life_inv_zipties < 1) exitWith { hint "You have no zipties."; };
	life_inv_zipties = life_inv_zipties - 1;
	_unit setVariable["restrained",true,true];
	player say3D "zip_tie";
	hint "You have ziptied the citizen";
};
if(!isPlayer _unit) exitWith {};
//Broadcast!
player say3D "handcuffs";
_unit say3D "handcuffs";

_unit setVariable["restrained",true,true];
[[player], "life_fnc_restrain", _unit, false] spawn life_fnc_MP;
[[0,format["You have restrained %1!",_unit getVariable["realname", name _unit], player getVariable["realname",name player]]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;