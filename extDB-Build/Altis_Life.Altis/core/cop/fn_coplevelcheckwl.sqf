#include <macro.h>
/*
	File: fn_coplevelcheckwl.sqf
	Author: Brian Peter (ARS)
	Alpha Red Squad
	
	Description:
	Checks to see if the person using the wanted list is a cop or not.
*/
if(__GETC__(life_coplevel) < 1) exitWith {closeDialog 0;};