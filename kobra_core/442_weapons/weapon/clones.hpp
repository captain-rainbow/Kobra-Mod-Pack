///dc15a   
    class 442_DC15A: 442_rifle_base
	{
		scope=2;
		model="442_weapons\clones\dc15a\dc15a.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\SWLW_clones\rifles\dc15a\anims\dc15a_handanim.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\SWLW_clones\rifles\dc15a\data\ui\DC15A_ui.paa";
		magazines[]=
		{
			"442_762_20rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"442_762_60rnd_blue_mag",
			"442_762_100rnd_blue_mag",

			"442_762_20rnd_red_mag",
			"442_762_30rnd_red_mag",
			"442_762_60rnd_red_mag",
			"442_762_100rnd_red_mag",

			"442_762_20rnd_orange_mag",
			"442_762_30rnd_orange_mag",
			"442_762_60rnd_orange_mag",
			"442_762_100rnd_orange_mag",

			"442_762_20rnd_green_mag",
			"442_762_30rnd_green_mag",
			"442_762_60rnd_green_mag",
			"442_762_100rnd_green_mag",

			"442_762_20rnd_pink_mag",
			"442_762_30rnd_pink_mag",
			"442_762_60rnd_pink_mag",
			"442_762_100rnd_pink_mag",

			"442_762_20rnd_purple_mag",
			"442_762_30rnd_purple_mag",
			"442_762_60rnd_purple_mag",
			"442_762_100rnd_purple_mag",

			"442_762_20rnd_black_mag",
			"442_762_30rnd_black_mag",
			"442_762_60rnd_black_mag",
			"442_762_100rnd_black_mag",

			"442_762_20rnd_yellow_mag",
			"442_762_30rnd_yellow_mag",
			"442_762_60rnd_yellow_mag",
			"442_762_100rnd_yellow_mag",

			"442_762_20rnd_blue_b_mag",
			"442_762_30rnd_blue_b_mag",
			"442_762_60rnd_blue_b_mag",
			"442_762_100rnd_blue_b_mag",

			"442_762_20rnd_red_b_mag",
			"442_762_30rnd_red_b_mag",
			"442_762_60rnd_red_b_mag",
			"442_762_100rnd_red_b_mag",

			"442_762_20rnd_orange_b_mag",
			"442_762_30rnd_orange_b_mag",
			"442_762_60rnd_orange_b_mag",
			"442_762_100rnd_orange_b_mag",

			"442_762_20rnd_green_b_mag",
			"442_762_30rnd_green_b_mag",
			"442_762_60rnd_green_b_mag",
			"442_762_100rnd_green_b_mag",

			"442_762_20rnd_pink_b_mag",
			"442_762_30rnd_pink_b_mag",
			"442_762_60rnd_pink_b_mag",
			"442_762_100rnd_pink_b_mag",

			"442_762_20rnd_purple_b_mag",
			"442_762_30rnd_purple_b_mag",
			"442_762_60rnd_purple_b_mag",
			"442_762_100rnd_purple_b_mag",

			"442_762_20rnd_white_b_mag",
			"442_762_30rnd_white_b_mag",
			"442_762_60rnd_white_b_mag",
			"442_762_100rnd_white_b_mag",

			"442_762_20rnd_yellow_b_mag",
			"442_762_30rnd_yellow_b_mag",
			"442_762_60rnd_yellow_b_mag",
			"442_762_100rnd_yellow_b_mag",
		};
		displayname="DC-15A rifle";
		descriptionShort="Clone trooper rifle";
		selectionFireAnim="zasleh";
		hiddenSelections[]=
		{
			"camo1",
			"sight"
		};
		hiddenSelectionsTextures[]=
		{
			"442_weapons\clones\dc15a\data\body_co.paa",
			"\442_weapons\clones\dc15a\data\optic\training_blue.paa"
		};
		class Library
		{
			libTextDesc="";
		};
		drySound[]=
		{
			"",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"SWLW_clones\pistols\dc17\sounds\DC17_reload.wss",
			0.56234133,
			1,
			30
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"SWLW_clones\smgs\dc15s\sounds\DC15S_1",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"SWLW_clones\smgs\dc15s\sounds\DC15S_2",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"SWLW_clones\smgs\dc15s\sounds\DC15S_3",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.096001;
			dispersion=0.00030149999;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"SWLW_clones\smgs\dc15s\sounds\DC15S_1",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"SWLW_clones\smgs\dc15s\sounds\DC15S_2",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"SWLW_clones\smgs\dc15s\sounds\DC15S_3",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.104347;
			dispersion=0.00014545;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		maxRecoilSway=0.0125;
		recoil="SWLW_recoil";
		swayDecaySpeed=1.25;
		dexterity=1.7;
		initspeed=800;
		inertia=0.5;
		class OpticsModes
		{
			class sight
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]={""};
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=0.5;
				opticsZoomInit=0.75;
				discreteInitIndex=0;
				distanceZoomMin=200;
				distanceZoomMax=200;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare="false";
				cameraDir="";
			};
			class scope: sight
			{
				opticsID = 2;
				opticsZoomMin = 0.125;
				opticsZoomMax = 0.125;
				opticsZoomInit = 0.125;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
			};
		};
		class FlashLight
		{
			color[]={180,160,130};
			ambient[]={0.89999998,0.80000001,0.69999999};
			intensity=100;
			size=1;
			innerAngle=5;
			outerAngle=100;
			coneFadeCoef=10;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1.5;
			flareMaxDistance=100;
			dayLight=1;
			class Attenuation
			{
				start=0;
				constant=0.5;
				linear=0.1;
				quadratic=0.2;
				hardLimitStart=27;
				hardLimitEnd=34;
			};
			scale[]={0};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=130;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
	};
    class 442_DC15A_ugl: 442_DC15A
	{
		muzzles[]=
		{
			"this",
			"EGLM"
		};
		displayName="DC-15A rifle UGL";
		model="442_weapons\clones\dc15a\dc15a_ugl.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"sight"
		};
		hiddenSelectionsTextures[]=
		{
			"442_weapons\clones\dc15a\data\body_co.paa",
			"\SWLW_clones\rifles\dc15a\data\DC15A_ugl_co.paa",
			"\442_weapons\clones\dc15a\data\optic\training_blue.paa"
		};
		class EGLM: UGL_F
		{
			displayName="Grenade launcher";
			descriptionShort="UGL";
			useModelOptics=0;
			useExternalOptic=0;
			magazines[]={};
			magazineWell[]={};
			cameraDir="OP_look";
			discreteDistance[]={100,200,300,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=150;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
	};
    class 442_DC15A_MC: 442_DC15A
	{
		muzzles[] = 
		{
			"this",
			"442_MC"
		};
		displayName="DC-15A rifle UBSG";
		model="442_weapons\clones\dc15a\dc15a_ugl.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"sight"
		};
		hiddenSelectionsTextures[]=
		{
			"442_weapons\clones\dc15a\data\body_co.paa",
			"\SWLW_clones\rifles\dc15a\data\DC15A_ugl_co.paa",
			"\442_weapons\clones\dc15a\data\optic\training_blue.paa"
		};
		class 442_MC: Rifle_Base_F
		{
			magazines[] = {};
			Displayname = "Scattergun Mode";
			displaynameshort = "Scattergun";
			discreteDistance[] = {50};
			discreteDistanceInitIndex = 0;
			initSpeed = 400;
			reloadMagazineSound[] = {"\SWLW_main\sounds\scatter_reload", 0.562341, 1, 30};
			cursor = "sgun";
			recoil = "recoil_MSBS65_ubs";
			fireSpreadAngle = 0.95;
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL", 1, 1, 10};
					soundClosure[] = {"closure1", 1};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"\SWLW_main\sounds\scatter", 0.707946, 1, 200};
					begin2[] = {"\SWLW_main\sounds\scatter", 0.707946, 1, 200};
					soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
				};
				reloadTime = 0.3;
				dispersion = 0.01245;
				minRange = 2;
				minRangeProbab = 0.95;
				midRange = 30;
				midRangeProbab = 0.95;
				maxRange = 100;
				maxRangeProbab = 0.3;
				aiRateOfFire = 1;
				aiRateOfFireDistance = 30;
			};
		};
	};
///dc15s
    class 442_dc15s: 442_rifle_base
	{
		scope=2;
		model="442_weapons\clones\dc15s\dc15s.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"sights"
		};
		hiddenselectionstextures[] = 
		{
			"\SWLW_clones\smgs\dc15s\data\dc15s_co.paa",
			"\442_weapons\clones\dc15a\data\optic\training_blue.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\SWLW_clones\smgs\dc15s\data\ui\DC15s_ui.paa";
		magazines[]=
		{
			"442_556_30rnd_blue_mag",
			"442_556_60rnd_blue_mag"
		};
		displayname="DC-15s carbine";
		descriptionShort="Clone trooper carbine";
		selectionFireAnim="zasleh";
		class Library
		{
			libTextDesc="";
		};
		drySound[]=
		{
			"",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\SWLW_clones\pistols\dc17\sounds\DC17_reload.wss",
			0.56234133,
			1,
			30
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_1",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_2",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_3",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.096001;
			dispersion=0.0008;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_1",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_2",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_3",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.070011;
			dispersion=0.0008;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		inertia=1;
		dexterity=1.7;
		initSpeed=-1;
		recoil="SWLW_recoil";
		maxRecoilSway=0.015;
		swayDecaySpeed=1.25;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
	};
    class 442_dc15s_ab: 442_dc15s
	{
		displayname = "DC-15AB";
		inertia = 1.5;
		reloadTime=0.05;
		hiddenselections[] = 
		{
			"camo1",
			"sight"
		};
		hiddenselectionstextures[] = 
		{
			"\SWLW_clones\smgs\dc15s\data\dc15s_co.paa",
			"\442_weapons\clones\dc15a\data\optic\training_red.paa"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_1",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_2",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_3",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.096001;
			dispersion=0.0008;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_1",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_2",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_3",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.05;
			dispersion=0.0008;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		magazines[] = 
		{
			"442_45_45rnd_blue_mag",
            "442_45_100rnd_blue_mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=50;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
	};
///dc15sa
    class 442_DC15SA: Pistol_Base_F
	{
		author="kripto202";
		scope=2;
		model="\SWLW_clones_spec\DC15SA.p3d";
		picture="\SWLW_clones_spec\data\ui\DC15SA_ui.paa";
		muzzles[]=
		{
			"this"
		};
		magazines[]=
		{
			"442_127x33_10rnd_blue_mag"
		};
		magazineReloadSwitchPhase=0.40000001;
		reloadAction="GestureReloadPistol";
		displayName="DC-15SA";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLW_clones_spec\data\DC15SA_co.paa"
		};
		modes[]=
		{
			"single"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		reloadMagazineSound[]=
		{
			"SWLW_clones_spec\sounds\DC15SA_reload.wss",
			0.56234133,
			1,
			30
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"SWLW_clones_spec\sounds\DC15SA_fire.wss",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"SWLW_clones_spec\sounds\DC15SA_fire.wss",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"SWLW_clones_spec\sounds\DC15SA_fire.wss",
					1,
					1,
					1800
				};
				begin4[]=
				{
					"SWLW_clones_spec\sounds\DC15SA_fire.wss",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.096001;
			dispersion=0.0099999998;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		initspeed=-1;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=1.4;
		dexterity=1.7;
		recoil="recoil_pistol_4five";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=24;
			holsterScale=0.89999998;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
		};
	};
///dc15x
    class 442_DC15X: 442_rifle_base
	{
		scope=2;
		model="SWLW_clones\rifles\dc15x\DC15X.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\SWLW_clones\rifles\dc15x\anims\dc15x_handanim.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\SWLW_clones\rifles\dc15x\data\ui\DC15X_ui.paa";
		magazines[]=
		{
			"442_408_10rnd_blue_mag"
		};
		displayname="DC-15X";
		descriptionShort="";
		selectionFireAnim="zasleh";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLW_clones\rifles\dc15x\data\DC15X_co.paa"
		};
		maxZeroing=1200;
		opticsZoomMin=0.0099999998;
		opticsZoomMax=0.041999999;
		opticsZoomInit=0.041999999;
		discretefov[]={0.041999999,0.0099999998};
		discreteInitIndex=0;
		distanceZoomMin=100;
		distanceZoomMax=1200;
		discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
		class Library
		{
			libTextDesc="";
		};
		drySound[]=
		{
			"",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"SWLW_clones\pistols\dc17\sounds\DC17_reload.wss",
			0.56234133,
			1,
			30
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"SWLW_clones\smgs\dc15s\sounds\DC15S_1",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"SWLW_clones\smgs\dc15s\sounds\DC15S_2",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"SWLW_clones\smgs\dc15s\sounds\DC15S_3",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.1;
			dispersion=0.00001;
			initSpeed=910;
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		maxRecoilSway=0.0125;
		recoil="SWLW_recoil";
		swayDecaySpeed=1.25;
		dexterity=1.7;
		initSpeed = -1;
		inertia=1.4;
		modelOptics[] = {"\A3\Weapons_F\acc\reticle_lrps_F", "\A3\Weapons_F\acc\reticle_lrps_z_F"};
		class OpticModes
		{
			class Scope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.0099999998;
				opticsZoomMax=0.041999999;
				opticsZoomInit=0.041999999;
				discretefov[]={0.041999999,0.0099999998};
				discreteInitIndex=0;
				distanceZoomMin=100;
				distanceZoomMax=1200;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex=0;
				memoryPointCamera="opticView";
				thermalMode[] = {0, 1};
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				opticsFlare="true";
				cameraDir="";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=130;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
	};
	class 442_DC15Y: 442_DC15X
	{
		displayname="DC-15Y";
		initSpeed = -1;
		magazines[]=
		{
			"442_127x108_5rnd_blue_mag"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"SWLW_clones\smgs\dc15s\sounds\DC15S_1",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"SWLW_clones\smgs\dc15s\sounds\DC15S_2",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"SWLW_clones\smgs\dc15s\sounds\DC15S_3",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.096001;
			dispersion=0.0001;
			initSpeed=910;
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
	};

///dc17
    class 442_DC17: Pistol_Base_F
	{
		author="kripto202";
		_generalMacro="hgun_P07_F";
		scope=2;
		model="SWLW_clones\pistols\dc17\DC17.p3d";
		picture="\SWLW_clones\pistols\dc17\data\ui\DC17_ui.paa";
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"\SWLW_clones\pistols\dc17\data\dc17_co.paa"
		};
		muzzles[]=
		{
			"this",
			"EGLM"
		};
		magazines[]=
		{
			"442_dc17_mag"
		};
		reloadAction="GestureReloadPistol";
		displayName="DC-17";
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\dry_4_Five",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"SWLW_clones\pistols\dc17\sounds\DC17_reload.wss",
			0.56234133,
			1,
			30
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"SWLW_clones\pistols\dc17\sounds\DC17_1",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"SWLW_clones\pistols\dc17\sounds\DC17_1",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"SWLW_clones\pistols\dc17\sounds\DC17_1",
					1,
					1,
					1800
				};
				begin4[]=
				{
					"SWLW_clones\pistols\dc17\sounds\DC17_1",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.0960001;
			dispersion=0.01015;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		class EGLM: UGL_F
		{
			displayName="Flare gun";
			descriptionShort="";
			useModelOptics="false";
			useExternalOptic="false";
			magazines[]=
			{
				"SWLW_flareRed_mag",
				"SWLW_smokeRed_mag"
			};
			magazineWell[]={};
			cameraDir="OP_look";
			discreteDistance[]={100};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye"
			};
			discreteDistanceInitIndex=1;
		};
		inertia=1.4;
		dexterity=1.7;
		initSpeed=300;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		recoil="recoil_pistol_4five";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=24;
			holsterScale=0.89999998;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
		};
	};
///gl
    class 442_GL: 442_rifle_base
	{
		scope=2;
		model="442_weapons\clones\gl\gl.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"sight"
		};
		hiddenselectionstextures[] = 
		{
			"\SWLW_clones\rifles\gl\data\gl_co.paa",
			"\442_weapons\clones\dc15a\data\optic\training_blue.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\swlw_clones\rifles\gl\data\ui\GL_ui.paa";
		magazines[]=
		{
			"442_40_6rnd_he_blue_mag"
		};
		displayname="Grenade launcher";
		descriptionShort="";
		selectionFireAnim="zasleh";
		class Library
		{
			libTextDesc="";
		};
		drySound[]=
		{
			"",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"SWLW_clones\pistols\dc17\sounds\DC17_reload.wss",
			0.56234133,
			1,
			30
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		cameraDir="OP_look";
		discreteinitindex = 0;
		discretedistance[] = {100,200,300,400};
		discreteDistanceCameraPoint[]=
		{
			"OP_eye",
			"OP_eye2",
			"OP_eye3",
			"OP_eye4"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"SWLW_clones\rifles\gl\sounds\gl",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"SWLW_clones\rifles\gl\sounds\gl",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"SWLW_clones\rifles\gl\sounds\gl",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.15000001;
			dispersion=0.0030149999;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		muzzles[]=
		{
			"this"
		};
		initspeed=80;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=180;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
	};
///rps6
    class 442_RPS6: Launcher_Base_F
	{
		author="kripto202";
		_generalMacro="launch_RPG32_F";
		scope=2;
		displayName="RPS-6 rocket launcher";
		model="SWLW_clones\launchers\rps6\RPS6.p3d";
		picture="\SWLW_clones\launchers\rps6\data\ui\RPS6_ui.paa";
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"\442_weapons\clones\rps6\data\kobra_rps6.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\SWLW_clones\launchers\rps6\anims\RPS6_handanim.rtm"
		};
		reloadAction="ReloadRPG";
		recoil="recoil_empty";
		maxZeroing=800;
		weaponInfoType = "RscOpticsRangeFinderVorona";
		modelOptics = "A3\Weapons_F_Tank\acc\reticle_Vorona.p3d";
		opticsZoomMin=0.0623;
		opticsZoomMax=0.0623;
		opticsZoomInit=0.0623;
		cameraDir="look";
		ace_overpressure_angle=45;
		ace_overpressure_damage=0.69999999;
		ace_overpresssure_priority=1;
		ace_overpressure_range=5;
		ace_nlaw_enabled = 1;
		
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsRPGNT";
			};
		};
		class OpticsModes
		{
			class optic
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsZoomMin = 0.0875;
				opticsZoomMax = 0.0875;
				opticsZoomInit = 0.0875;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				cameraDir = "look";
				visionMode[] = {"Normal", "NVG"};
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
			};
		};
		magazines[]=
		{
			"442_rps6_heat_mag"
		};
		modes[]=
		{
			"Single",
			"Overfly"
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\nlaw", 1.99526, 1, 1800};
				soundBegin[] = {"begin1", 1};
				soundSetShot[] = {"Launcher_NLAW_Shot_SoundSet", "Launcher_NLAW_Tail_SoundSet"};
			};
			recoil = "recoil_single_nlaw";
			aiRateOfFire = 7;
			aiRateOfFireDistance = 500;
			minRange = 25;
			minRangeProbab = 0.8;
			midRange = 50;
			midRangeProbab = 0.8;
			maxRange = 790;
			maxRangeProbab = 0.8;
			ace_missileGuidance_attackProfile = "ace_nlaw_directAttack";
		};
		class Overfly: Single
		{
			textureType = "overfly";
			displayName = "Overfly Top Attack";
			aiRateOfFire = 7;
			aiRateOfFireDistance = 500;
			minRange = 50;
			minRangeProbab = 0.7;
			midRange = 100;
			midRangeProbab = 0.95;
			maxRange = 790;
			maxRangeProbab = 0.95;
			ace_missileGuidance_attackProfile = "ace_nlaw_overflyTopAttack";
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",
			0.44668359,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",
			0.25118864,
			1,
			10
		};
		canLock=1;
		weaponLockDelay=3;
		lockAcquire=0;
		inertia=1;
		aimTransitionSpeed=0.5;
		dexterity=1;
		cmimmunity = 0.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=150;
		};
		descriptionShort="";
		class Library
		{
			libTextDesc="";
		};
	};
///westarm5
    class 442_WestarM5: 442_rifle_base
	{
		scope=2;
		model="\SWLW_clones\smgs\westar_m5\WestarM5.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\SWLW_clones\smgs\westar_m5\anims\westarm5_handanim.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\SWLW_clones\smgs\westar_m5\data\ui\WestarM5_ui.paa";
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"\SWLW_clones\smgs\westar_m5\data\westarm5_co.paa"
		};
		magazines[]=
		{
			"442_65_30rnd_blue_mag",
			"442_65_60rnd_blue_mag",
			"442_65_100rnd_blue_mag",
		};
		displayname="Westar M5";
		descriptionShort="";
		selectionFireAnim="zasleh";
		class Library
		{
			libTextDesc="";
		};
		drySound[]=
		{
			"",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\SWLW_clones\pistols\dc17\sounds\DC17_reload.wss",
			0.56234133,
			1,
			30
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		recoil="SWLW_recoil";
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_2",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_2",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_3",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.096001;
			dispersion=0.000020000001;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_1",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_2",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_3",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.063157;
			dispersion=0.000014545;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=-1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"442_WestarM5_scope"
				};
			};
		};
	};
    class 442_WestarM5_scope: ItemCore
	{
		displayName="Westar M-5 scope";
		author="kripto202";
		picture="\SWLW_clones\smgs\westar_m5\data\ui\westarm5_scope_ui.paa";
		model="\SWLW_clones\smgs\westar_m5\WestarM5_scope.p3d";
		scope=2;
		descriptionShort="";
		weaponInfoType="RscWeaponZeroing";
		hiddenselections[] =
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"\442_weapons\clones\westar_m5\data\kobra_westarm5_scope.paa"
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=8;
			opticType=1;
			optics=1;
			modelOptics = "\A3\Weapons_f\acc\reticle_marksman_F";
			class OpticsModes
			{
				class WestarM5scope_sights
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
				class WestarM5scope_scope: WestarM5scope_sights
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsZoomMin=0.0625;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					visionMode[] = {"Normal", "NVG", "Ti"};
					thermalMode[] = {0, 1};
					discretefov[] = {0.125, 0.0625};
					discreteInitIndex = 0;
					discreteDistanceInitIndex = 0;
					discreteDistance[] = {100};
					distanceZoomMin=300;
					distanceZoomMax=1200;
					modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
				};
			};
		};
		inertia=0.1;
	};
///z6
	class 442_Z6: 442_rifle_base
	{
		ace_overheating_mrbs=100000;
		ace_overheating_slowdownFactor=1e-006;
		ace_overheating_allowSwapBarrel=1;
		ace_overheating_dispersion=0;
		scope=1;
		author="SW Legion Studios";
		displayName="Z6 Rotary Blaster";
		model="SWLW_clones\machineguns\z6\Z6.p3d";
		picture="\SWLW_clones\machineguns\z6\data\ui\Z6_ui.paa";
		magazines[]=
		{
			"442_556_100rnd_blue_mag",
			"442_556_150rnd_blue_mag",
			"442_556_200rnd_blue_mag",
			"442_556_500rnd_blue_mag"
		};
		muzzles[]=
		{
			"this",
			"Explosive"
		};
		reloadAction="ReloadMagazine";
		hiddenselections[] =
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"\SWLW_clones\machineguns\z6\data\z6_co.paa"
		};
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0099999998;
		swayDecaySpeed=0.7;
		inertia=2.5;
		initSpeed=909;
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\SWLW_clones\machineguns\z6\anims\Z6_handanim.rtm"
		};
		dexterity=1;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		flash="gunfire";
		flashSize=3;
		modes[] = 
		{
			"FullAutoFast", 
			"FullAutoSlow", 
			"close", 
			"short", 
			"medium", 
			"far_optic1", 
			"far_optic2"
		};
		class FullAutoSlow: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"SWLW_clones\machineguns\z6\sounds\Z6_1.wss",
					1,
					1,
					500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.0.096001;
			dispersion=0.0099999998;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			showToPlayer = 1;
		};
		class FullAutoFast: FullAutoSlow
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"SWLW_clones\machineguns\z6\sounds\Z6_1.wss",
					1,
					1,
					500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.06;
			texturetype = "fastAuto";
			dispersion=0.0099999998;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
		};
		class close: FullAutoFast
		{
			showToPlayer=0;
			aiRateOfFire=0.05;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.05;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: FullAutoSlow
		{
			burst = 20;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
			showToPlayer = 0;
		};
		class far_optic1: medium
		{
			burst=10;
			requiredOpticType=1;
			aiRateOfFire=5;
			aiRateOfFireDistance=650;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			burst=5;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
		};
		recoil="442_Z6_recoil";
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		drySound[]=
		{
			"SWLW_clones\machineguns\z6\sounds\Z6_empty.wss",
			2,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"SWLW_main\Carbines\DC15S\sounds\DC15s_reload.wss",
			1,
			1,
			30
		};
		reloadSound[]=
		{
			"",
			1,
			1
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=176;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
		};
		/*class Explosive: 442_Z6
		{
			author="SW Legion Studios";
			displayName="HE mode";
			initspeed=80;
			magazines[]=
			{
				"442_40_6rnd_he_blue_mag"
			};
			class Single: Mode_SemiAuto
			{
				sounds[]=
				{
					"StandardSound"
				};
				class BaseSoundModeType;
				class StandardSound: BaseSoundModeType
				{
					begin1[]=
					{
						"SWLW_clones\machineguns\z6\sounds\Z6_1.wss",
						1,
						1,
						500
					};
					soundBegin[]=
					{
						"begin1",
						1
					};
				};
				reloadTime=1;
				dispersion=0.0099999998;
				minRange=0;
				minRangeProbab=0.89999998;
				midRange=15;
				midRangeProbab=0.69999999;
				maxRange=30;
				maxRangeProbab=0.1;
			};
			modes[]=
			{
				"Single"
			};
		};*/
	};
	class 442_e6z: 442_Z6
	{
		displayname = "E6Z Rotary Blaster";
		hiddenselectionstextures[] = 
		{
			"442_weapons\clones\z6\data\kobra_e6z.paa"
		};
		magazines[]=
		{
			"442_556_100rnd_blue_mag",
			"442_556_150rnd_blue_mag",
			"442_556_200rnd_blue_mag",
			"442_556_500rnd_blue_mag"
		};
		/*class explosive: explosive
		{
			magazines[] = 
			{
				"442_40_6rnd_he_blue_mag"
			};
		};*/
	};