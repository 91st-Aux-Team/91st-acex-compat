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
	class hgun_P07_F;
    class sPistol_Base_F;
    class 3AS_DC17STest_F;
    class 3AS_pistol_DC15SA_F;
    class 327th_revolver;
    class 327th_buddy1911;
    //Pistols
    class 91st_DC17SA: hgun_P07_F
    {
        class XtdGearInfo
        {
            model="Secondary";
            Pistols="DC17";
        };
    };
   class 91st_DC17SA_A: 91st_DC17SA
    {
        class XtdGearInfo
        {
            model="Secondary";
            Pistols="DC17A";
        };
    };
    class 91st_DC17SA_M: 91st_DC17SA
    {
        class XtdGearInfo
        {
            model="Secondary";
            Pistols="DC17h";
        };
    };
    class 91st_DC17SA_Dual: sPistol_Base_F
    {
        class XtdGearInfo
        {
            model="Secondary";
            Pistols="DC17 Dual";
        };
    };
    class 91st_DC15SA: 91st_DC17SA
    {
        class XtdGearInfo
        {
            model="Secondary";
            Pistols="DC15SA";
        };
    };
    class 91st_Revolver: 327th_revolver
    {
        class XtdGearInfo
        {
            model="Secondary";
            Pistols="Revolver";
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
};