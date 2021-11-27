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
        class Weapons
        {
            label="Weapons";
            author="91st Aux Team";
            options[]={"pistols"};
            class pistols
            {
                labels="Pistols";
                values[]=
                {
                    "DC17",
                    "DC17A",
                    "DC17h",
                    "DC17 Dual",
                    "DC15SA",
                    "Revolver",
                    "1911SW"
                };
            };
        };
    };
};
class CfgWeapons
{
	class JLTS_DC17SA;
    class 3AS_DC17STest_F;
    class 3AS_pistol_DC15SA_F;
    class 327th_revolver;
    class 327th_buddy1911;
    //pistols
    class 91st_JLTS_DC17SA: JLTS_DC17SA
    {
        class XtdGearInfo
        {
            model="Weapons";
            pistols="DC17";
        };
    };
   class 91st_JLTS_DC17SA_A: JLTS_DC17SA
    {
        class XtdGearInfo
        {
            model="Weapons";
            pistols="DC17A";
        };
    };
    class 91st_JLTS_DC17SA_M: JLTS_DC17SA
    {
        class XtdGearInfo
        {
            model="Weapons";
            pistols="DC17h";
        };
    };
    class 91st_JLTS_DC17SA_Dual: 3AS_DC17STest_F
    {
        class XtdGearInfo
        {
            model="Weapons";
            pistols="DC17 Dual";
        };
    };
    class 91st_DC15SA: 3AS_pistol_DC15SA_F
    {
        class XtdGearInfo
        {
            model="Weapons";
            pistols="DC15SA";
        };
    };
    class 91st_Revolver: 327th_revolver
    {
        class XtdGearInfo
        {
            model="Weapons";
            pistols="Revolver";
        };
    };
    class 91st_1911SW: 327th_buddy1911
    {
        class XtdGearInfo
        {
            model="Weapons";
            pistols="1911SW";
        };
    };
};