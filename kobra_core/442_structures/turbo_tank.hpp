    class 442_turbotank: House_F 
    {
		scope = 2;
		scopecurator = 2;
		author = "kripto202";
		displayName = "Turbo Tank";
		model = "\442_structures\turbo_tank\turbotank.p3d";
		editorcategory = "kobra";
		editorsubcategory = "442_item";
		vehicleClass = Structures;
		hiddenselections[] = 
		{
			"armor",
			"axel",
			"body",
			"catwalk",
			"interior1",
			"interior2",
			"interior3",
			"wheel"
		};
		hiddenselectionstextures[] = 
		{
			"442_structures\turbo_tank\data\armor_CO.paa",
			"442_structures\turbo_tank\data\axel_CO.paa",
			"442_structures\turbo_tank\data\body_CO.paa",
			"442_structures\turbo_tank\data\catwalk_CO.paa",
			"442_structures\turbo_tank\data\interior_1_CO.paa",
			"442_structures\turbo_tank\data\interior_2_CO.paa",
			"442_structures\turbo_tank\data\interior_3_CO.paa",
			"442_structures\turbo_tank\data\wheel_CO.paa",
		};
	};
	class 442_turbotank_m: 442_turbotank
	{
		displayName = "Turbo Tank (Captured)";
		hiddenselectionstextures[] = 
		{
			"442_structures\turbo_tank\data\armor_CO.paa",
			"442_structures\turbo_tank\data\axel_CO.paa",
			"442_structures\turbo_tank\data\body_m_CO.paa",
			"442_structures\turbo_tank\data\catwalk_m_CO.paa",
			"442_structures\turbo_tank\data\interior_1_m_CO.paa",
			"442_structures\turbo_tank\data\interior_2_m_CO.paa",
			"442_structures\turbo_tank\data\interior_3_CO.paa",
			"442_structures\turbo_tank\data\wheel_CO.paa",
		};
	};