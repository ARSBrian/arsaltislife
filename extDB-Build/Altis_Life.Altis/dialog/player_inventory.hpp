#include "player_sys.sqf"

class bp_ars_playerinventory {

	idd = bp_ars_playerinventory;
	name = "bp_ars_playerinventory";
	movingEnable = true;
	enableSimulation = true;

	//Background
	class brian_bg_inventory: brian_RscPicture
	{
		idc = 1200;
		text = "textures\brian_menu\bgtestempty.jpg";
		x = 0.299366 * safezoneW + safezoneX;
		y = 0.247 * safezoneH + safezoneY;
		w = 0.159478 * safezoneW;
		h = 0.484 * safezoneH;
	};
	//Exit button
	class brian_exit_inventory: brian_RscPicture
	{
		idc = 1208;
		text = "textures\brian_menu\buttons\exitbutton.jpg";
		x = 0.309655 * safezoneW + safezoneX;
		y = 0.555 * safezoneH + safezoneY;
		w = 0.0308667 * safezoneW;
		h = 0.055 * safezoneH;
	};
	class brian_exit_button_inventory: brian_RscButton
	{
		idc = 1607;
		x = 0.309655 * safezoneW + safezoneX;
		y = 0.555 * safezoneH + safezoneY;
		w = 0.0308667 * safezoneW;
		h = 0.055 * safezoneH;
		action = "closeDialog 0;";
		toolTip = "Close phone.";
	};
	//License Title
	class licenseHeader_inventory: Life_RscText
	{
		idc = -1;
		colorBackground[] = {0.173,0.278,0.384,0.5};
		text = "Licenses";
		sizeEx = 0.04;
		x =  0.355955 * safezoneW + safezoneX;
		y = 0.458 * safezoneH + safezoneY;
		w = 0.275 * safezoneW;
		h = 0.04 * safezoneH;
	};
		
	//money
	class moneySHeader_inventory: Life_RscText
	{
		idc = -1;
		colorBackground[] = {0.173,0.278,0.384,0.5};
		text = "Money Stats";
		sizeEx = 0.04;
		x = 0.309655 * safezoneW + safezoneX;
		y = 0.291 * safezoneH + safezoneY;
		w = 0.0874557 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class moneyStatusInfo_inventory: Life_RscStructuredText
	{
		idc = 2015;
		sizeEx = 0.020;
		text = "";
		x = 0.355955 * safezoneW + safezoneX;
		y = 0.318 * safezoneH + safezoneY;
		w = 0.3 * safezoneW; 
		h = 0.6 * safezoneH;
	};
	class moneyEdit_inventory: Life_RscEdit
	{
		idc = 1400;
		text = "1";
		x = 0.355955 * safezoneW + safezoneX;
		y = 0.384 * safezoneH + safezoneY;
		w = 0.0874557 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class NearPlayers_inventory: Life_RscCombo //drop down to select player to give money too
	{
		idc = 1401;
		x = 0.355955 * safezoneW + safezoneX;
		y = 0.406 * safezoneH + safezoneY;
		w = 0.0874557 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class moneyDrop_inventory: Life_RscButtonMenu
	{
		idc = 2001;
		text = "$STR_Global_Give";
		colorBackground[] = {0.173,0.278,0.384,0.5};
		onButtonClick = "[] call life_fnc_giveMoney";
		sizeEx = 0.025;
		x = 0.355955 * safezoneW + safezoneX;
		y = 0.436 * safezoneH + safezoneY;
		w = 0.13 * safezoneW;
		h = 0.036 * safezoneH;
	};
	//Item List Box
	class itemList_inventory: life_RscListBox 
	{
		idc = item_list;
		sizeEx = 0.030;	
		x = 0.381678 * safezoneW + safezoneX;
		y = 0.291 * safezoneH + safezoneY;
		w = 0.275 * safezoneW;
		h = 0.3 * safezoneH;
	};
};