#include "player_sys.sqf"

class playerSettings {

	idd = playersys_DIALOG;
	movingEnable = true;
	enableSimulation = true;

	class controlsBackground
	{
		class brian_bg: brian_RscPicture
		{
			idc = 1200;
			text = "textures\brian_menu\bgtest1.jpg";
			x = 0.299366 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.159478 * safezoneW;
			h = 0.484 * safezoneH;
		};
		class brian_virt_background: Life_RscText
		{
			idc = 1001;
			x = 0.4125;
			y = 0.08;
			w = 0.8125;
			h = 0.52;
			colorBackground[] = {0,0,0,0.4};
		};
		class moneyStatusInfo: Life_RscStructuredText
		{
			idc = 2015;
			x = 0.425;
			y = 0.14;
			w = 0.3;
			h = 0.6;
		};
		class PlayersName: Life_RscText
		{
			idc = carry_weight;
			x = 1.0125;
			y = 0.04;
			w = 0.209;
			h = 0.04;
		};
	};
	class controls
	{
		///////////////TITLES///////////////
		class brian_virt_title: Life_RscText
		{
			idc = 1000;
			text = "Your Virtual Inventory"; //--- ToDo: Localize;
			x = 0.4125;
			y = 0.04;
			w = 0.8125;
			h = 0.04;
			colorBackground[] = {0.173,0.278,0.384,0.7};
		};
		class brian_virt_moneytitle: Life_RscText
		{
			idc = 1002;
			text = "Your Money"; //--- ToDo: Localize;
			x = 0.425;
			y = 0.1;
			w = 0.209;
			h = 0.04;
			colorBackground[] = {0.173,0.278,0.384,0.5};
		};
		class brian_virt_licensetitle: Life_RscText
		{
			idc = 1003;
			text = "Your Current License"; //--- ToDo: Localize;
			x = 0.65;
			y = 0.1;
			w = 0.275;
			h = 0.04;
			colorBackground[] = {0.173,0.278,0.384,0.5};
		};
		class brian_virt_itemtitle: Life_RscText
		{
			idc = 1004;
			text = "Your Current Items"; //--- ToDo: Localize;
			x = 0.9375;
			y = 0.1;
			w = 0.275;
			h = 0.04;
			colorBackground[] = {0.173,0.278,0.384,0.5};
		};
		///////////////END OF TITLES///////////////
		///////////////VIRTUAL EDIT ITEMS///////////////
		class itemEdit: Life_RscEdit
		{
			idc = item_edit;
			text = "1"; //--- ToDo: Localize;
			x = 0.9375;
			y = 0.44;
			w = 0.275;
			h = 0.04;
		};
		class moneyEdit: Life_RscEdit
		{
			idc = 2018;
			text = "1"; //--- ToDo: Localize;
			x = 0.425;
			y = 0.26;
			w = 0.209;
			h = 0.03;
		};
		///////////////END VIRTUAL EDIT ITEMS///////////////
		////////////////////NEAR PLAYERS////////////////////
		//money part
		class NearPlayers: Life_RscCombo
		{
			idc = 2022;
			x = 0.425;
			y = 0.29;
			w = 0.209;
			h = 0.04;
		};
		//item part
		class iNearPlayers: Life_RscCombo
		{
			idc = 2023;
			x = 0.9375;
			y = 0.48;
			w = 0.275;
			h = 0.04;
		};
		//////////////////END NEAR PLAYERS//////////////////
		///////////////ITEM LIST AND LICENSES///////////////
		class itemList: Life_RscListbox
		{
			idc = item_list;
			x = 0.9375;
			y = 0.14;
			w = 0.275;
			h = 0.3;
		};
		class Licenses_Menu: Life_RscControlsGroup
		{
			idc = 2300;
			x = 0.65;
			y = 0.14;
			w = 0.28;
			h = 0.38;
			class controls
			{
				class Life_Licenses : Life_RscStructuredText
				{
					idc = 2014;
					sizeEx = 0.020;
					text = "";
					x = 0;
					y = 0;
					w = 0.27; h = 0.65;
				};
			};
		};
		/////////////END ITEM LIST AND LICENSES/////////////
		//////////////////END NEAR PLAYERS//////////////////
		class moneyDrop: Life_RscButtonMenu
		{
			idc = 2001;
			text = "Give"; //--- ToDo: Localize;
			onButtonClick = "[] call life_fnc_giveMoney";
			x = 0.4625;
			y = 0.34;
			w = 0.13;
			h = 0.04;
			colorBackground[] = {0.173,0.278,0.384,0.5};
		};
		class UseButton: Life_RscButtonMenu
		{
			idc = 2402;
			text = "Use"; //--- ToDo: Localize;
			onButtonClick = "[] call life_fnc_useItem;";
			x = 0.9375;
			y = 0.54;
			w = 0.13125;
			h = 0.04;
			colorBackground[] = {0.173,0.278,0.384,0.5};
		};
		class RemoveButton: Life_RscButtonMenu
		{
			idc = 2403;
			text = "Remove"; //--- ToDo: Localize;
			onButtonClick = "[] call life_fnc_removeItem;";
			x = 0.795;
			y = 0.54;
			w = 0.13125;
			h = 0.04;
			colorBackground[] = {0.173,0.278,0.384,0.5};
		};
		class DropButton: Life_RscButtonMenu
		{
			idc = 2002;
			text = "Drop"; //--- ToDo: Localize;
			onButtonClick = "[] call life_fnc_giveItem;";
			x = 1.08;
			y = 0.54;
			w = 0.13125;
			h = 0.04;
			colorBackground[] = {0.173,0.278,0.384,0.5};
		};
		//////////////////END NEAR PLAYERS//////////////////
		/////////////ALPHA RED SQUAD MENU BELOW/////////////
		class brian_messages: brian_RscPicture
		{
			idc = 1201;
			text = "textures\brian_menu\buttons\messagesbutton.jpg";
			x = 0.309655 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class brian_keychain: brian_RscPicture
		{
			idc = 1202;
			text = "textures\brian_menu\buttons\keychainbutton.jpg";
			x = 0.345666 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class brian_gangs: brian_RscPicture
		{
			idc = 9520;
			text = "textures\brian_menu\buttons\gangsbutton.jpg";
			x = 0.381678 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class brian_settings: brian_RscPicture
		{
			idc = 1205;
			text = "textures\brian_menu\buttons\settingsbutton.jpg";
			x = 0.309655 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class brian_admin: brian_RscPicture
		{
			idc = 1207;
			text = "textures\brian_menu\buttons\adminbutton.jpg";
			x = 0.309655 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class brian_exit: brian_RscPicture
		{
			idc = 1208;
			text = "textures\brian_menu\buttons\exitbutton.jpg";
			x = 0.309655 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class brian_customwantedlistadd: brian_RscPicture
		{
			idc = 9801;
			text = "textures\brian_menu\buttons\wantedlistbuttoncustom.jpg";
			x = 0.417689 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
		};
		///////////////////////////////////////////
		//Below are the button actions. (RscButton)
		///////////////////////////////////////////
		class brian_customwantedlistadd_button: brian_RscButton
		{
			idc = 9800;
			x = 0.417689 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
			action = "createDialog ""life_wantedadd2"";";
			toolTip = "Add a charge to a player!";
		};
		class brian_message_button: brian_RscButton
		{
			idc = 1600;
			x = 0.309655 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
			action = "createDialog ""Life_cell_phone"";";
			toolTip = "View/Send messages!";
		};
		class brian_keychain_button: brian_RscButton
		{
			idc = 1601;
			x = 0.345666 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
			action = "createDialog ""Life_key_management"";";
			toolTip = "The keys to all of your vehicles out of the garage.";
		};
		class brian_gangs_button: brian_RscButton
		{
			idc = 9519;
			x = 0.381678 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
			action = "if(isNil ""life_action_gangInUse"") then {if(isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
			toolTip = "Gang management.";
		};
		class brian_settings_button: brian_RscButton
		{
			idc = 1604;
			x = 0.309655 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
			action = "[] call life_fnc_settingsMenu;";
			toolTip = "Your settings menu.";
		};
		class brian_admin_button: brian_RscButton
		{
			idc = 1606;
			x = 0.309655 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
			action = "createDialog ""life_admin_menu"";";
			toolTip = "This accesses the Admin Menu!";
		};
		class brian_exit_button: brian_RscButton
		{
			idc = 1607;
			x = 0.309655 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
			action = "closeDialog 0;";
			toolTip = "Close phone.";
		};
		//Adding sync button image and button action.
        class brian_sync: brian_RscPicture
		{
			idc = 1206;
			text = "textures\brian_menu\buttons\syncbutton.jpg";
			x = 0.345666 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class brian_sync_button: brian_RscButton
		{
			idc = 1605;
			x = 0.345666 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
			action = "[] call SOCK_fnc_syncData;";
			toolTip = "Sync your data to the server.";
		};
		//End of sync button.
		//Adding market button and market button action.
		class brian_market: brian_RscPicture
		{
			idc = 1209;
			text = "textures\brian_menu\buttons\marketbutton.jpg";
			x = 0.381678 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class brian_market_button: brian_RscButton
		{
			idc = 1608;
			x = 0.381678 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
			action = "[] spawn life_fnc_openMarketView;";
			toolTip = "This will display the current market trends.";
		};
		///////////////////////////////////////////
		// Below are the buttons for crafting and the wanted list.
		///////////////////////////////////////////
        class brian_crafting: brian_RscPicture
		{
			idc = 1932;
			text = "textures\brian_menu\buttons\craftingbutton.jpg";
			x = 0.417689 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class brian_crafting_button: brian_RscButton
		{
			idc = 1933;
			x = 0.417689 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
			action = "createDialog ""Life_craft"";";
			toolTip = "Sync your data to the server.";
		};
		class brian_wantedlist: brian_RscPicture
		{
			idc = 9521;
			text = "textures\brian_menu\buttons\wantedlistbutton.jpg";
			x = 0.381678 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ButtonGangList: brian_RscButton
		{
			idc = 2012;
			x = 0.381678 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0308667 * safezoneW;
			h = 0.055 * safezoneH;
			action = "[] call life_fnc_wantedMenu;";
			toolTip = "Only cops can view wanted list.";
		};
	};
};