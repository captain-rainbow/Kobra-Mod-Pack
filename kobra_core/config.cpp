class CfgPatches
{
	class kobra_core
	{
		author = "kripto202";
		requiredAddons[]=
		{
			"A3_Anims_F",
			"A3_Characters_F",
			"A3_UI_F"
		};
		requiredVersion = 0.1;
		units[] = 
		{
			"442_acclamator",
			"442_acclamator_2",
			"442_acclamator_3",
			"442_acclamator_4",
			"442_acclamator_5",

			"442_coreship",
			"442_core_control_tower",
			"442_core_core1",
			"442_core_core2",
			"442_core_core3",
			"442_core_core4",
			"442_core_platform1",
			"442_core_platform2",
			"442_core_platform3",
			"442_core_platform4",
			"442_core_radar",

			"442_hardcell_base",
			"442_hardcell_body",
			"442_hardcell_engine1",
			"442_hardcell_engine2",
			"442_hardcell_engine3",
			"442_hardcell_leg1",
			"442_hardcell_leg2",
			"442_hardcell_leg3",

			"442_lucrehulk",
			"442_lucrehulk_base",
			"442_back_1",
			"442_bottom_1",
			"442_bottom_2",
			"442_bottom_3",
			"442_bottom_4",
			"442_core_1",
			"442_core_2",
			"442_core_3",
			"442_engine_1",
			"442_front_1",
			"442_front_2",
			"442_front_3",
			"442_front_4",
			"442_gate_1",
			"442_inner_1",
			"442_inner_2",
			"442_inner_3",
			"442_inner_4",
			"442_radar_1",
			"442_radar_2",
			"442_radar_3",
			"442_radar_4",
			"442_top_1",
			"442_top_2",
			"442_top_3",
			"442_top_4",

			"442_mandator_base",
			"442_mandator_body1_1",
			"442_mandator_body2_1",
			"442_mandator_body2_2",
			"442_mandator_body3_1",
			"442_mandator_body3_2",
			"442_mandator_body4_1",
			"442_mandator_body4_2",
			"442_mandator_body4_3",
			"442_mandator_body4_4",
			"442_mandator_body4_5",
			"442_mandator_body4_6",
			"442_mandator_body4_7",
			"442_mandator_body4_8",
			"442_mandator_engine_1",
			"442_mandator_engine_2",
			"442_mandator_engine_3",
			"442_mandator_hanger1_1",
			"442_mandator_hanger2_1",
			"442_mandator_hanger2_2",
			"442_mandator_hanger3_1",
			"442_mandator_hanger3_2",
			"442_mandator_hanger4",

			"442_munificent",

			"442_providence",
			"442_providence_2",
			"442_providence_d",
			"442_providence_d_2",
			"442_providence_hull_base",
			"442_providence_body1",
			"442_providence_body1_d",
			"442_providence_body2",
			"442_providence_body2_d",
			"442_providence_body3",
			"442_providence_body3_d",
			"442_providence_bridge",
			"442_providence_bridge_d",
			"442_providence_engine",
			"442_providence_engine_d",
			"442_providence_interior",
			"442_providence_interior_d",
			"442_providence_zeus",
			"442_providence_d_zeus",

			"442_quasar",

			"442_recusant_zeus",
			"442_recusant_zeus_d",
			"442_rec_body1",
			"442_rec_body2",
			"442_rec_engine",
			"442_rec_body1_d",
			"442_rec_body2_d",
			"442_rec_engine_d",

			"442_sds_stealth_ship",

			"442_subjugator",
			"442_subjugator_base",
			"442_subjugator_hull_base",
			"442_subjugator_body1",
			"442_subjugator_body1_1",
			"442_subjugator_body2",
			"442_subjugator_body2_1",
			"442_subjugator_body2_2",
			"442_subjugator_body2_3",
			"442_subjugator_body2_4",
			"442_subjugator_body3",
			"442_subjugator_body4",
			"442_subjugator_body4_1",
			"442_subjugator_body4_2",
			"442_subjugator_body4_3",
			"442_subjugator_body4_4",
			"442_subjugator_body5",
			"442_subjugator_body5_1",
			"442_subjugator_body5_2",
			"442_subjugator_body5_3",
			"442_subjugator_body5_4",
			"442_subjugator_bridge",
			"442_subjugator_emp1",
			"442_subjugator_emp1_1",
			"442_subjugator_emp2",
			"442_subjugator_emp2_1",
			"442_subjugator_engine",

			"442_venator_zeus",
			"442_venator_base",
			"442_venator_base_2",
			"442_venator_base_3",
			"442_venator_base_4",
			"442_venator_base_5",
			"442_venator_base_6",
			"442_ven_body1_1",
			"442_ven_body1_2",
			"442_ven_body2_1",
			"442_ven_body2_2",
			"442_ven_body2_3",
			"442_ven_body3",
			"442_ven_body4",
			"442_ven_body5",
			"442_ven_body6",
			"442_ven_body7",
			"442_ven_body8",
			"442_ven_body9",
			"442_ven_body10",
			"442_ven_door",
			"442_ven_door2",
			"442_ven_engine",
			"442_ven_interior1",
			"442_ven_interior2",
			"442_ven_interior3",
			"442_ven_interior4",
			"442_ven_interior5",
			"442_ven_interior6",
			"442_ven_interior7",
			"442_ven_interior8",
			"442_ven_bridge"
		};
		weapons[]={};
	};
};

class CfgSounds 
{
	class kobra_Vic_ImpulseOn 
	{
		titles[] = {"kobra_Vic_ImpulseOn"};
		sound[] = {"kobra_core\sounds\Impulsor_On.wss", 15, 1, 1500};
		name = "kobra_Vic_ImpulseOn";
		duration = 3;
	};

	class kobra_Vic_ImpulseOff 
	{
		titles[] = {"kobra_Vic_ImpulseOff"};
		sound[] = {"kobra_core\sounds\Impulsor_Off.wss", 15, 1, 1500};
		name = "kobra_Vic_ImpulseOff";
		duration = 3;
	};

};

class CfgFunctions 
{
	class kobra_Vehicle
	{
		class Operation 
		{
			file = "kobra_core\Scripts";
			
			class Init
			{
				postInit = 1;
			};

            class ImpulsorMonitor {};

            class ImpulseKey {};
			
			class RepulseKey {};
			
			class ImpulseJoystick {};
			
			class RepulseJoystick {};


		};
	};
};

class cfgFactionClasses
{
	class 442_siege_bat
	{
		displayName = "[K] 442nd Siege Battalion";
		priority = 1;
		side = 1;
		icon = "";
	};
	class 442_siege_bat_w
	{
		displayName = "[K] 442nd Siege Battalion (Woodland)";
		priority = 1;
		side = 1;
		icon = "";
	};
	class 442_siege_bat_d
	{
		displayName = "[K] 442nd Siege Battalion (Desert)";
		priority = 1;
		side = 1;
		icon = "";
	};
	class 442_siege_bat_j
	{
		displayName = "[K] 442nd Siege Battalion (Jungle)";
		priority = 1;
		side = 1;
		icon = "";
	};
	class swla_442_deserters_f
	{
		displayname = "[K] Deserters";
		priority = 1;
		side = 2;
	};
	class 442_CIS
	{
		displayname = "[K] CIS";
		priority = 1;
		side = 0;
	};
	class black_legion
	{
		displayname = "[K] Black Legion";
		priority = 1;
		side = 1;
	};
	class 44_sod
	{
		displayname = "[K] 44th Special Operations Division";
		priority = 1;
		side = 1;
	};
	class kobra
	{
		displayname = "[K] Kobra";
		priority = 1;
		side = 1;
	};
	class kobra_o
	{
		displayname = "[K] Kobra";
		priority = 1;
		side = 0;
	};
	class kobra_i
	{
		displayname = "[K] Kobra";
		priority = 1;
		side = 2;
	};
	class kobra_c
	{
		displayname = "[K] Kobra";
		priority = 1;
		side = 3;
	};
};
class cfgeditorcategories
{
	class 442_siege_bat
	{
		displayname = "[K] 442nd Siege Battalion";
	};
	class 442_siege_bat_w
	{
		displayname = "[K] 442nd Siege Battalion (Woodland)";
	};
	class 442_siege_bat_d
	{
		displayname = "[K] 442nd Siege Battalion (Desert)";
	};
	class 442_siege_bat_j
	{
		displayname = "[K] 442nd Siege Battalion (Jungle)";
	};
	class 31_nexu
	{
		displayname = "[K] 31st Nexu Battalion";
	};
	class deserters_442_f
	{
		displayname = "[K] Deserters";
	};
	class 442_cis
	{
		displayname = "[K] CIS";
	};
	class black_legion
	{
		displayname = "[K] Black Legion";
	};
	class 44_sod
	{
		displayname = "[K] 44th Special Operations Division";
	};
	class kobra
	{
		displayname = "[K] Kobra";
	};
};
/////////////look over this///////////////
class CfgEditorSubcategories
{
	class swla_442_trooper
	{
		displayname = "P2 Trooper";
		side = 1;
	};
	class swla_442_commando
	{
		displayname = "Commando";
		side = 1;
	};
	class swla_442_trooper_custom
	{
		displayname = "Trooper (Custom)";
		side = 1;
	};
	class swla_442_p1_trooper
	{
		displayname = "P1 Trooper";
		side = 1;
	};
	class swla_442_p1_trooper_custom
	{
		displayname = "P1 Trooper (Custom)";
		side = 1;
	};
	class swla_442_helmets
	{
		displayname = "Helmets";
		side = 1;
	};
	class swla_442_uniforms
	{
		displayname = "Uniforms";
		side = 1;
	};
	class 442_ls_saber_tank
	{
		displayname = "Saber Tank";
		side = 1;
	};
	class 442_LAATS
	{
		displayname = "LAATS";
		side = 1;
	};
	class 442_optre_vehicles
	{
		displayname = "442nd OPTRE Vehicles";
		side = 1;
	};
	class 442_planes
	{
		displayname = "Aircraft";
		side = 1;
	};
	class 442_RTT
	{
		displayname = "RTT";
		side = 1;
	};
	class 442_boat
	{
		displayname = "Boat";
		side = 1;
	};
    class 442_argon
    {
        displayname = "Argon-class trucks";
		side = 1;
    };
	class 442_item
	{
		displayname = "Items";
		side = 1;
	};
	class 442_hallway
	{
		displayname = "Hallway";
		side = 1;
	};
	class 442_item_small
	{
		displayname = "Items (Small)";
		side = 1;
	};
	class 442_holograms
	{
		displayname = "Holograms";
		side = 1;
	};
	
	class swla_44_trooper
	{
		displayname = "P2 Trooper";
		side = 1;
	};
	
	class bl_optre_vehicles
	{
		displayname = "Black Legion OPTRE Vehicles";
		side = 1;
	};
	class swla_bl_trooper
	{
		displayname = "P2 Trooper";
		side = 1;
	};
	class swla_bl_trooper_custom
	{
		displayname = "Trooper (Custom)";
		side = 1;
	};
	class swla_bl_p1_trooper
	{
		displayname = "P1 Trooper";
		side = 1;
	};
	class swla_bl_p1_trooper_custom
	{
		displayname = "P1 Trooper (Custom)";
		side = 1;
	};
	class swla_bl_helmets
	{
		displayname = "Helmets";
		side = 1;
	};
	class bl_ls_saber_tank
	{
		displayname = "Saber Tank";
		side = 1;
	};
	class bl_LAATS
	{
		displayname = "LAATS";
		side = 1;
	};
	class bl_planes
	{
		displayname = "Aircraft";
		side = 1;
	};
	class bl_RTT
	{
		displayname = "RTT";
		side = 1;
	};
	class bl_boat
	{
		displayname = "Boat";
		side = 1;
	};
	class bl_argon
    {
        displayname = "Argon-class trucks";
		side = 1;
    };
	
	class swla_442_deserters_trooper_black
	{
		displayname = "Trooper (Black)";
		side = 2;
	};
	class swla_442_deserters_trooper_tan
	{
		displayname = "Trooper (Tan)";
		side = 2;
	};
	class swla_442_deserters_trooper_woodland
	{
		displayname = "Trooper (Woodland)";
		side = 2;
	};
	class swla_442_deserters_helmets
	{
		displayname = "[LS] Helmets";
		side = 2;
	};
	class 442_deserters_laats
	{
		displayname = "LAAT";
		side = 2;
	};
	class 442_deserters_ground_veh_woodland
	{
		displayname = "Ground Vehicles (Woodland)";
		side = 2;
	};
	class 442_deserters_ground_veh_tan
	{
		displayname = "Ground Vehicles (Tan)";
		side = 2;
	};
	class 442_deserters_ground_veh_black
	{
		displayname = "Ground Vehicles (Black)";
		side = 2;
	};
	class 442_deserters_ground_veh_jungle
	{
		displayname = "Ground Vehicles (Jungle)";
		side = 2;
	};
	class 442_deserters_air_veh_woodland
	{
		displayname = "Air Vehicles (Woodland)";
		side = 2;
	};
	class 442_deserters_air_veh_desert
	{
		displayname = "Air Vehicles (Desert)";
		side = 2;
	};
	class 442_deserters_air_veh_black
	{
		displayname = "Air Vehicles (Black)";
		side = 2;
	};
	class 442_deserters_air_veh_jungle
	{
		displayname = "Air Vehicles (Jungle)";
		side = 2;
	};
	
	class 442_rep_warthog
	{
		displayname = "Warthog";
		side = 1;
	};
	
	class 442_ships
	{
		displayname = "Static Ship";
	};
	class 442_ships_parts
	{
		displayname = "Static Ship Parts";
	};
	
	class 442_battledroid_inf_w
	{
		displayname = "Battledroid (Woodland)";
		side = 0;
	};
	class 442_battledroid_inf_d
	{
		displayname = "Battledroid (Desert)";
		side = 0;
	};
	class 442_cis_armor
	{
		displayname = "Armor";
		side = 0;
	};

	class 442_wrecks
	{
		displayname = "Wrecks";
		side = 0;
	};
};


class CfgMovesFatigueARC
{
	aimPrecisionSpeedCoef = 2;
	staminaCooldown = 5;
	staminaDuration = 250;
	staminaRestoration = 15;
	terrainDrainRun = -0.3;
	TerrainDrainSprint = -0.3;
	TerrainSpeedCoef = 1.2;
};
class CfgMovesFatigueARF
{
	aimPrecisionSpeedCoef = 3;
	staminaCooldown = 5;
	staminaDuration = 200;
	staminaRestoration = 10;
	terrainDrainRun = -0.1;
	TerrainDrainSprint = -0.1;
	TerrainSpeedCoef = 1.5;
};
class CfgMovesFatigueTrooper
{
	aimPrecisionSpeedCoef = 5;
	staminaCooldown = 8;
	staminaDuration = 120;
	staminaRestoration = 20;
	terrainDrainRun = -0.5;
	TerrainDrainSprint = -0.5;
	TerrainSpeedCoef = 0.9;
};
class Eventhandlers;
class cfgweapons
{

};
class cfgvehicles
{
	class NonStrategic;
	class StaticShip;
	class Ship;
	class Building;
	class House_F;
	class FloatingStructure_F;
	class thingx;
	class LandVehicle;
	class Motorcycle;
	class FlagCarrier;
	class Items_base_F;
	#include "442_ships\acclamator.hpp"
	#include "442_ships\coreship.hpp"
	#include "442_ships\hardcell.hpp"
	#include "442_ships\lucrehulk.hpp"
	#include "442_ships\mandator.hpp"
	#include "442_ships\munificent.hpp"
	#include "442_ships\pravidence.hpp"
	#include "442_ships\quasar.hpp"
	#include "442_ships\recusant.hpp"
	#include "442_ships\sds_stealth.hpp"
	#include "442_ships\subjugator.hpp"
	#include "442_ships\venator.hpp"
};