class CfgPatches
{
	class MRC_ACEAX_compat_glasses
	{
		addonRootClass="MRC_ACEAX_compat"
        name="MRC_ACEAX_compat_glasses";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"aceax_gearinfo",
            "MRC_patch_BLUFOR_Glasses"
		};
		author="91st Aux Team";
		version="0.1";
	};
};
class XtdGearModels
{
    class CfgGlasses 
    {
		class MRC_Visors_Glasses
        { 
            label="91st Visor";
            author="91st Aux Team";
            options[]={"Visor"};
            // Key word used in the cfg weapons below
            class Visor
            {
                labels="Visors";
                values[]=
                {
                    "CT",
                    "SCT",
                    "VCT",
                    "CSP",
                    "WO4",
                    "CSS"
                };
                class CT
                {
                    label="CT";
                };
                class SCT
                {
                    label="SCT";
                };
                class VCT
                {
                    label="VCT";
                };
                class CSP
                {
                    label="CSP";
                };
                class WO4
                {
                    label="WO4";
                };
                class CSS
                {
                    label="CSS";
                };
            };
            class Type
            {
                labels="Up or Down";
                values[]=
                {
                    "Up",
                    "Down"
                };
            };
        };
        class MRC_medic 
        {
            label="91st Medical Vests";
            author="91st Aux Team";
            options[]={"Medic"};
            // Key word used in the cfg weapons below
            class Medic
            {
                label="Medic Vests";
                values[]=
                {
                    "Squad",
                    "Platoon",
                    "Company",
                    "Trill"
                };
                // Class used for defining in the shit below
            };
        };
        class MRC_monkeys 
        {
            label="91st Jumptrooper Vests";
            author="91st Aux Team";
            options[]={"Monkey"};
            // Key word used in the cfg weapons below
            class Monkey
            {
                label="Jumptrooper Vests";
                values[]=
                {
                    "Trooper",
                    "Medic",
                    "Veteran",
                    "Teamlead"
                };
                // Class used for defining in the shit below
            };
        };
        class Rangefinder_Glasses
        {
            label="91st Rangefinder Glasses";
            author="91st Aux Team";
            options[]={"Rangefinder_glass"};
            // Key word used in the cfg weapons below
            class Rangefinder_glass
            {
                label="Rangefinder";
                values[]=
                {
                    "Black",
                    "Grey",
                    "Red"
                };
                // Class used for defining in the shit below
                class Black
                {
                    // Labels just a display name
                    label="Black";
                };
                class Grey
                {
                    // Labels just a display name
                    label="Grey";
                };
                class Red
                {
                    // Labels just a display name
                    label="Red";
                };
            };
        };
        class StandardVests
        {
            label="Standard Vests";
            author="91st Aux Team";
            options[]={"StandardVestss"};
            class Standardvestss
            {
                labels="Standard Vests";
                values[]=
                {
                    "Heavy",
                    "Trooper",
                    "WO1",
                    "WO3",
                    "NCO",
                    "TeamLead",
                    "SquadLead"
                };
            };
        };
        class ARFSuspenders
        {
            label="ARF Suspenders";
            author="91st Aux Team";
            options[]={"ARFCamo"};
            class ARFCamo
            {
                labels="ARF Camo";
                changeingame = 1;
                values[]=
                {
                    "NoCamo",
                    "Arid",
                    "SemiArid",
                    "Lush",
                    "Kappa"
                };
                class NoCamo
                {
                    label="No Camo";
                    actionlabel = "No Camo";
                };
                class Arid
                {
                    label="Arid";
                    actionlabel = "Arid";
                };
                class SemiArid
                {
                    label="Semi-Arid";
                    actionlabel = "Semi-Arid";
                };
                class Lush
                {
                    label="Lush";
                    actionlabel = "Lush";
                };
                class Kappa
                {
                    label="Kappa";
                    actionlabel = "Kappa";
                };
            };
        };
        class Custom_NVG_Visors_Glasses
        { 
            label="91st Custom Visor";
            author="91st Aux Team";
            options[]={"Visors"};
            class Visors
            {
                labels="Visors";
                values[]=
                {
                    "Arcanist",
                    "Baker",
                    "Frasier",
                    "Leer",
                    "Perry",
                    "Sound",
                    "Jericho",
                    "Avalanche",
                    "Odin",
                    "Trill"
                };
                
            };
            class Type
            {
                labels="Up or Down";
                values[]=
                {
                    "Up",
                    "Down"
                };
            };
        };
    };
};
class CfgGlasses
{
    //This class is the EXACT same as the aux mod
    class MRC_Glasses_Base;
    class MRC_Glasses_Visor_Up;
    class MRC_Glasses_Visor_Down;
    class MRC_ARF_Camo_Base;
    
    // class MRC_Visor_Glasses: MRC_Glasses_Base
    // {
    //     class XtdGearInfo
    //     {
    //         // model is the class name of the "lists" in CfgWeapons
    //         model="MRC_Visors_Glasses";
    //         // "Rank" is the class name of the value list
    //         // The value of "Rank" is just the label used in the list
    //         Visor="CT";
    //     };
    // };

    #define Macro_MRC_Visors_Compat(a) class MRC_Visor_##a##_Glasses : MRC_Glasses_Base  {\
        class XtdGearInfo\
        {\
            model="MRC_Visors_Glasses";\
            Visor=##a##;\
        };\
    };
    #define MACRO_MRC_GLASSES_NVG_COMPAT(a) class MRC_Glasses_Visor##a: MRC_Glasses_Visor_Up { \
        class XtdGearInfo { \
            model="MRC_Visors_Glasses"; \
            Visor=##a; \
            Type = "Up"; \
        }; \
        class MRC_Glasses_Visor_##a##_Down: MRC_Glasses_Visor_Down { \
        class XtdGearInfo { \
            model="MRC_Visors_Glasses"; \
            Visor=##a; \
            Type = "Down"; \
        }; \
    };

    #define MACRO_MRC_GLASSES_NVG_CUSTOM_COMPAT(a) class MRC_Glasses_Visor##a: MRC_Glasses_Visor_Up { \
        class XtdGearInfo { \
            model="Custom_NVG_Visors_Glasses"; \
            Visor=##a; \
            Type = "Up"; \
        }; \
        class MRC_Glasses_Visor_##a##_Down: MRC_Glasses_Visor_Down { \
        class XtdGearInfo { \
            model="Custom_NVG_Visors_Glasses"; \
            Visor=##a; \
            Type = "Down"; \
        }; \
    };

    MACRO_MRC_GLASSES_NVG_CUSTOM_COMPAT(Avalanche);
	MACRO_MRC_GLASSES_NVG_CUSTOM_COMPAT(Baker);
	MACRO_MRC_GLASSES_NVG_CUSTOM_COMPAT(Frasier);
	MACRO_MRC_GLASSES_NVG_CUSTOM_COMPAT(Leer);
	MACRO_MRC_GLASSES_NVG_CUSTOM_COMPAT(Perry);
	MACRO_MRC_GLASSES_NVG_CUSTOM_COMPAT(Sound);
	MACRO_MRC_GLASSES_NVG_CUSTOM_COMPAT(Jericho);
	MACRO_MRC_GLASSES_NVG_CUSTOM_COMPAT(Trill);
	MACRO_MRC_GLASSES_NVG_CUSTOM_COMPAT(Odin);

    MACRO_MRC_GLASSES_NVG_COMPAT(CT);
    MACRO_MRC_GLASSES_NVG_COMPAT(SCT);
    MACRO_MRC_GLASSES_NVG_COMPAT(VCT);
    MACRO_MRC_GLASSES_NVG_COMPAT(CSP);
    MACRO_MRC_GLASSES_NVG_COMPAT(WO4);
    MACRO_MRC_GLASSES_NVG_COMPAT(CSS);

    //Standards
	class MRC_Vest: MRC_Glasses_Base
    {
        class XtdGearInfo
        {
            model="StandardVests";// The value of "Rank" is just the label used in the list
            Standardvestss="Vests";
        };
    };

    #define MACRO_MRC_GLASSES_VEST_COMPAT(a) class MRC_Glasses_Vest_##a : MRC_Glasses_Base  {\
        class XtdGearInfo\
        {\
            model="StandardVests";\
            Standardvestss=##a##;\
        };\
    };

    MACRO_MRC_GLASSES_VEST_COMPAT(Heavy);
    MACRO_MRC_GLASSES_VEST_COMPAT(WO1);
    MACRO_MRC_GLASSES_VEST_COMPAT(WO3);
    MACRO_MRC_GLASSES_VEST_COMPAT(NCO);
    MACRO_MRC_GLASSES_VEST_COMPAT(TeamLead);
    MACRO_MRC_GLASSES_VEST_COMPAT(SquadLead);


    #define MACRO_MRC_GLASSES_VEST_MEDIC_COMPAT(a) class MRC_Glasses_Vest_Medic_##a : MRC_Glasses_Base  {\
        class XtdGearInfo\
        {\
            model="MRC_medic";\
            Medic=##a;\
        };\
    };

    MACRO_MRC_GLASSES_VEST_MEDIC_COMPAT(Squad);
    MACRO_MRC_GLASSES_VEST_MEDIC_COMPAT(Platoon);
    MACRO_MRC_GLASSES_VEST_MEDIC_COMPAT(Company);
    MACRO_MRC_GLASSES_VEST_MEDIC_COMPAT(Trill);

    //monkies

    #define MACRO_MRC_GLASSES_VEST_MUNKA_COMPAT(a) class MRC_Glasses_Vest_Jump_##a : MRC_Glasses_Base  {\
        class XtdGearInfo\
        {\
            model="MRC_monkeys";\
            Medic=##a;\
        };\
    };

    MACRO_MRC_GLASSES_VEST_MUNKA_COMPAT(Medic);
    MACRO_MRC_GLASSES_VEST_MUNKA_COMPAT(Trooper);
    MACRO_MRC_GLASSES_VEST_MUNKA_COMPAT(Veteran);
    MACRO_MRC_GLASSES_VEST_MUNKA_COMPAT(Teamlead);

    //RANGEFINDER

    #define MACRO_MRC_GLASSES_RANGEFINDER_COMPAT(a) class MRC_Glasses_Rangefinder_##a: MRC_Glasses_Base  {\
        class XtdGearInfo\
        {\
            model="Rangefinder_Glasses";\
            Rangefinder_glass=##a;\
        };\
    };
    
    MACRO_MRC_GLASSES_RANGEFINDER_COMPAT(Red);
    MACRO_MRC_GLASSES_RANGEFINDER_COMPAT(Grey);
    MACRO_MRC_GLASSES_RANGEFINDER_COMPAT(Black);

    // ARF Suspenders
	class MRC_Suspenders: MRC_Glasses_Base
    {
        class XtdGearInfo
        {
            model="ARFSuspenders";// The value of "Rank" is just the label used in the list
            ARFCamo="NoCamo";
        };
    };
    class MRC_ARF_Camo_SemiArid: MRC_ARF_Camo_Base
    {
        class XtdGearInfo
        {
            model="ARFSuspenders";// The value of "Rank" is just the label used in the list
            ARFCamo="SemiArid";
        };
    };
    class MRC_ARF_Camo_Arid: MRC_ARF_Camo_Base
    {
        class XtdGearInfo
        {
            model="ARFSuspenders";// The value of "Rank" is just the label used in the list
            ARFCamo="Arid";
        };
    };
    class MRC_ARF_Camo_Lush: MRC_ARF_Camo_Base
    {
        class XtdGearInfo
        {
            model="ARFSuspenders";// The value of "Rank" is just the label used in the list
            ARFCamo="Lush";
        };
    };
    class MRC_Kappa_Vest_Glasses: MRC_Glasses_Base
    {
        class XtdGearInfo
        {
            model="ARFSuspenders";// The value of "Rank" is just the label used in the list
            ARFCamo="Kappa";
        };
    };
    //Customs
};