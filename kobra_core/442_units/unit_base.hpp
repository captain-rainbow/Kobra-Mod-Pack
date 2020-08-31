    class k_swla_unit_base: B_Soldier_02_f
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		model="442_units\clones\base_body.p3d";
		editorPreview="";
		//picture = "442_units\clones\data\ui\body.paa"; //this needs to be changed
		icon = "kobra_core\442_icons\data\icon_rifleman.paa";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		role="Rifleman";
		author = "KOBRA Mod Team";
		uniformclass="k_swla_uniform";
		faction="kobra";
		editorSubCategory="442_trooper";
		displayname="Trooper";
		movesFatigue="CfgMovesFatigueTrooper";
		backpack="";
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"undersuit",
			"insignia"
		};
		hiddenselectionsTextures[]=
		{
			"442_units\clones\data\uniform\uniform\camo1_co.paa",
			"442_units\clones\data\uniform\uniform\camo2_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
		};
		linkedItems[]={};
		RespawnlinkedItems[]={};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]={};
		respawnMagazines[]={};
		items[]={};
		respawnitems[]={};
		armor=5;
		armorStructural=8;
		explosionShielding=0.5;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
	class k_swla_unit_mc_base: k_swla_unit_base
	{
		model="442_units\clones\base_body_mc.p3d";
		uniformclass="k_swla_mc_uniform";
		//picture = "442_units\clones\data\ui\body_mc.paa"; //this needs to be changed
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"undersuit",
			"rank",
			"insignia"
		};
		hiddenselectionsTextures[]=
		{
			"442_units\clones\data\uniform\mc_uniform\camo1_co.paa",
			"442_units\clones\data\uniform\mc_uniform\camo2_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
			"442_units\clones\data\uniform\mc_uniform\rank_co.paa",
		};
	};

	class k_swla_unit_b1_base: k_swla_unit_base
	{
		side = 0;
		hiddenselections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[] = 
		{
			"442_units\cis_droids\data\b1_upper_co.paa",
			"442_units\cis_droids\data\b1_lower_co.paa"
		};
		uniformclass = "k_swla_b1_uniform";
		model = "442_units\cis_droids\swlb_b1_uniform.p3d";
		faction="442_CIS";
		editorSubCategory="442_battledroid_inf";
	};
	class k_swla_unit_b1_geonosis_base: k_swla_unit_b1_base
	{
		hiddenselectionstextures[] = 
		{
			"442_units\cis_droids\data\b1_upper_geonosis_co.paa",
			"442_units\cis_droids\data\b1_lower_geonosis_co.paa"
		};
		uniformclass = "k_swla_b1_geonosis_uniform";
		editorsubcategory = "442_battledroid_inf_geonosis";
	};
	class k_swla_unit_b1_security_base: k_swla_unit_b1_base
	{
		hiddenselectionstextures[] = 
		{
			"442_units\cis_droids\data\b1_upper_security_co.paa",
			"442_units\cis_droids\data\b1_lower_co.paa"
		};
		uniformclass = "k_swla_b1_security_uniform";
	};
	class k_swla_unit_b1_cmd_base: k_swla_unit_b1_base
	{
		hiddenselectionstextures[] = 
		{
			"442_units\cis_droids\data\b1_upper_cmd_co.paa",
			"442_units\cis_droids\data\b1_lower_co.paa"
		};
		uniformclass = "k_swla_b1_cmd_uniform";
	};
	class k_swla_unit_b1_pilot_base: k_swla_unit_b1_base
	{
		hiddenselectionstextures[] = 
		{
			"442_units\cis_droids\data\b1_upper_pilot_co.paa",
			"442_units\cis_droids\data\b1_lower_co.paa"
		};
		uniformclass = "k_swla_b1_pilot_uniform";
	};
	class k_swla_unit_b1_woodland_base: k_swla_unit_b1_base
	{
		hiddenselectionstextures[] = 
		{
			"442_units\cis_droids\data\b1_upper_woodland_co.paa",
			"442_units\cis_droids\data\b1_lower_woodland_co.paa"
		};
		uniformclass = "k_swla_b1_woodland_uniform";
		editorsubcategory = "442_battledroid_inf_w";
	};
	class k_swla_unit_b1_desert_base: k_swla_unit_b1_base
	{
		hiddenselectionstextures[] = 
		{
			"442_units\cis_droids\data\b1_upper_desert_co.paa",
			"442_units\cis_droids\data\b1_lower_desert_co.paa"
		};
		uniformclass = "k_swla_b1_desert_uniform";
		editorsubcategory = "442_battledroid_inf_d";
	};
	class k_swla_unit_b1_winter_base: k_swla_unit_b1_base
	{
		hiddenselectionstextures[] = 
		{
			"442_units\cis_droids\data\b1_upper_winter_co.paa",
			"442_units\cis_droids\data\b1_lower_winter_co.paa"
		};
		uniformclass = "k_swla_b1_winter_uniform";
		editorsubcategory = "442_battledroid_inf_winter";
	};

	#include "unit_loadout.hpp"