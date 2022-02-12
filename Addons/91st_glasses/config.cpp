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
		version="0.1.1.2";
		versionStr="0.1.1.2";
		versionAr[]={0,1,1,2};
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
                    "Fallon"
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
                class Archangel
                {
                    // Labels just a display name
                    label="Archangel";
                };
                class Fallon
                {
                    // Labels just a display name
                    label="Fallon";
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
                    "Archangel",
                    "Veteran",
                    "Teamleader"
                };
                // Class used for defining in the shit below
                class Trooper
                {
                    // Labels just a display name
                    label="Trooper";
                };
                class Archangel
                {
                    // Labels just a display name
                    label="Archangel";
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
                    "Suspenders",
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
                class Suspenders
                {
                    label="Suspenders"
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
    };
};
class CfgGlasses
{
    //This class is the EXACT same as the aux mod
    class 91st_Glasses_Base;
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
    class 91st_Visor_SCT_Glasses: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="91st_Visors_Glasses";
            Visor="SCT";
        };
    };
    class 91st_Visor_VCT_Glasses: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="91st_Visors_Glasses";
            Visor="VCT";
        };
    };
    class 91st_Visor_CSP_Glasses: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="91st_Visors_Glasses";
            Visor="CSP";
        };
    };
    class 91st_Visor_WO4_Glasses: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="91st_Visors_Glasses";
            Visor="WO4";
        };
    };
    class 91st_Visor_CSS_Glasses: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="91st_Visors_Glasses";
            Visor="CSS";
        };
    };

    //Standards
	class 91st_Vest: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="StandardVests";// The value of "Rank" is just the label used in the list
            Standardvestss="Vests";
        };
    };
	class 91st_Suspenders: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="StandardVests";// The value of "Rank" is just the label used in the list
            Standardvestss="Suspenders";
        };
    };
	class 91st_Vest_WO1: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="StandardVests";// The value of "Rank" is just the label used in the list
            Standardvestss="WO";
        };
    };
	class 91st_Vest_WO3: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="StandardVests";// The value of "Rank" is just the label used in the list
            Standardvestss="WO3";
        };
    };
	class 91st_Vest_NCO: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="StandardVests";// The value of "Rank" is just the label used in the list
            Standardvestss="NCO";
        };
    };
	class 91st_Vest_Teamlead: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="StandardVests";// The value of "Rank" is just the label used in the list
            Standardvestss="TeamLead";
        };
    };
	class 91st_Vest_Squadlead: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="StandardVests";// The value of "Rank" is just the label used in the list
            Standardvestss="SquadLead";
        };
    };

    //Medic
	class 91st_Medic_Vest: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="91st_medic";// The value of "Rank" is just the label used in the list
            Medic="Squad";
        };
    };
	class 91st_Medic_Vest_Platoon: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="91st_medic";// The value of "Rank" is just the label used in the list
            Medic="Platoon";
        };
    };
	class 91st_Medic_Vest_Company: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="91st_medic";// The value of "Rank" is just the label used in the list
            Medic="Company";
        };
    };
	class 91st_Medic_Vest_Fallon: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="91st_medic";// The value of "Rank" is just the label used in the list
            Medic="Fallon";
        };
    };

    //monkies
	class 91st_archangel_vest: 91st_Glasses_Base
    {
        class XtdGearInfo
        {
            model="91st_monkeys";// The value of "Rank" is just the label used in the list
            Monkey="Archangel";
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
};