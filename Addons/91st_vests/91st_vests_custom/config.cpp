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
                    "Chopper",
                    "Corn",
                    "Kuro",
                    "Predator",
                    //ARC
                    "Arcanist",
                    "Nova",
                    "Scorch"
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
    #define Macro_91st_Customs_Compat_Vests(a) class 91st_Officer_Vest_##a## : 91st_Officer_Vest_Gray {\
        class XtdGearInfo\
        {\
            model="CustomVests";\
            CustomVest=##a##;\
        };\
    };

    Macro_91st_Customs_Compat_Vests(Chopper);
    Macro_91st_Customs_Compat_Vests(Corn);
    Macro_91st_Customs_Compat_Vests(Dex);
    Macro_91st_Customs_Compat_Vests(Kuro);
    Macro_91st_Customs_Compat_Vests(Mav);
    Macro_91st_Customs_Compat_Vests(Predator);
    Macro_91st_Customs_Compat_Vests(Rat);

    //ARC
    #define Macro_91st_Customs_Arc_Compat_Vests(a) class 91st_Vest_ARC_##a## : 91st_Vest_ARC_Base {\
        class XtdGearInfo\
        {\
            model="CustomVests";\
            CustomVest=##a##;\
        };\
    };
    Macro_91st_Customs_Arc_Compat_Vests(Arcanist);
    Macro_91st_Customs_Arc_Compat_Vests(Scorch);
    Macro_91st_Customs_Arc_Compat_Vests(Nova);
};