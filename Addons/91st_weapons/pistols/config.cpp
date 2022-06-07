class CfgPatches
{
	class 91st_ACEAX_compat_helms
	{
		addonRootClass="91st_ACEAX_compat"
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"aceax_gearinfo"
		};
		author="91st aux";
		version="0.1.1.2";
		versionStr="0.1.1.2";
		versionAr[]={0,1,1,2};
	};
};
class XtdGearModels
{
    class CfgWeapons 
    {
        class Secondary
        {
            label="Secondary's";
            author="91st Aux Team";
            options[]={"Pistols"};
            class Pistols
            {
                labels="Pistols";
                values[]=
                {
                    "DC17",
                    "DC17A",
                    "DC17Dual",
                    "DC15Razor",
                    "1911SW"
                };
            };
        };
        class AutoDualies_dc17a
		{
			label = "Onyx DC-17A";
			author = "91st Aux Team";
			options[] = {"dc17Aswap"};
			class dc17Aswap
			{
				label = "Onyx DC-17A's";
				values[] = {"Single","Dual"};
				changeingame = 1;
				icon = "\91st-acex-compat\Addons\91st_weapons\pistols\ui\logo_ca.paa";
                class Single
				{
					label = "Single";
					description = "Holster Left";
					icon = "\91st-acex-compat\Addons\91st_weapons\pistols\ui\OnyxDC17A_ui_ca.paa";
					actionlabel = "Single";
				};
				class Dual
				{
					label = "Pair";
					description = "Pull Left";
					icon = "\91st-acex-compat\Addons\91st_weapons\pistols\ui\OnyxDC17As_ui_ca.paa";
					actionlabel = "Dual";
				};
        	};
		};
        class AutoDualies_JadeDC17a
		{
			label = "Jade DC-17A";
			author = "91st Aux Team";
			options[] = {"jadedc17A","jadedc17Aswap"};
			class jadedc17A
			{
				label = "Jade DC-17A";
				values[] = {"Standard","Modified"};
				changeingame = 1;
				icon = "\91st-acex-compat\Addons\91st_weapons\pistols\ui\logo_ca.paa";
				class Standard
				{
					label = "Standard";
					description = "Standard ARC Pistol";
					icon = "\91st-acex-compat\Addons\91st_weapons\pistols\ui\OnyxDC17A_ui_ca.paa";
					actionlabel = "Remove Amplifier";
				};
				class Modified
				{
					label = "Modified";
					description = "Blast Amplified ARC Pistol";
					icon = "\91st-acex-compat\Addons\91st_weapons\pistols\ui\OnyxDC17A_ui_ca.paa";
					actionlabel = "Attach Amplifier";
				};
			};
			class jadedc17Aswap
			{
				label = "Jade DC-17As";
				values[] = {"Single","Dual"};
				changeingame = 1;
				icon = "\91st-acex-compat\Addons\91st_weapons\pistols\ui\logo_ca.paa";
				class Single
				{
					label = "Single";
					description = "Holster Left";
					icon = "\91st-acex-compat\Addons\91st_weapons\pistols\ui\OnyxDC17A_ui_ca.paa";
					actionlabel = "Single";
				};
				class Dual
				{
					label = "Pair";
					description = "Pull Left";
					icon = "\91st-acex-compat\Addons\91st_weapons\pistols\ui\OnyxDC17As_ui_ca.paa";
					actionlabel = "Dual";
				};
			};
		};
    };
};
class CfgWeapons
{
	class hgun_P07_F;
    class sPistol_Base_F;
    class Pistol_Base_F;
    class 3AS_DC17STest_F;
    class 3AS_pistol_DC15SA_F;
    class 327th_revolver;
    class 327th_buddy1911;
    
    //Pistols
    class 91st_DC17: hgun_P07_F
    {
        class XtdGearInfo
        {
            model="Secondary";
            Pistols="DC17";
        };
    };
   class 91st_DC17A: 91st_DC17
    {
        class XtdGearInfo
        {
            model="Secondary";
            Pistols="DC17A";
        };
    };
    class 91st_DC17_Dual: sPistol_Base_F
    {
        class XtdGearInfo
        {
            model="Secondary";
            Pistols="DC17Dual";
        };
    };
    class 91st_DC15Razor: Pistol_Base_F
    {
        class XtdGearInfo
        {
            model="Secondary";
            Pistols="DC15Razor";
        };
    };
    class 91st_1911SW: 327th_buddy1911
    {
        class XtdGearInfo
        {
            model="Secondary";
            Pistols="1911SW";
        };
    };

    // Onyx's Dualies
    class Onyx_DC17A: Pistol_Base_F
	{
		class XtdGearInfo
		{
			model = "AutoDualies_dc17a";
			dc17Aswap = "Single";
		};
	};
	class Onyx_DC17A_Dual: sPistol_Base_F
	{
		class XtdGearInfo
		{
			model = "AutoDualies_dc17a";
			dc17Aswap = "Dual";
		};
	};

    // Jade Dualies
	class Jade_DC17A: Pistol_Base_F
	{
		class XtdGearInfo
		{
			model = "AutoDualies_JadeDC17a";
			jadedc17A = "Standard";
			jadedc17Aswap = "Single";
		};
	};
	class Jade_DC17A_AMP: Pistol_Base_F
	{
		class XtdGearInfo
		{
			model = "AutoDualies_JadeDC17a";
			jadedc17A = "Modified";
			jadedc17Aswap = "Single";
		};
	};
	class Jade_DC17A_AMPDual: sPistol_Base_F
	{
		class XtdGearInfo
		{
			model = "AutoDualies_JadeDC17a";
			jadedc17A = "Modified";
			jadedc17Aswap = "Dual";
		};
	};
};