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
	};
};
