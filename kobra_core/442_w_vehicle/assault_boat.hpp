class 442_boat_armed: Boat_Armed_01_minigun_base_F
	{
		author = "KOBRA Mod Team";
		scope = 2;
		accuracy = 1.5;
		displayname = "Assault Boat";
		crew = "k_swla_unit_p2_dc15a";
		faction = "kobra";
		editorsubcategory = "442_boat";
		side = 1;
		typicalCargo[] = {"44_swla_unit"};
		hiddenselectionstextures[] = 
		{
			"\442_w_vehicle\boat\data\rep_boat_hull.paa",
			"\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_co.paa",
			"\442_w_vehicle\boat\data\rep_boat_crow.paa",
		};
        class texturesources
        {
            class default
            {
                displayname = "Republic";
                author = "KOBRA Mod Team";
                textures[] = 
                {
                    "\442_w_vehicle\boat\data\rep_boat_hull.paa",
                    "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_co.paa",
                    "\442_w_vehicle\boat\data\rep_boat_crow.paa",
                };
                factions[] = 
                {
                    "kobra"
                };
            };
            class 442: default
            {
                displayname = "442nd Siege Battalion";
                textures[] = 
                {
                    "\442_w_vehicle\boat\data\442_boat_hull.paa",
                    "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_co.paa",
                    "\442_w_vehicle\boat\data\442_boat_crow.paa",
                };
            };
            class black_legion: default
            {
                displayname = "Black Legion";
                textures[] = 
                {
                    "\442_w_vehicle\boat\data\bl_boat_hull.paa",
                    "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_co.paa",
                    "\442_w_vehicle\boat\data\bl_boat_crow.paa",
                };
            };
        };
		class Turrets: Turrets
		{
			class FrontTurret: FrontTurret
			{
				weapons[] = {"442_gmg"};
				Magazines[] = 
                {
                    "442_40_50rnd_he_blue_mag",
                    "442_40_50rnd_he_blue_mag",
                    "442_40_50rnd_he_blue_mag",
                    "442_40_50rnd_he_blue_mag",
                };
			};
			class RearTurret: RearTurret
			{
				weapons[] = {"442_minigun"};
				Magazines[] = 
				{
					"442_127x99_500rnd_blue_mag",
					"442_127x99_500rnd_blue_mag",
				};
			};
		};
	};