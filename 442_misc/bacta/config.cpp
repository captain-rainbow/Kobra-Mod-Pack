class CfgPatches
{
	class 442_bacta
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"442_bacta_tank",
			"442_bacta_tank_w"
		};
		author="kripto202";
	};
};
class CfgVehicles
{
	class house_f;
	class 442_bacta_tank: house_f
	{
		scope=2;
		scopecurator=2;
		author="kripto202";
		displayName="Bacta Tank";
		model="442_misc\bacta\bacta_tank.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		armor=5;
		epeImpulsedamagecoef=0.1;
		replaceDamaged = "442_bacta_tank_w";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0;
			verticalOffsetWorld=0;
			init="''";
		};
		hiddenselections[]=
		{
			"body1",
			"body2",
			"body3",
			"clear_glass",
			"blue_glass",
			"screens"
		};
		hiddenselectionstextures[]=
		{
			"442_misc\bacta\data\body1_co.paa",
			"442_misc\bacta\data\body2_co.paa",
			"442_misc\bacta\data\body3_co.paa",
			"442_misc\bacta\data\clear_glass_ca.paa",
			"442_misc\bacta\data\blue_glass_ca.paa",
			"442_misc\bacta\data\screens_co.paa",
		};
		class useractions
        {
            class heal_player
            {
                displayname = "Receive medical treatment";
                position = "action_pos";
                priority = 101;
                radius = 3;
                onlyforplayer = 0;
                condition = "alive this";
                statement = "[ace_player,ace_player] call ace_medical_fnc_treatmentAdvanced_fullHealLocal;";
            };
        };
		class DestructionEffects
		{
			class ruin
			{
				intensity = 1;
				interval = 1;
				lifeTime = 1;
				position = "";
				simulation = ruin;
				type = "442_misc\bacta\bacta_tank_w.p3d";
			};
			
		};
		class Hitpoints
		{
			class hitbody
			{
				armor = 5;
				convexComponent = "body_hit";
				depends = "total";
				explosionShielding = .5;
				material = 51;
				name = "body_hit";
				passthrough = 1;
				visual="zbytek";
				radius = 0.01;
				hitpoint = "body_hit";
			};
			class hitglass
			{
				armor = 5;
				convexComponent = "glass_hit";
				depends = "total";
				explosionShielding = .5;
				material = 51;
				name = "glass_hit";
				passthrough = 1;
				visual="zbytek";
				radius = 0.01;
				hitpoint = "glass_hit";
			};
		};
	};
	class ruins_f;
	class 442_bacta_tank_w: ruins_f
	{
		author = "kripto202";
		mapsize = 20;
		editorPreview = "";
		scope = 2;
		scopecurator = 2;
		icon="iconObject_1x2";
		displayname = "Bacta Tank (Destroyed)";
		model = "442_misc\bacta\bacta_tank_w.p3d";
		editorCategory = "kobra";
		editorSubcategory = "442_item";
	};
};