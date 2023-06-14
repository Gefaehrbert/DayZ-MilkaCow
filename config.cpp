class CfgPatches

{
	class MilkaCow
	{
		units[]=
		{
			"Animal_BosTaurus"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Animals",
			"DZ_Data",
			"DZ_Gear_Food",
			"DZ_Gear_Drinks"
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Animal_Base;
	class Animal_BosTaurusF;
	class Animal_BosTaurusF_Spotted;
	class MilkaCow: Animal_BosTaurusF_Spotted
	{
		scope=2;
		displayName="MilkaCow";
		descriptionShort="It produces Chocolate Milk";
		hiddenSelectionsTextures[]=
		{
			"MilkaCow\data\MilkaCow_co.paa"
		};

		class DamageSystem
		{
			class Skinning
			{
				class ObtainedChocolate
				{
				item="MilkaChocolate";
				count=10;
				};
			};
		};
	};
	class Edible_Base;
	class Zagorky_ColorBase;
	class Zagorky_Chocolate;	
	class MilkaChocolate: Zagorky_Chocolate
	{
		scope=2;
		displayName="Milka Chocolate";
		descriptionShort="Finest German Chocolate";
		hiddenSelections[]=
		{
			"camoground"
		};
		hiddenSelectionsTextures[]=
		{
			"MilkaCow\data\MilkaChocolate_co.paa"
		};
	};
};