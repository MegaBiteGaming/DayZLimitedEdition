class CfgPatches
{
	class MBLimitedEdition
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Backpacks","DZ_Gear_Containers","DZ_Gear_Consumables","DZ_Gear_Tools","DZ_Gear_Cooking","DZ_Gear_Food","DZ_Gear_Navigation","DZ_Gear_Drinks","DZ_Gear_Camping","DZ_Gear_Optics","DZ_Gear_Crafting","DZ_Weapons_Firearms","DZ_Radio","DZ_Characters_Belts"};
	};
};


class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class TacticalShirt_ColorBase;
	class MB_LimitedEdition_TacticalShirt: TacticalShirt_ColorBase
	{
		scope=2;
		displayName="Gold Tactical Shirt";
		descriptionShort="Limited edition Gold Tactical Shirt. Created by: MegaBite.";
		itemsCargoSize[]={7,9};
		itemSize[]={2,2};
		heatIsolation=0.9;
		quickBarBonus=1;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"MB-Limited\Data\MB-GOLD_pcu5jacket_co.paa",
			"MB-Limited\Data\MB-GOLD_pcu5jacket_co.paa",
			"MB-Limited\Data\MB-GOLD_pcu5jacket_co.paa"
		};
	};
	class CargoPants_ColorBase;
	class MB_GOLD_CargoPants: CargoPants_ColorBase
	{
		scope=2;
		displayName="Gold CargoPants";
		descriptionShort="Limited Edition Gold Cargo pants. Created by: MegaBite.";
		itemsCargoSize[]={7,9};
		itemSize[]={2,2};
		quickBarBonus=1;
		heatIsolation=0.9;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"MB-Limited\Data\MB-GOLD_cargopants_co.paa",
			"MB-Limited\Data\MB-GOLD_cargopants_co.paa",
			"MB-Limited\Data\MB-GOLD_cargopants_co.paa"
		};
	};
	
	
	class PlateCarrierVest;
    class MB_GOLD_PlateCarrier: PlateCarrierVest
    {
		scope=2;
        displayName="GOLD PlateCarrier";
        descriptionShort="Limited Edition Gold PlateCarrier. Created by: MegaBite.";
		itemsCargoSize[]={10,15};
		inventorySlot[]=
		{
			"Vest"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"shoulder",
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"Belt_Left"
		};
		itemSize[]={2,2};
		heatIsolation=0.9;
		visibilityModifier=0.1;
        hiddenSelections[]=
        {
            "zbytek"
        };
        hiddenSelectionsTextures[]=
        {
            "MB-Limited\Data\MB-GOLD_ballisticvest_co.paa",
            "MB-Limited\Data\MB-GOLD_ballisticvest_co.paa",
            "MB-Limited\Data\MB-GOLD_ballisticvest_co.paa"
        };
    };
	class PlateCarrierHolster; 
	class MB_GOLD_PlateCarrierHolster: PlateCarrierHolster
	{
		scope=2;
        displayName="Gold PlateCarrierHolster";
        descriptionShort="Limited Edition Gold Plate carrier holster. Created by: MegaBite.";
		itemSize[]={1,1};
		visibilityModifier=0.1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"MB-Limited\Data\MB-GOLD_ballisticvest_co.paa",
			"MB-Limited\Data\MB-GOLD_ballisticvest_co.paa",
			"MB-Limited\Data\MB-GOLD_ballisticvest_co.paa"
	    };
    };
	class PlateCarrierPouches; 
	class MB_GOLD_PlateCarrierPouches: PlateCarrierPouches
	{
		scope=2;
        displayName="Gold PlateCarrierPouches";
        descriptionShort="Limited edition Gold Plate carrier pouches. Created by: MegaBite.";
		itemsCargoSize[]={7,6};
		itemSize[]={1,1};
		visibilityModifier=0.1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"MB-Limited\Data\MB-GOLD_ballisticvest_co.paa",
			"MB-Limited\Data\MB-GOLD_ballisticvest_co.paa",
			"MB-Limited\Data\MB-GOLD_ballisticvest_co.paa"
	    };
    };	
	
	class BalaclavaMask_ColorBase;
	class MB_GOLD_Balaclava: BalaclavaMask_ColorBase
	{
		scope=2;
		displayName="Gold Balaclava";
		descriptionShort="Limited Edition Balaclava. Created by: MegaBite.";
		itemSize[]={1,1};
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"MB-Limited\Data\MB-GOLD_balaclava_co.paa",
			"MB-Limited\Data\MB-GOLD_balaclava_co.paa",
			"MB-Limited\Data\MB-GOLD_balaclava_co.paa"
		};
	};
	class Mich2001Helmet;
	class MB_GOLD_TacticalHelmet: Mich2001Helmet
	{
		scope=2;
		displayName="Gold TacticalHelmet";
		descriptionShort="Limited Edition Gold Tactical helmet. Created by: MegaBite.";
		itemSize[]={2,2};
		hiddenSelectionsTextures[]=
		{
			"MB-Limited\Data\MB-GOLD_mich2001_co.paa",
			"MB-Limited\Data\MB-GOLD_mich2001_co.paa",
			"MB-Limited\Data\MB-GOLD_mich2001_co.paa"
		};
	};
	
	class CombatBoots_ColorBase;
	class MB_GOLD_Boots_base: CombatBoots_ColorBase
{
		scope=2;
        displayName="GOLD Combat boots";
        descriptionShort="Limited Edition Gold combat boots. Created by: MegaBite.";
		inventorySlot[]=
		{
			"Feet"
		};
		itemSize[]={2,2};
		heatIsolation=0.9;
		visibilityModifier=0.80000001;
        hiddenSelections[]=
        {
            "zbytek"
        };
        hiddenSelectionsTextures[]=
        {
            "MB-Limited\Data\MB-GOLD_boots_co.paa",
            "MB-Limited\Data\MB-GOLD_boots_co.paa",
            "MB-Limited\Data\MB-GOLD_boots_co.paa"
        };
    };
	
	
		
	class OMNOGloves_ColorBase;
	class MB_GOLD_OMNOGloves: OMNOGloves_ColorBase
	{
		scope=2;
		displayName="Gold Combat Gloves";
		descriptionShort="Limited Edition Gold Combat gloves. Created by: MegaBite.";
		model = "\DZ\characters\gloves\OMNO_gloves_g.p3d";
		itemInfo[] = {"Clothing","Gloves"};
		inventorySlot = "Gloves";
		simulation = "clothing";
		visibilityModifier=0.8;
		class ClothingTypes
		{
			male = "\DZ\characters\gloves\OMNO_gloves_m.p3d";
			female = "\DZ\characters\gloves\OMNO_gloves_f.p3d";
		};
		hiddenSelections[] = 
		{
			"camoGround",
		    "camoMale",
		    "camoFemale",
		    "personality"
		};
		hiddenSelectionsTextures[]=
		{
			"MB-Limited\Data\MB-GOLD_omno_co.paa",
			"MB-Limited\Data\MB-GOLD_omno_co.paa",
			"MB-Limited\Data\MB-GOLD_omno_co.paa"
		};
	    hiddenSelectionsMaterials[]=
		{
			"MB-Limited\Data\MB-CTSFO_omnogloves.rvmat",
			"MB-Limited\Data\MB-CTSFO_omnogloves.rvmat",
			"MB-Limited\Data\MB-CTSFO_omnogloves.rvmat"
		};
	    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"MB-Limited\Data\MB-CTSFO_omnogloves.rvmat"}},{0.7,{}},{0.5,{"MB-Limited\Data\MB-CTSFO_omnogloves.rvmat"}},{0.3,{}},{0.0,{"MB-Limited\Data\MB-CTSFO_omnogloves.rvmat"}}};
				};
			};
		};	
	};


};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyberetta: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Pistol";
		model = "DZ\characters\proxies\beretta.p3d";
	};
	class Proxyplate_carrier_pouches_g: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "VestPouch";
		model = "DZ\characters\vests\plate_carrier_pouches_g.p3d";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"MB-Limited\Data\MB-GOLD_ballisticvest_co.paa",
			"MB-Limited\Data\MB-GOLD_ballisticvest_co.paa",
			"MB-Limited\Data\MB-GOLD_ballisticvest_co.paa"
		};
	};
};