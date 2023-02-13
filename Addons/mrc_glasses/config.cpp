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
		class MRC_Glasses_Visors_Standard
        { 
            label="[91st] Standard Visors";
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
            };
        };
        class MRC_Glasses_Visors_Custom
        { 
            label="[91st] Custom Visors";
            author="91st Aux Team";
            options[]={"Visor"};
            class Visor
            {
                labels="Visors";
                values[]=
                {
                    "Avalanche",
                    "Baker",
                    "Frasier",
                    "Leer",
                    "Perry",
                    "Sound",
                    "Jericho",
                    "Odin",
                    "Trill"
                };
                
            };
        };
        class MRC_medic 
        {
            label="[91st] Medical Vests";
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
            label="[91st] JumpTrooper Vests";
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
            label="[91st] Rangefinder Glasses";
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
        class MRC_Glasses_Vest_Standard
        {
            label="[91st] Standard Vests";
            author="91st Aux Team";
            options[]={"StandardVestss"};
            class Standardvestss
            {
                labels="Standard Vests";
                values[]=
                {
                    "Trooper",
                    "Heavy",
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
            label="[91st] ARF Vests";
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
            };
        };
    };
};
class CfgGlasses
{
    //This class is the EXACT same as the aux mod
    class MRC_Glasses_Base;
    class MRC_Glasses_Visor_Up;
    class MRC_ARF_Camo_Base;

    #define MACRO_MRC_GLASSES_NVG_COMPAT(a) class MRC_Glasses_Visor_##a: MRC_Glasses_Visor_Up { \
        class XtdGearInfo { \
            model="MRC_Glasses_Visors_Standard"; \
            Visor=#a; \
            Type = "Up"; \
        }; \
    }

    #define MACRO_MRC_GLASSES_NVG_CUSTOM_COMPAT(a) class MRC_Glasses_Visor_##a: MRC_Glasses_Visor_Up { \
        class XtdGearInfo { \
            model="MRC_Glasses_Visors_Custom"; \
            Visor=#a; \
            Type = "Up"; \
        }; \
    }


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

    #define MACRO_MRC_GLASSES_VEST_COMPAT(a) class MRC_Glasses_Vest_##a : MRC_Glasses_Base  {\
        class XtdGearInfo\
        {\
            model="MRC_Glasses_Vest_Standard";\
            Standardvestss=#a;\
        };\
    };

    MACRO_MRC_GLASSES_VEST_COMPAT(Trooper);
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
            Medic=#a;\
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
            Monkey=#a;\
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
            Rangefinder_glass=#a;\
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
    class MRC_Glasses_Vest_Kappa: MRC_Glasses_Base
    {
        class XtdGearInfo
        {
            model="ARFSuspenders";// The value of "Rank" is just the label used in the list
            ARFCamo="Kappa";
        };
    };
    //Customs
};