class CfgPatches
{
	class MRC_ACEAX_compat_helmcustom
	{
		addonRootClass="MRC_ACEAX_compat"
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
                    "Corn",
                    "Kuro",
                    "Predator",
                    "Frasier",
                    "Charred",
                    "Hex",
                    "Mauser",
                    //ARC
                    "Arcanist",
                    "Scorch",
                    "Trauma"
                };
            };
        };
    };
};
class CfgWeapons
{
    class V_RebreatherB;
    class MRC_Officer_Vest_Gray;
    class MRC_Reverse_Officer_Gray;
    class MRC_Vest_ARC_Base;
    //Officer Vests

    #define Macro_MRC_off_Vest_Compat(a) class MRC_Officer_Vest_##a## : MRC_Officer_Vest_Gray  {\
        class XtdGearInfo\
        {\
            model="CustomVests";\
            CustomVest=##a##;\
        };\
    };

    Macro_MRC_off_Vest_Compat(Mav);
    Macro_MRC_off_Vest_Compat(Doc);
    Macro_MRC_off_Vest_Compat(Corn);
    Macro_MRC_off_Vest_Compat(Kuro);
    Macro_MRC_off_Vest_Compat(Predator);
    Macro_MRC_off_Vest_Compat(Charred);
    Macro_MRC_off_Vest_Compat(Frasier);
    Macro_MRC_off_Vest_Compat(Hex);
    Macro_MRC_off_Vest_Compat(Mauser);

    //ARC
    class MRC_Vest_ARC_Arcanist: MRC_Vest_ARC_Base
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Arcanist";
        };
    };
    class MRC_Vest_ARC_Scorch: MRC_Vest_ARC_Base
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Scorch";
        };
    };
    class MRC_Vest_ARC_Trauma: MRC_Vest_ARC_Base
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Trauma";
        };
    };
    
};