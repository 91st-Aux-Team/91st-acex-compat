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
		version="0.1";
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
                    "Doc",
                    "Chopper",
                    "Corn",
                    "Kuro",
                    "Predator",
                    "Frasier",
                    "Charred",
                    //ARC
                    "Arcanist",
                    "Scorch",
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

    #define Macro_91st_off_Vest_Compat(a) class 91st_Officer_Vest_##a## : 91st_Officer_Vest_Gray  {\
        class XtdGearInfo\
        {\
            model="CustomVests";\
            CustomVest=##a##;\
        };\
    };

    Macro_91st_off_Vest_Compat(Mav);
    Macro_91st_off_Vest_Compat(Chopper);
    Macro_91st_off_Vest_Compat(Doc);
    Macro_91st_off_Vest_Compat(Corn);
    Macro_91st_off_Vest_Compat(Kuro);
    Macro_91st_off_Vest_Compat(Predator);
    Macro_91st_off_Vest_Compat(Charred);
    Macro_91st_off_Vest_Compat(Frasier);

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
    
};