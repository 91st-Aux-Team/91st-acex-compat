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
                    "Arcanist",
                    "Corn",
                    "Nova",
                    "Rat",
                    "Scorch",
                    "Smig"
                };
                class Arcanist
                {
                    label="Arcanist";
                };
                class Corn
                {
                    label="Corn";
                };
                class Mav
                {
                    label="Mav";
                };
                class Nova
                {
                    label="Nova";
                };
                class Rat
                {
                    label="Rat";
                }; 
                class Scorch
                {
                    label="Scorch";
                };
                class Smig
                {
                    label="Smig";
                };
            };
        };
    };
};
class CfgWeapons
{
    class V_RebreatherB;
    //Officer Vests
    class 91st_JLTS_Vest_ARC_Arcanist: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Arcanist";
        };
    };
    class 91st_JLTS_Vest_ARC_Scorch: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Scorch";
        };
    };
    class 91st_Officer_Vest_Mav: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Mav";
        };
    };
    class 91st_JLTS_Vest_ARC_Nova: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Nova";
        };
    };
    class 91st_Officer_Vest_Corn: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Corn";
        };
    };
    class 91st_Officer_Vest_Rat: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Rat";
        };
    };
    class 91st_Officer_Vest_Smig: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Smig";
        };
    };
};