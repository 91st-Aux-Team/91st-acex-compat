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
                    "Scorch"
                };
                class Arcanist
                {
                    label="Arcanist";
                };
                class Corn
                {
                    label="Corn";
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
    class 91st_Officer_Vest_Corn: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Corn";
        };
    };
};