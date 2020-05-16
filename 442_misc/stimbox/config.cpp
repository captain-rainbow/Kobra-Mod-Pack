class CfgPatches
{
	class 442_stimbox
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"442_stimbox"
		};
		author="kripto202";
	};
};
class CfgVehicles
{
	class Items_base_F;
	class 442_stimbox: Items_base_F
	{
		scope=2;
		scopecurator=2;
		author="kripto202";
		displayName="Stimbox";
		model="442_misc\stimbox\stimbox.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		simulation="thingx";
		hiddenselections[]=
		{
			"body1",
			"body2",
			"screen"
		};
		hiddenselectionstextures[]=
		{
			"442_misc\stimbox\data\body1_co.paa",
			"442_misc\stimbox\data\body2_co.paa",
			"442_misc\stimbox\data\screen_co.paa"
		};
	};
};