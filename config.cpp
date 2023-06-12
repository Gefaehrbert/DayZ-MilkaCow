class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base;
	class MilkaChocolate: Zagorky_ColorBase
	{
		scope=2;
		displayName="Milka Chocolate";
		descriptionShort="Fines German Chocolate";
		hiddenSelections[]=
		{
			"camoground"
		};
		hiddenSelectionsTextures[]=
		{
			"MilkaCow\data\MilkaChocolate_co.paa"
		};
	
class CfgPatches

{
	class MilkaCow
	{
		units[]=
		{
			"Animal_BosTaurus"
		};
		weapons[]={};
		requiredVersion=1.18;
		requiredAddons[]=
		{
			"DZ_Animals"
		};
	};
};
class CfgVehicles
{
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
				item="MilkaChocolate";
				count=1;

			};
		};
	};
};