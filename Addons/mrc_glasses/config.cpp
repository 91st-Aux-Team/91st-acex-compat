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
                class Trill
                {
                    // Labels just a display name
                    label="Trill";
                };
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
                    "WO1",
                    "WO3",
                    "NCO",
                    "TeamLead",
                    "SquadLead"
                };
                class Vests
                {
                    label="Vests"
                };
                class WO1
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
                class Arcanist
                {
                    label="Arcanist"
                };
                class Baker
                {
                    label="Baker"
                };
                class Frasier
                {
                    label="Frasier"
                };
                class Leer
                {
                    label="Leer"
                };
                class Perry
                {
                    label="Perry"
                };
                class Sound
                {
                    label="Sound"
                };
                class Jericho
                {
                    label="Jericho"
                };
                class Avalanche
                {
                    label="Avalanche"
                };
                class Odin
                {
                    label="Odin"
                };
                class Trill
                {
                    label="Trill"
                };
            };
        };
    };
};
class CfgGlasses
{
    //This class is the EXACT same as the aux mod
    class MRC_Glasses_Base;
    class MRC_ARF_Camo_Base;
    
    class MRC_Visor_Glasses: MRC_Glasses_Base
    {
        class XtdGearInfo
        {
            // model is the class name of the "lists" in CfgWeapons
            model="MRC_Visors_Glasses";
            // "Rank" is the class name of the value list
            // The value of "Rank" is just the label used in the list
            Visor="CT";
        };
    };

    #define Macro_MRC_Visors_Compat(a) class MRC_Visor_##a##_Glasses : MRC_Glasses_Base  {\
        class XtdGearInfo\
        {\
            model="MRC_Visors_Glasses";\
            Visor=##a##;\
        };\
    };

    Macro_MRC_Visors_Compat(SCT);
    Macro_MRC_Visors_Compat(VCT);
    Macro_MRC_Visors_Compat(CSP);
    Macro_MRC_Visors_Compat(WO4);
    Macro_MRC_Visors_Compat(CSS);

    //Standards
	class MRC_Vest: MRC_Glasses_Base
    {
        class XtdGearInfo
        {
            model="StandardVests";// The value of "Rank" is just the label used in the list
            Standardvestss="Vests";
        };
    };

    #define Macro_MRC_Vests_Glasses_Compat(a) class MRC_Vest_##a## : MRC_Glasses_Base  {\
        class XtdGearInfo\
        {\
            model="StandardVests";\
            Standardvestss=##a##;\
        };\
    };

    Macro_MRC_Vests_Glasses_Compat(WO1);
    Macro_MRC_Vests_Glasses_Compat(WO3);
    Macro_MRC_Vests_Glasses_Compat(NCO);
    Macro_MRC_Vests_Glasses_Compat(TeamLead);
    Macro_MRC_Vests_Glasses_Compat(SquadLead);

    //Medic
    
	class MRC_Medic_Vest: MRC_Glasses_Base
    {
        class XtdGearInfo
        {
            model="MRC_medic";// The value of "Rank" is just the label used in the list
            Medic="Squad";
        };
    };
    #define Macro_MRC_Medic_Vests_Compat(a) class MRC_Medic_Vest_##a## : MRC_Glasses_Base  {\
        class XtdGearInfo\
        {\
            model="MRC_medic";\
            Medic=##a##;\
        };\
    };

    Macro_MRC_Medic_Vests_Compat(Platoon);
    Macro_MRC_Medic_Vests_Compat(Company);
    Macro_MRC_Medic_Vests_Compat(Trill);

    //monkies
	class MRC_archangel_vest: MRC_Glasses_Base
    {
        class XtdGearInfo
        {
            model="MRC_monkeys";// The value of "Rank" is just the label used in the list
            Monkey="Medic";
        };
    };
	class MRC_Jumptrooper_Vest: MRC_Glasses_Base
    {
        class XtdGearInfo
        {
            model="MRC_monkeys";// The value of "Rank" is just the label used in the list
            Monkey="Trooper";
        };
    };
	class MRC_Jumptrooper_Vest_Veteran: MRC_Glasses_Base
    {
        class XtdGearInfo
        {
            model="MRC_monkeys";// The value of "Rank" is just the label used in the list
            Monkey="Veteran";
        };
    };
	class MRC_Jumptrooper_Vest_Teamlead: MRC_Glasses_Base
    {
        class XtdGearInfo
        {
            model="MRC_monkeys";// The value of "Rank" is just the label used in the list
            Monkey="Teamleader";
        };
    };

    //RANGEFINDER
    class MRC_Rangefinder_Glasses: MRC_Glasses_Base
    {
        class XtdGearInfo
        {
            model="Rangefinder_Glasses";// The value of "Rank" is just the label used in the list
            Rangefinder_glass="Red";
        };
    };
	class MRC_Rangefinder_Grey_Glasses: MRC_Glasses_Base
    {
        class XtdGearInfo
        {
            model="Rangefinder_Glasses";// The value of "Rank" is just the label used in the list
            Rangefinder_glass="Grey";
        };
    };
	class MRC_Rangefinder_Black_Glasses: MRC_Glasses_Base
    {
        class XtdGearInfo
        {
            model="Rangefinder_Glasses";// The value of "Rank" is just the label used in the list
            Rangefinder_glass="Black";
        };
    };

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
    #define Macro_MRC_Visor_Custom_Compat_Glasses(a) class MRC_Visor_##a##_Glasses : MRC_Glasses_Base  {\
        class XtdGearInfo\
        {\
            model="Custom_NVG_Visors_Glasses";\
            Visors=##a##;\
        };\
    };

    Macro_MRC_Visor_Custom_Compat_Glasses(Baker);
    Macro_MRC_Visor_Custom_Compat_Glasses(Frasier);
    Macro_MRC_Visor_Custom_Compat_Glasses(Leer);
    Macro_MRC_Visor_Custom_Compat_Glasses(Perry);
    Macro_MRC_Visor_Custom_Compat_Glasses(Sound);
    Macro_MRC_Visor_Custom_Compat_Glasses(Arcanist);
    Macro_MRC_Visor_Custom_Compat_Glasses(Jericho);
    Macro_MRC_Visor_Custom_Compat_Glasses(Avalanche);
    Macro_MRC_Visor_Custom_Compat_Glasses(Odin);
    Macro_MRC_Visor_Custom_Compat_Glasses(Trill);
};