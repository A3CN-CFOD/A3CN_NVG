class cfgMods
{
	class Mod_Base;
	class A3CN_NVG: Mod_Base
	{
		dir="@A3CN_NVG";
		name="A3CN NightVision Scopes Mod";
		picture="\a3cn_nvg\mod.paa";
		actionName="Website";
		action="http://www.a3cn.com.br";
		logo="\a3cn_nvg\mod.paa";
		logoOver="\a3cn_nvg\mod.paa";
		tooltip="A3CN NightVision Scopes Mod";
		tooltipOwned="A3CN NightVision Scopes Mod Owned";
		overview="A3CN NVG is a mod that gives night vision capabilyties to all vanilla longrange scopes";
		author="Hippye";
		overviewPicture="\a3cn_nvg\mod.paa";
		overviewText="A3CN NightVisionScopes Mod";
		logosmall="\a3cn_nvg\mod_small.paa";
		hideName=1;
		hidePicture=0;
	};
	author="[A3CN]Hippye";
	timepacked="1459138415";
};
class CfgPatches
{
	class a3cn_scopes
	{
		units[]={};
		weapons[]= {};
		requiredversion=0.1;
		requiredaddons[]=
		{
			"A3_Weapons_F_Acc",
			"asdg_jointrails"
		};
	};
};
class asdg_OpticRail;
class asdg_FrontSideRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems {};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class optic_tws;
	class optic_Nightstalker;
	class optic_nvs;
	class optic_SOS: ItemCore
	{
		descriptionShort="Marksman Optical Sights<br />Magnification: 2,5x-5x<br/>NightVision";
		ACE_NightVision_grain=0;
		ACE_NightVision_blur=0;
		ACE_NightVision_radBlur=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
				};
				class Iron: Snip
				{
				};
			};
		};
	};
	class optic_DMS: ItemCore
	{
		descriptionShort="DMS<br />magnification: 2x-4x<br/>NightVision";
		ACE_NightVision_grain=0;
		ACE_NightVision_blur=0;
		ACE_NightVision_radBlur=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
				};
				class Iron: Snip
				{
				};
			};
		};
	};
	class optic_LRPS: ItemCore
	{
		descriptionShort="Long-Range Precision Scope<br />Magnification: 6x-25x";
		ACE_NightVision_grain=0;
		ACE_NightVision_blur=0;
		ACE_NightVision_radBlur=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
				};
			};
		};
	};
	class optic_AMS_base: ItemCore
	{
		descriptionShort="Advanced Marksman Scope<br />Magnification:3x-10x<br />NightVision";
		DLC="Mark";
		ACE_NightVision_grain=0;
		ACE_NightVision_blur=0;
		ACE_NightVision_radBlur=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class AMS
				{
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
				};
			};
		};
	};
	class optic_KHS_base: ItemCore
	{
		descriptionShort="Kahlia<br />Magnification: 5x-11x<br/>NightVision";
		DLC="Mark";
		ACE_NightVision_grain=0;
		ACE_NightVision_blur=0;
		ACE_NightVision_radBlur=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class KHS
				{
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
				};
				class Iron
				{
				};
			};
		};
	};
};
