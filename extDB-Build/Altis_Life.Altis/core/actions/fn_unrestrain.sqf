/*
	File: fn_unrestrain.sqf
*/
private["_unit"];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
//disableUserInput False;
if(isNull _unit OR !(_unit getVariable["restrained",FALSE])) exitWith {}; //Error check?

_unit setVariable["restrained",FALSE,TRUE];
_unit setVariable["Escorting",FALSE,TRUE];
_unit setVariable["transporting",FALSE,TRUE];
detach _unit;
//disableUserInput False;

[[0,format["%1 has been released by %2!",_unit getVariable["realname",name _unit], player getVariable["realname",name player]]],"life_fnc_broadcast",west,FALSE] call life_fnc_MP;