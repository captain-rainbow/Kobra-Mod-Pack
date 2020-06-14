class cfgPatches
{
	class 442_warthog
	{
		weapons[] = {};
		units[] = 
		{
			"442_warthog_unarmed",
			"442_warthog_mg",
			"442_warthog_at",
			"442_warthog_tt",
			
			"cis_warthog_mg",

			"bl_warthog_unarmed",
			"bl_warthog_mg",
			"bl_warthog_at",
			"bl_warthog_tt",
			"442_deserter_warthog_unarmed_black",
			"442_deserter_warthog_mg_black",
			"442_deserter_warthog_at_black",
			"442_deserter_warthog_tt_black",
			"442_deserter_warthog_unarmed_tan",
			"442_deserter_warthog_mg_tan",
			"442_deserter_warthog_at_tan",
			"442_deserter_warthog_tt_tan",
			"442_deserter_warthog_unarmed_woodland",
			"442_deserter_warthog_mg_woodland",
			"442_deserter_warthog_at_woodland",
			"442_deserter_warthog_tt_woodland"
		};
		requiredaddons[] = {};
	};
};
class CfgEditorSubcategories
{
	class 442_optre_vehicles
	{
		displayname = "Warthogs";
		side = 1;
	};
};

class cfgVehicles
{
	class OPTRE_M12_FAV;
	class OPTRE_M12_LRV;
	class OPTRE_M12A1_LRV;
	class OPTRE_M12G1_LRV;
	class OPTRE_M12R_AA;
	class OPTRE_M914_RV;
	class OPTRE_M813_TT;
	class Turrets;
	class MainTurret;
	class HitPoints;
	class ViewOptics;
	class CargoGunner_1;
	class LandVehicle;
	class AnimationSources;
//Unarmed
	class 442_warthog_unarmed: OPTRE_M12_FAV
	{
		displayname = "[442] Warthog (Unarmed)";
		scope = 2;
		side = 1;
		crew = "SWLB_clone_base_P2";
		faction = "kobra";
		editorsubcategory = "442_optre_vehicles";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"clan",
			"clan_text",
			"insignia",
			"attach_apc",
			"attach_mg",
			"attach_troop"
		};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\data\rep_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
		};
		class texturesources
		{
			class default
			{
				displayname = "Republic";
				author = "kripto202";
				textures[] = 
				{
					"442_warthog\data\rep_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
				};
				factions[] = 
				{
					"kobra"
				};
			};
			class 442
			{
				displayname = "442nd Siege Battalion";
				author = "kripto202";
				textures[] = 
				{
					"442_warthog\data\442_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
				};
				factions[] = 
				{
					"kobra"
				};
			};
			class black_legion
			{
				displayname = "Black Legion";
				author = "kripto202";
				textures[] = 
				{
					"442_warthog\data\bl_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
				};
				factions[] = 
				{
					"kobra"
				};
			};
		};
		texturelist[] = 
		{
			"default", 1,
			"442", 0,
			"black_legion", 0
		};
	};
	class 442_warthog_mg: OPTRE_M12_LRV
	{
		displayname = "[442] Warthog (MG)";
		scope = 2;
		side = 1;
		crew = "SWLB_clone_base_P2";
		faction = "kobra";
		editorsubcategory = "442_optre_vehicles";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\data\rep_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
		};
		class texturesources
		{
			class default
			{
				displayname = "Republic";
				author = "kripto202";
				textures[] = 
				{
					"442_warthog\data\rep_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
				};
				factions[] = 
				{
					"kobra"
				};
			};
			class 442
			{
				displayname = "442nd Siege Battalion";
				author = "kripto202";
				textures[] = 
				{
					"442_warthog\data\442_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
				};
				factions[] = 
				{
					"kobra"
				};
			};
			class black_legion
			{
				displayname = "Black Legion";
				author = "kripto202";
				textures[] = 
				{
					"442_warthog\data\bl_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
				};
				factions[] = 
				{
					"kobra"
				};
			};
		};
		texturelist[] = 
		{
			"default", 1,
			"442", 0,
			"black_legion", 0
		};
	};
	class 442_warthog_at: OPTRE_M12A1_LRV
	{
		displayname = "[442] Warthog (Rocket)";
		scope = 2;
		side = 1;
		crew = "SWLB_clone_base_P2";
		faction = "kobra";
		editorsubcategory = "442_optre_vehicles";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia"};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\data\rep_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
		};
		class texturesources
		{
			class default
			{
				displayname = "Republic";
				author = "kripto202";
				textures[] = 
				{
					"442_warthog\data\rep_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
				};
				factions[] = 
				{
					"kobra"
				};
			};
			class 442
			{
				displayname = "442nd Siege Battalion";
				author = "kripto202";
				textures[] = 
				{
					"442_warthog\data\442_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
				};
				factions[] = 
				{
					"kobra"
				};
			};
			class black_legion
			{
				displayname = "Black Legion";
				author = "kripto202";
				textures[] = 
				{
					"442_warthog\data\bl_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
				};
				factions[] = 
				{
					"kobra"
				};
			};
		};
		texturelist[] = 
		{
			"default", 1,
			"442", 0,
			"black_legion", 0
		};
	};
//TT
	class 442_warthog_tt: OPTRE_M813_TT
	{
		displayname = "[442] Warthog (Transport)";
		scope = 2;
		side = 1;
		crew = "SWLB_clone_base_P2";
		faction = "kobra";
		editorsubcategory = "442_optre_vehicles";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_antenna"};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\data\rep_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
		};
		class texturesources
		{
			class default
			{
				displayname = "Republic";
				author = "kripto202";
				textures[] = 
				{
					"442_warthog\data\rep_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
				};
				factions[] = 
				{
					"kobra"
				};
			};
			class 442
			{
				displayname = "442nd Siege Battalion";
				author = "kripto202";
				textures[] = 
				{
					"442_warthog\data\442_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
				};
				factions[] = 
				{
					"kobra"
				};
			};
			class black_legion
			{
				displayname = "Black Legion";
				author = "kripto202";
				textures[] = 
				{
					"442_warthog\data\bl_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
				};
				factions[] = 
				{
					"kobra"
				};
			};
		};
		texturelist[] = 
		{
			"default", 1,
			"442", 0,
			"black_legion", 0
		};
	};

//Deserter hogs
	class 442_deserter_warthog_unarmed_black: OPTRE_M12_FAV
	{
		displayname = "Warthog (Unarmed - Black)";
		scope = 2;
		side = 2;
		crew = "442_swla_deserters_unit_rifleman_dc15s_black";
		faction = "swla_442_deserters_f";
		editorsubcategory = "442_deserters_ground_veh_black";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"clan",
			"clan_text",
			"insignia",
			"attach_apc",
			"attach_mg",
			"attach_troop"
		};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\data\442_warthog_body_black.paa",
			"442_warthog\data\442_warthog_addons_black.paa"
		};
	};
	class 442_deserter_warthog_mg_black: 442_warthog_mg
	{
		displayname = "Warthog (MG - Black)";
		scope = 2;
		side = 2;
		crew = "442_swla_deserters_unit_rifleman_dc15s_black";
		faction = "swla_442_deserters_f";
		editorsubcategory = "442_deserters_ground_veh_black";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\data\442_warthog_body_black.paa",
			"442_warthog\data\442_warthog_addons_black.paa"
		};
	};
	class 442_deserter_warthog_at_black: OPTRE_M12A1_LRV
	{
		displayname = "Warthog (Rocket - Black)";
		scope = 2;
		side = 2;
		crew = "442_swla_deserters_unit_rifleman_dc15s_black";
		faction = "swla_442_deserters_f";
		editorsubcategory = "442_deserters_ground_veh_black";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\data\442_warthog_body_black.paa",
			"442_warthog\data\442_warthog_addons_black.paa"
		};
	};
	class 442_deserter_warthog_tt_black: OPTRE_M813_TT
	{
		displayname = "Warthog (Transport - Black)";
		scope = 2;
		side = 2;
		crew = "442_swla_deserters_unit_rifleman_dc15s_black";
		faction = "swla_442_deserters_f";
		editorsubcategory = "442_deserters_ground_veh_black";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\data\442_warthog_body_black.paa",
			"442_warthog\data\442_warthog_addons_black.paa"
		};
	};
	class 442_deserter_warthog_unarmed_tan: 442_deserter_warthog_unarmed_black
	{
		displayname = "Warthog (Unarmed - Tan)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_tan";
		editorsubcategory = "442_deserters_ground_veh_tan";
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\data\442_warthog_body_tan.paa",
			"442_warthog\data\442_warthog_addons_tan.paa"
		};
	};
	class 442_deserter_warthog_mg_tan: 442_deserter_warthog_mg_black
	{
		displayname = "Warthog (MG - Tan)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_tan";
		editorsubcategory = "442_deserters_ground_veh_tan";
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\data\442_warthog_body_tan.paa",
			"442_warthog\data\442_warthog_addons_tan.paa"
		};
	};
	class 442_deserter_warthog_at_tan: 442_deserter_warthog_at_black
	{
		displayname = "Warthog (Rocket - Tan)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_tan";
		editorsubcategory = "442_deserters_ground_veh_tan";
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\data\442_warthog_body_tan.paa",
			"442_warthog\data\442_warthog_addons_tan.paa"
		};
	};
	class 442_deserter_warthog_tt_tan: 442_deserter_warthog_tt_black
	{
		displayname = "Warthog (Transport - Tan)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_tan";
		editorsubcategory = "442_deserters_ground_veh_tan";
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\data\442_warthog_body_tan.paa",
			"442_warthog\data\442_warthog_addons_tan.paa"
		};
	};
	class 442_deserter_warthog_unarmed_woodland: 442_deserter_warthog_unarmed_black
	{
		displayname = "Warthog (Unarmed - Woodland)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_woodland";
		editorsubcategory = "442_deserters_ground_veh_woodland";
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\data\442_warthog_body_woodland.paa",
			"442_warthog\data\442_warthog_addons_woodland.paa"
		};
	};
	class 442_deserter_warthog_mg_woodland: 442_deserter_warthog_mg_black
	{
		displayname = "Warthog (MG - Woodland)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_woodland";
		editorsubcategory = "442_deserters_ground_veh_woodland";
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\data\442_warthog_body_woodland.paa",
			"442_warthog\data\442_warthog_addons_woodland.paa"
		};
	};
	class 442_deserter_warthog_at_woodland: 442_deserter_warthog_at_black
	{
		displayname = "Warthog (Rocket - Woodland)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_woodland";
		editorsubcategory = "442_deserters_ground_veh_woodland";
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\data\442_warthog_body_woodland.paa",
			"442_warthog\data\442_warthog_addons_woodland.paa"
		};
	};
	class 442_deserter_warthog_tt_woodland: 442_deserter_warthog_tt_black
	{
		displayname = "Warthog (Transport - Woodland)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_woodland";
		editorsubcategory = "442_deserters_ground_veh_woodland";
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\data\442_warthog_body_woodland.paa",
			"442_warthog\data\442_warthog_addons_woodland.paa"
		};
	};
};