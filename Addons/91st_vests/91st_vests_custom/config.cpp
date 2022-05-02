class CfgPatches
{
	class 91st_ACEAX_compat_helmcustom
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
        class CustomVests
        {
            label="Custom Vests";
            author="91st Aux Team";
            options[]={"CustomVest"};
            class CustomVest
            {
                labels="Infantry Custom Helmets";
                values[]=
                {
                    "Mav",
                    "Rat",
                    "Dex",
                    "Corn",
                    "Kuro",
                    "Predator",
                    //ARC
                    "Arcanist",
                    "Nova",
                    "Scorch"
                };
                class Mav
                {
                    label="Mav";
                };
                class Rat
                {
                    label="Rat";
                }; 
                class Dex
                {
                    label="Dex";
                }; 
                class Corn
                {
                    label="Corn";
                };
                class Kuro
                {
                    label="Kuro";
                };
                class Predator
                {
                    label = "Predator";
                };
                //ARC
                class Arcanist
                {
                    label="Arcanist";
                };
                class Nova
                {
                    label="Nova";
                };
                class Scorch
                {
                    label="Scorch";
                };
            };
        };
    };
};
class CfgWeapons
{
    class V_RebreatherB;
    class 91st_Officer_Vest_Gray;
    class 91st_Reverse_Officer_Gray;
    class 91st_Vest_ARC_Base;
    //Officer Vests
    class 91st_Officer_Vest_Mav: 91st_Officer_Vest_Gray
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Mav";
        };
    };
    class 91st_Officer_Vest_Rat: 91st_Officer_Vest_Gray
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Rat";
        };
    };
    class 91st_Officer_Vest_Dex: 91st_Officer_Vest_Gray
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Dex";
        };
    };
    class 91st_Officer_Vest_Corn: 91st_Officer_Vest_Gray
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Corn";
        };
    };
    class 91st_Officer_Vest_Kuro: 91st_Reverse_Officer_Gray
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Kuro";
        };
    };
    class 91st_Officer_Vest_Predator: 91st_Officer_Vest_Gray
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Predator";
        };
    };

    //ARC
    class 91st_Vest_ARC_Arcanist: 91st_Vest_ARC_Base
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Arcanist";
        };
    };
    class 91st_Vest_ARC_Scorch: 91st_Vest_ARC_Base
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Scorch";
        };
    };
    class 91st_Vest_ARC_Nova: 91st_Vest_ARC_Base
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Nova";
        };
    };
};