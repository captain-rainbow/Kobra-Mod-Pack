    class k_swla_unit_base: B_Soldier_02_f
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		model="442_units\clones\base_body.p3d";
		editorPreview="";
		picture = "442_units\clones\data\ui\body.paa";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		role="Rifleman";
		author="kripto202";
		uniformclass="k_swla_uniform_base";
		faction="kobra";
		editorSubCategory="swla_44_trooper";
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
		uniformclass="k_swla_uniform_mc_base";
		picture = "442_units\clones\data\ui\body_mc.paa";
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





////units with loadouts
	class k_swla_unit_p2_dc15a: k_swla_unit_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "Trooper (DC-15A)";
		//icon = "";
		attendant = 0;
		engineer = false;
		canDeactivateMines="false";
		linkedItems[] = 
		{
			"k_p2_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"k_p2_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[] = 
		{
			"442_DC15A",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_DC15A",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_762_30rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"swlw_beltgrenade_mag",
			"swlw_beltgrenade_mag",
			"swlw_beltgrenade_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_762_30rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"swlw_beltgrenade_mag",
			"swlw_beltgrenade_mag",
			"swlw_beltgrenade_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
	};
	class k_swla_unit_p2_dc15s: k_swla_unit_p2_dc15a
	{
		displayname = "Trooper (DC-15S)";
		weapons[] = 
		{
			"442_DC15A",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_DC15A",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_556_30rnd_blue_mag",
			"442_556_30rnd_blue_mag",
			"442_556_30rnd_blue_mag",
			"442_556_30rnd_blue_mag",
			"swlw_beltgrenade_mag",
			"swlw_beltgrenade_mag",
			"swlw_beltgrenade_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_556_30rnd_blue_mag",
			"442_556_30rnd_blue_mag",
			"442_556_30rnd_blue_mag",
			"442_556_30rnd_blue_mag",
			"swlw_beltgrenade_mag",
			"swlw_beltgrenade_mag",
			"swlw_beltgrenade_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
	};

