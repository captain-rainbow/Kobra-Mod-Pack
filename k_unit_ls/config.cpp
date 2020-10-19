class CfgPatches
{
    class k_unit_blufor_ls
    {
        author = "KOBRA Mod Team";
        requiredAddons[] = 
        {
            "A3_Anims_F",
            "A3_characters_F",
            "kobra_core"
        };
        requiredversion = 0.1;
        units[] = 
        {

        };
        weapons[] = 
        {

        };
    };
};

class cfgweapons 
{
    class HeadgearItem;
	class UniformItem;
	class VestItem;
	class V_rebreatherB;
	class U_I_CombatUniform;
	class Integrated_NVG_F;
	class H_HelmetO_ViperSP_hex_F;
    class V_PlateCarrier1_rgr;
    class nvgoggles;
    class ls_cis_b1_uniform;
    class U_O_officer_noinsignia_hex_F;
    class ItemCore;

    class k_nvg: Integrated_NVG_F
	{
		scope=1;
		visionMode[]={
			"Normal",
			"NVG"
		};
		modelOptics="";
		ace_nightvision_border = "442_equipment\attachments\data\nvg_mask_sw_4096.paa";
	};
	class k_nvg_ti: Integrated_NVG_F
	{
		scope=1;
		visionMode[]={
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0};
		modelOptics="";
		ace_nightvision_border = "442_equipment\attachments\data\nvg_mask_sw_4096.paa";
	};
	class k_ti: Integrated_NVG_F
	{
		scope=1;
		visionMode[] = {
			"Normal",
			"TI"
		};
		thermalMode[]={0};
		modelOptics="";
		ace_nightvision_border = "442_equipment\attachments\data\nvg_mask_sw_4096.paa";
	};

/////////////helmet//////////////////
    class k_helmet_base: H_HelmetO_ViperSP_hex_F
	{
		author = "KOBRA Mod Team";
		displayname = "helmet base config";
		scope = 0;
		scopecurator = 0;
		scopearsenal = 0;
		ace_hearing_protection = 0.8500002;
		ace_hearing_lowervolume = 0.2;
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenselections[] = {};
		model = "swlb_clones\swlb_clone_p2_helmet.p3d";
		subItems[] = {};
		class Iteminfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\swlb_clones\swlb_clone_p2_helmet.p3d";
			hiddenselections[] = {};
			allowedSlots[] = {801,901,701,605};
			modelsides[] = {0,1,2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointname = "HitHead";
					armor = 12;
					passThrough = 0.5;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class k_p2_helmet_base: k_helmet_base
	{
		displayname = "[K] P2 Helmet";
		picture = "ls_armor_bluefor\helmet\_ui\icon_gar_phase2_helmet_ca.paa";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};

		hiddenselectionsmaterials[] = 
		{
			"442_units\clones\data\helmet\p2_helmet\camo1.rvmat",
			"442_units\clones\data\helmet\p2_helmet\visor.rvmat"
		};

		model="ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
		class Iteminfo: Iteminfo
		{
			uniformModel="ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"visor"
			};
		};
	};
	class k_p15_helmet_base: k_helmet_base
	{
		displayname = "[K] P1.5 Helmet";
		picture = "";
		subItems[] = {};
		model="\ls_armor_bluefor\helmet\gar\arc\ls_gar_arc_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor",
			"illum"
		};

		/*hiddenselectionsmaterials[] = 
		{
			"442_units\clones\data\helmet\p15_helmet\camo1.rvmat",
			"442_units\clones\data\helmet\p15_helmet\visor.rvmat",
			"442_units\clones\data\helmet\p15_helmet\illum.rvmat"
		};*/

		class Iteminfo: Iteminfo
		{
			uniformModel="\ls_armor_bluefor\helmet\gar\arc\ls_gar_arc_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"visor",
				"illum"
			};
		};
	};
	class k_airborne_helmet_base: k_helmet_base
	{
		displayname = "[K] Airborne Helmet";
		picture = "";
		subItems[] = 
		{
			"k_nvg"
		};
		model="\ls_armor_bluefor\helmet\gar\airborne\ls_gar_airborne_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};
		hiddenselectionsmaterials[] = 
		{
			"442_units\clones\data\helmet\ab_helmet\camo1.rvmat",
			"442_units\clones\data\helmet\ab_helmet\visor.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\ls_armor_bluefor\helmet\gar\airborne\ls_gar_airborne_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"visor"
			};
		};
	};
	class k_p2_pilot_helmet_base: k_helmet_base
	{
		displayname = "[K] P2 Pilot Helmet";
		ace_hearing_protection = 1;
		ace_hearing_lowervolume = 0.5;
		subItems[] = 
		{
			"k_nvg"
		};
		picture = "";
		model="ls_armor_bluefor\helmet\gar\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};

		hiddenselectionsmaterials[] = 
		{
			"442_units\clones\data\helmet\p2_pilot_helmet\camo1.rvmat",
			"442_units\clones\data\helmet\p2_pilot_helmet\visor.rvmat"
		};

		class ItemInfo: ItemInfo
		{
			uniformmodel="ls_armor_bluefor\helmet\gar\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"visor"
			};
		};
	};
	class k_barc_helmet_base: k_helmet_base
	{
		displayname = "[K] Barc Helmet";
		picture = "";
		subItems[] = {};
		model="\ls_armor_bluefor\helmet\gar\barc\ls_gar_barc_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};

		hiddenselectionsmaterials[] = 
		{
			"442_units\clones\data\helmet\barc_helmet\camo1.rvmat",
			"442_units\clones\data\helmet\barc_helmet\visor.rvmat"
		};

		class ItemInfo: ItemInfo
		{
			uniformModel="\ls_armor_bluefor\helmet\gar\barc\ls_gar_barc_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"visor"
			};
		};
	};
	class k_p1_arf_helmet_base: k_helmet_base
	{
		displayname = "[K] P1 ARF Helmet";
		picture = "";
		subitems[] = {
			"k_nvg_ti"
		};
		model="\ls_armor_bluefor\helmet\gar\arf\ls_gar_arf_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"camo2",
			"visor"
		};

		/*hiddenselectionsmaterials[] = 
		{
			"442_units\clones\data\helmet\arf_helmet\camo1.rvmat",
			"",
			"442_units\clones\data\helmet\arf_helmet\visor.rvmat"
		};*/
		
		class Iteminfo: ItemInfo
		{
			uniformModel="\ls_armor_bluefor\helmet\gar\arf\ls_gar_arf_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"camo2",
				"visor"
			};
		};
	};
	class k_p2_arf_helmet_base: k_p1_arf_helmet_base
	{
		displayname = "[K] P2 ARF Helmet";
		/*hiddenselectionsmaterials[] = 
		{
			"442_units\clones\data\helmet\arf_helmet\camo1.rvmat",
			"442_units\clones\data\helmet\arf_helmet\camo2.rvmat",
			"442_units\clones\data\helmet\arf_helmet\visor.rvmat"
		};*/
	};
	class k_eng_helmet_base: k_helmet_base
	{
		displayname = "[K] Engineer Helmet";
		picture = "";
		subItems[] = {
			"k_nvg"
		};
		model = "\ls_armor_bluefor\helmet\gar\engineer\ls_gar_engineer_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"illum",
			"visor"
		};

		hiddenselectionsmaterials[] = 
		{
			"442_units\clones\data\helmet\eng_helmet\camo1.rvmat",
			"442_units\clones\data\helmet\eng_helmet\illum.rvmat",
			"442_units\clones\data\helmet\eng_helmet\visor.rvmat"
		};

		class ItemInfo: ItemInfo
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\engineer\ls_gar_engineer_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"illum",
				"visor"
			};
		};
	};
	class k_p1_helmet_base: k_helmet_base
	{
		displayname = "[K] P1 Helmet";
		picture = "";
		subItems[] = {};
		model="\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor",
			"illum"
		};

		hiddenselectionsmaterials[] = 
		{
			"442_units\clones\data\helmet\p1_helmet\camo1.rvmat",
			"442_units\clones\data\helmet\p1_helmet\visor.rvmat",
			"442_units\clones\data\helmet\p1_helmet\illum.rvmat"
		};

		class ItemInfo: ItemInfo
		{
			uniformModel="\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"visor",
				"illum"
			};
		};
	};
	class k_p1_pilot_helmet_base: k_helmet_base
	{
		displayname = "[K] P1 Pilot Helmet";
		picture = "";
		subItems[] = 
		{
			"k_nvg"
		};
		model="ls_armor_bluefor\helmet\gar\phase1Pilot\ls_gar_phase1Pilot_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"camo2",
			"visor"
		};
		hiddenselectionsmaterials[] = 
		{
			"442_units\clones\data\helmet\p1_pilot_helmet\camo1.rvmat",
			"442_units\clones\data\helmet\p1_pilot_helmet\camo2.rvmat",
			"442_units\clones\data\helmet\p1_helmet\visor.rvmat"
		};

		class ItemInfo: ItemInfo
		{
			uniformModel="ls_armor_bluefor\helmet\gar\phase1Pilot\ls_gar_phase1Pilot_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"camo2",
				"visor"
			};
		};
	};
	class k_p1_specops_helmet_base: k_helmet_base
	{
		displayname = "[K] P1 Specops Helmet";
		picture = "";
		subItems[] = 
		{
			"k_nvg"
		};
		model="ls_armor_bluefor\helmet\sob\phase1SpecOp\ls_sob_phase1SpecOp_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};

		hiddenselectionsmaterials[] = 
		{
			"442_units\clones\data\helmet\p1_spec_helmet\camo1.rvmat",
			"442_units\clones\data\helmet\p1_spec_helmet\visor.rvmat"
		};

		class ItemInfo: ItemInfo
		{
			uniformModel="ls_armor_bluefor\helmet\sob\phase1SpecOp\ls_sob_phase1SpecOp_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"visor"
			};
		};
	};
	class k_p2_specops_helmet_base: k_helmet_base
	{
		displayname = "[K] P2 Specops Helmet";
		picture = "";
		subItems[] = 
		{
			"k_nvg"
		};
		model="ls_armor_bluefor\helmet\sob\phase2SpecOp\ls_sob_phase2SpecOp_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};

		hiddenselectionsmaterials[] = 
		{
			"442_units\clones\data\helmet\p2_spec_helmet\camo1.rvmat",
			"442_units\clones\data\helmet\p2_spec_helmet\visor.rvmat"
		};

		class ItemInfo: ItemInfo
		{
			uniformModel="ls_armor_bluefor\helmet\sob\phase2SpecOp\ls_sob_phase2SpecOp_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"visor"
			};
		};
	};
	class k_rex_helmet_base: k_helmet_base
	{
		displayname = "[K] Rex Helmet";
		picture = "";
		subItems[] = {};
		model="\ls_armor_bluefor\helmet\gar\rex\ls_gar_rex_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};

		hiddenselectionsmaterials[] = 
		{
			"442_units\clones\data\helmet\rex_helmet\camo1.rvmat",
			"442_units\clones\data\helmet\rex_helmet\visor.rvmat"
		};

		class ItemInfo: ItemInfo
		{
			uniformModel="\ls_armor_bluefor\helmet\gar\rex\ls_gar_rex_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"visor"
			};
		};
	};
	class k_Scout_Helmet_base: k_helmet_base
	{
		displayName="[K] Scout Helmet";
		model="442_units\clones\scout_helmet.p3d";
		picture="";
		subItems[]=
		{
			"k_nvg_ti"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="442_units\clones\scout_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"visor"
			};
		};
	};

	class k_hunter_helmet_base: k_helmet_base
	{
		displayName="[K] Hunter Helmet";
		model="442_units\clones\hunter_helmet.p3d";
		picture="";
		subItems[]=
		{
			"k_nvg"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="442_units\clones\hunter_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"visor"
			};
		};
	};
	class k_crosshair_helmet_base: k_helmet_base
	{
		displayName="[K] Crosshair Helmet";
		model="442_units\clones\crosshair_helmet.p3d";
		picture="";
		subItems[]=
		{
			"k_nvg"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="442_units\clones\crosshair_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"visor"
			};
		};
	};
	class k_wrecker_helmet_base: k_helmet_base
	{
		displayName="[K] Wrecker Helmet";
		model="442_units\clones\wrecker_helmet.p3d";
		picture="";
		subItems[]=
		{
			"k_nvg"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="442_units\clones\wrecker_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"visor"
			};
		};
	};
	class k_tech_helmet_base: k_helmet_base
	{
		displayName="[K] Tech Helmet";
		model="442_units\clones\tech_helmet.p3d";
		picture="";
		subItems[]=
		{
			"k_nvg"
		};
		hiddenSelections[]=
		{
			"Camo1"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="442_units\clones\tech_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1"
			};
		};
	};
	class k_cadet_helmet_base: k_helmet_base
	{
		displayName="[K] Cadet Helmet";
		model="442_units\clones\cadet_helmet.p3d";
		picture="";
		subItems[]=
		{
			"k_nvg"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"visor"
		};		
		class ItemInfo: ItemInfo
		{
			uniformModel="442_units\clones\cadet_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"visor"
			};
		};
	};
	class k_desert_helmet_base: k_helmet_base
	{
		displayName="[K] Desert Helmet";
		model="442_units\clones\desert_helmet.p3d";
		picture="";
		subItems[]=
		{
			"k_nvg"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="442_units\clones\desert_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"visor"
			};
		};
	};

	class k_b1_helmet_base: k_helmet_base
	{
		model = "ls_armor_redfor\helmet\cis\b1\ls_cis_b1_helmet.p3d";
		subItems[] = {"k_nvg"};
		
		hiddenselections[] = 
		{
			"camo1"
		};

		hiddenselectionsmaterials[] = 
		{
			"442_units\cis_droids\data\camo1.rvmat"
		};

		class ItemInfo: ItemInfo
		{
			uniformModel = "ls_armor_redfor\helmet\cis\b1\ls_cis_b1_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1"
			};
		};
	};
	#include "helmet.hpp"
////////////////vest//////////////////
    class k_vest_base: V_PlateCarrier1_rgr
    {
        author = "Kobra Mod Team, Clock, and Dezi";
        displayname = "vest base";
        scope = 0;
        scopecurator = 0;
        scopearsenal = 0;
        allowedSlots[] = {901};
        picture = "\442_equipment\vests\data\ui\icon_swlb_clone_uniform_ca.paa";
        class ItemInfo: vestitem
        {
            uniformmodel = "";
            containerclass = "Supply200";
            mass = 80;
            vesttype = "Rebreather";
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 12;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 12;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };
	#include "vest.hpp"
////////////////uniform//////////////
	class k_swla_uniform_base: U_I_CombatUniform
	{
		displayname="Clone Trooper Armor";
		author = "KOBRA Mod Team";
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		picture = "\442_equipment\vests\data\ui\icon_swlb_clone_uniform_ca.paa";
		model="ls_armor_bluefor\uniform\gar\phase2\ls_gar_phase2_uniform_groundholder.p3d"; //model for the ground
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			containerClass="Supply200";
			mass=40;
			uniformType="Neopren";
			uniformClass="k_swla_unit_base";
		};
	};
	class k_swla_uniform_mc_base: U_I_CombatUniform
	{
		author = "KOBRA Mod Team";
		scope=0;
		displayName="Clone marshal commander armor";
		picture = "\442_equipment\vests\data\ui\icon_swlb_clone_uniform_ca.paa";
		model="ls_armor_bluefor\uniform\gar\phase2\ls_gar_phase2_uniform_groundholder.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="k_swla_mc_unit_base"; //link to unit
			containerClass="Supply200";
			uniformType="Neopren";
			mass=40;
		};
	};
	class k_b1_uniform_base: ls_cis_b1_uniform
	{
		author = "KOBRA Mod Team";
		scope = 0;
		displayname = "b1 uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="k_swla_mc_unit_base"; //link to unit
			containerClass="Supply200";
			uniformType="Neopren";
			mass=40;
		};
	};
	#include "uniform.hpp"
};
class cfgvehicles 
{
    class B_Soldier_02_f;
    class k_swla_unit_b1_base;
    class O_officer_F;
	class B_Kitbag_rgr;
/////////////unit//////////////
    class k_swla_unit_base: B_Soldier_02_f
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		model = "ls_armor_bluefor\uniform\gar\phase2\ls_gar_phase2_uniform.p3d";
		editorPreview="";
		//picture = "442_units\clones\data\ui\body.paa"; //this needs to be changed
		icon = "kobra_core\442_icons\data\icon_rifleman.paa";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		role="Rifleman";
		side = 1;
		author = "KOBRA Mod Team";
		uniformclass="k_swla_uniform";
		faction="kobra_b";
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

		hiddenselectionsMaterials[]=
		{
			"442_units\clones\data\uniform\uniform\camo1.rvmat",
			"442_units\clones\data\uniform\uniform\camo2.rvmat",
			"442_units\clones\data\uniform\mc_uniform\undersuit.rvmat",
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
		model = "ls_armor_bluefor\uniform\gar\marshalCommander\ls_gar_marshalCommander_uniform.p3d";
		side = 1;
		uniformclass="k_swla_mc_uniform";
		//picture = "442_units\clones\data\ui\body_mc.paa"; //this needs to be changed
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"undersuit",
			"insignia"
		};
		hiddenselectionsTextures[]=
		{
			"442_units\clones\data\uniform\mc_uniform\camo1_co.paa",
			"442_units\clones\data\uniform\mc_uniform\camo2_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa"
		};
		hiddenselectionsMaterials[]=
		{
			"442_units\clones\data\uniform\mc_uniform\camo1.rvmat",
			"442_units\clones\data\uniform\mc_uniform\camo2.rvmat",
			"442_units\clones\data\uniform\mc_uniform\undersuit.rvmat"
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
		hiddenselectionsmaterials[] = 
		{
			"442_units\cis_droids\data\camo1.rvmat",
			"442_units\cis_droids\data\camo2.rvmat",
		};
		uniformclass = "k_swla_b1_uniform";
		model = "\ls_armor_redfor\uniform\cis\b1\ls_cis_b1_uniform.p3d";
		faction="442_CIS";
		editorSubCategory="442_battledroid_inf";
		class SoundEnvironExt
		{
			normalExt[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step.wss", 0.562, 1}
			};
			normal[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step.wss", 0.562, 1}
			};
			road[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step.wss", 0.562, 1}
			};
			rock[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step.wss", 0.562, 1}
			};
			water[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step.wss", 0.562, 1}
			};
			gravel[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step.wss", 0.562, 1}
			};
			gravel2[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt1.wss", 0.562, 1}, 
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt2.wss", 0.562, 1},
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt3.wss", 0.562, 1},
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt4.wss", 0.562, 1}
			};
			sand[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step.wss", 0.562, 1}
			};
			drygrass[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step.wss", 0.562, 1}
			};
			grass[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_grass.wss", 0.562, 1}
			};
			forest[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt1.wss", 0.562, 1}, 
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt2.wss", 0.562, 1},
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt3.wss", 0.562, 1},
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt4.wss", 0.562, 1}
			};
			mud[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt1.wss", 0.562, 1}, 
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt2.wss", 0.562, 1},
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt3.wss", 0.562, 1},
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt4.wss", 0.562, 1}
			};
			wood[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_wood.wss", 0.562, 1}
			};
			wood_int[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_wood.wss", 0.562, 1}
			};
			carpet[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step.wss", 0.562, 1}
			};
			concrete_int[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step.wss", 0.562, 1}
			};
			concrete_ext[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step.wss", 0.562, 1}
			};
			metal[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_metal.wss", 0.562, 1}
			};
			steel[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step.wss", 0.562, 1}
			};
			hallway[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step.wss", 0.562, 1}
			};
			dirt[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt1.wss", 0.562, 1}, 
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt2.wss", 0.562, 1},
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt3.wss", 0.562, 1},
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt4.wss", 0.562, 1}
			};
			parkety[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt1.wss", 0.562, 1}, 
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt2.wss", 0.562, 1},
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt3.wss", 0.562, 1},
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt4.wss", 0.562, 1}
			};
			wave_plate[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt1.wss", 0.562, 1}, 
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt2.wss", 0.562, 1},
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt3.wss", 0.562, 1},
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt4.wss", 0.562, 1}
			};
			lepenka[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt1.wss", 0.562, 1}, 
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt2.wss", 0.562, 1},
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt3.wss", 0.562, 1},
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step_dirt4.wss", 0.562, 1}
			};
			snow[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step.wss", 0.562, 1}
			};
			crawl[] = {
				{"\ls_armor_redfor\uniform\cis\b1\data\sounds\B1step.wss", 0.562, 1}
			};
		};
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

	class k_barracks_unit: O_officer_F
	{
		scope = 2;
		displayname = "Trooper (Barracks)";
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		icon = "kobra_core\442_icons\data\icon_rifleman.paa";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		uniformclass = "k_barracks_uniform";
		side = 1;
		faction="kobra_b";
		editorSubCategory="442_trooper";
		movesFatigue="CfgMovesFatigueTrooper";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\data\uniform\Barracks.paa"
		};
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
		linkedItems[] = 
		{
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
	};
	#include "unit.hpp"
//////////////backpack/////////////
	class k_clone_backpack_base: B_Kitbag_rgr
	{
		author = "KOBRA Mod Team";
		scope = 0;
		picture = "";
		displayname = "";
		model = "";
		maximumload = 200;
		hiddenselections[] = {};
	};
	class k_clone_rto_backpack_base: k_clone_backpack_base
	{
		maximumload=100;
		picture="";
		displayName="";
		tf_dialog="SWLB_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
	};
	#include "backpack.hpp"
};