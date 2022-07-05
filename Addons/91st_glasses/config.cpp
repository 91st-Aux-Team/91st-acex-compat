class CfgPatches
{
	class 91st_ACEAX_compat_glasses
	{
		addonRootClass="91st_ACEAX_compat"
        name="91st_ACEAX_compat_glasses";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"aceax_gearinfo"
		};
		author="91st Aux Team";
		version="0.1";
	};
};
class XtdGearModels
{
    class CfgGlasses 
    {
		class 91st_Visors_Glasses
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
        };
        class 91st_medic 
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
                    "Fallon",
                    "Trill"
                };
                // Class used for defining in the shit below
                class Squad
                {
                    // Labels just a display name
                    label="Squad";
                };
                class Platoon
                {
                    // Labels just a display name
                    label="Platoon";
                };
                class Company
                {
                    // Labels just a display name
                    label="Company";
                };
                class Munka
                {
                    // Labels just a display name
                    label="Munka";
                };
                class Fallon
                {
                    // Labels just a display name
                    label="Fallon";
                };
                class Trill
                {
                    // Labels just a display name
                    label="Trill";
                };
            };
        };
        class 91st_monkeys 
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
                    "Teamleader"
                };
                // Class used for defining in the shit below
                class Trooper
                {
                    // Labels just a display name
                    label="Trooper";
                };
                class Medic
                {
                    // Labels just a display name
                    label="Medic";
                };
                class Veteran
                {
                    // Labels just a display name
                    label="Veteran";
                };
                class Teamleader
                {
                    // Labels just a display name
                    label="Teamleader";
                };
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
                    "Vests",
                    "WO",
                    "WO3",
                    "NCO",
                    "TeamLead",
                    "SquadLead"
                };
                class Vests
                {
                    label="Vests"
                };
                class WO
                {
                    label="WO"
                };
                class WO3
                {
                    label="WO3"
                };
                class NCO
                {
                    label="NCO"
                };
                class TeamLead
                {
                    label="Team Lead"
                };
                class SquadLead
                {
                    label="Squad Lead"
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
                    "Lush"
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
                    "Binns",
                    "Frasier",
                    "Leer",
                    "Perry"
                };
            };
        };
    };
};
class CfgGlasses
{
    //This class is the EXACT same as the aux mod
    class 91st_Glasses_Base;
    class 91st_ARF_Camo_Base;
    
    class 91st_Visor_Glasses: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            // model is the class name of the "lists" in CfgWeapons
            model="91st_Visors_Glasses";
            // "Rank" is the class name of the value list
            // The value of "Rank" is just the label used in the list
            Visor="CT";
        };
    };

    #define Macro_91st_Visors_Compat(a) class 91st_Visor_##a##_Glasses : 91st_Glasses_Base  {\
        class XtdGearInfo\
        {\
            model="91st_Visors_Glasses";\
            Visor=##a##;\
        };\
    };

    Macro_91st_Visors_Compat(SCT);
    Macro_91st_Visors_Compat(VCT);
    Macro_91st_Visors_Compat(CSP);
    Macro_91st_Visors_Compat(WO4);
    Macro_91st_Visors_Compat(CSS);

    //Standards
	class 91st_Vest: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="StandardVests";// The value of "Rank" is just the label used in the list
            Standardvestss="Vests";
        };
    };

    #define Macro_91st_Vests_Glasses_Compat(a) class 91st_Vest_##a## : 91st_Glasses_Base  {\
        class XtdGearInfo\
        {\
            model="StandardVests";\
            Standardvestss=##a##;\
        };\
    };

    Macro_91st_Vests_Glasses_Compat(WO);
    Macro_91st_Vests_Glasses_Compat(WO3);
    Macro_91st_Vests_Glasses_Compat(NCO);
    Macro_91st_Vests_Glasses_Compat(TeamLead);
    Macro_91st_Vests_Glasses_Compat(SquadLead);

    //Medic
    
	class 91st_Medic_Vest: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="91st_medic";// The value of "Rank" is just the label used in the list
            Medic="Squad";
        };
    };
    #define Macro_91st_Medic_Vests_Compat(a) class 91st_Medic_Vest_##a## : 91st_Glasses_Base  {\
        class XtdGearInfo\
        {\
            model="91st_medic";\
            Medic=##a##;\
        };\
    };

    Macro_91st_Medic_Vests_Compat(Platoon);
    Macro_91st_Medic_Vests_Compat(Company);
    Macro_91st_Medic_Vests_Compat(Fallon);
    Macro_91st_Medic_Vests_Compat(Trill);

    //monkies
	class 91st_archangel_vest: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="91st_monkeys";// The value of "Rank" is just the label used in the list
            Monkey="Medic";
        };
    };
	class 91st_Jumptrooper_Vest: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="91st_monkeys";// The value of "Rank" is just the label used in the list
            Monkey="Trooper";
        };
    };
	class 91st_Jumptrooper_Vest_Veteran: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="91st_monkeys";// The value of "Rank" is just the label used in the list
            Monkey="Veteran";
        };
    };
	class 91st_Jumptrooper_Vest_Teamlead: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="91st_monkeys";// The value of "Rank" is just the label used in the list
            Monkey="Teamleader";
        };
    };

    //RANGEFINDER
    class 91st_Rangefinder_Glasses: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="Rangefinder_Glasses";// The value of "Rank" is just the label used in the list
            Rangefinder_glass="Red";
        };
    };
	class 91st_Rangefinder_Grey_Glasses: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="Rangefinder_Glasses";// The value of "Rank" is just the label used in the list
            Rangefinder_glass="Grey";
        };
    };
	class 91st_Rangefinder_Black_Glasses: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="Rangefinder_Glasses";// The value of "Rank" is just the label used in the list
            Rangefinder_glass="Black";
        };
    };

    // ARF Suspenders
	class 91st_Suspenders: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="ARFSuspenders";// The value of "Rank" is just the label used in the list
            ARFCamo="NoCamo";
        };
    };
    class 91st_ARF_Camo_SemiArid: 91st_ARF_Camo_Base
    {
        class XtdGearInfo
        {
            model="ARFSuspenders";// The value of "Rank" is just the label used in the list
            ARFCamo="SemiArid";
        };
    };
    class 91st_ARF_Camo_Arid: 91st_ARF_Camo_Base
    {
        class XtdGearInfo
        {
            model="ARFSuspenders";// The value of "Rank" is just the label used in the list
            ARFCamo="Arid";
        };
    };
    class 91st_ARF_Camo_Lush: 91st_ARF_Camo_Base
    {
        class XtdGearInfo
        {
            model="ARFSuspenders";// The value of "Rank" is just the label used in the list
            ARFCamo="Lush";
        };
    };
    
    //Customs
    #define Macro_91st_Visor_Custom_Compat_Glasses(a) class 91st_Visor_##a##_Glasses : 91st_Glasses_Base  {\
        class XtdGearInfo\
        {\
            model="Custom_NVG_Visors_Glasses";\
            Visors=##a##;\
        };\
    };

    Macro_91st_Visor_Custom_Compat_Glasses(Arcanist);
    Macro_91st_Visor_Custom_Compat_Glasses(Binns);
    Macro_91st_Visor_Custom_Compat_Glasses(Fraiser);
    Macro_91st_Visor_Custom_Compat_Glasses(Leer);
    Macro_91st_Visor_Custom_Compat_Glasses(Perry);
};