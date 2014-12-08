/*
	File: fn_setupActions.sqf
	
	Description:
	Master addAction file handler for all client-based actions.
*/
switch (playerSide) do
{
	case civilian:
	{
		//Drop fishing net
		life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
		(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
		//robbery
		life_actions = life_actions + [player addAction["Rob Person",life_fnc_robAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && animationState cursorTarget in ["Incapacitated","amovpercmstpsnonwnondnon_amovpercmstpssurwnondnon"] && !(cursorTarget getVariable["robbed",FALSE]) ']];
		//Hinsetzen
	};
};

life_actions = life_actions + [player addAction["<t color='#0099FF'>Sitdown</t>",life_fnc_sitDown,cursorTarget,10,false,false,"",
' !isNull cursorTarget && (player distance cursorTarget) < 3 && (cursorTarget isKindOf "Land_CampingChair_V2_F" || cursorTarget isKindOf "Land_ChairWood_F")']];
//Aufstehen
life_actions = life_actions + [player addAction["<t color='#0099FF'>Stand Up</t>", life_fnc_sitDown,cursorTarget,10,false,false,"",
'life_sitting']];