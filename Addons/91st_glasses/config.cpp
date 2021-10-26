class CfgPatches
{
	class 91st_ACEAX_compat_vests
	{
		name="91st_ACEAX_compat_vests";
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
		class 91st_glass_NV_red
        { 
            label="91st Visor";
            author="91st Aux Team";
            options[]={"Visor"};
            // Key word used in the cfg weapons below
            class Visor
            {
                label="Visors";
                values[]=
                {
                    "Red",
                    "FullBlack",
                    "FullGrey",
                    "FullRed",
                    "SpecRed",
                    "SpecFullRed",
                    "SpecFullGrey",
                    "SpecFullBlack"
                };
                // Class used for defining in the shit below
                class Red
                {
                    // Labels just a display name
                    label="Red";
                };
                class FullBlack
                {
                    // Labels just a display name
                    label="Full Black";
                };
                class FullGrey
                {
                    // Labels just a display name
                    label="Full Gray";
                };
                class FullRed
                {
                    // Labels just a display name
                    label="Full Red";
                };
                class SpecRed
                {
                    // Labels just a display name
                    label="Spec Red";
                };
                class SpecFullRed
                {
                    // Labels just a display name
                    label="Spec Full Red";
                };
                class SpecFullGrey
                {
                    // Labels just a display name
                    label="Spec Full Gray";
                };
                class SpecFullBlack
                {
                    // Labels just a display name
                    label="Spec Full Black";
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
                    "Archangel"
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
                    "Veteran",
                    "Teamleader"
                };
                // Class used for defining in the shit below
                class Trooper
                {
                    // Labels just a display name
                    label="Trooper";
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
    
    };

};
class CfgGlasses
{
    // This class is the EXACT same as the aux mod
    class 91st_glass_NV_red
    {
        class XtdGearInfo
        {
            // model is the class name of the "lists" in CfgWeapons
            model="91st_glass_NV_red";
            // "Rank" is the class name of the value list
            // The value of "Rank" is just the label used in the list
            Visor="Red";
        };
    };
    class 91st_glass_NV_full_red
    {
        class XtdGearInfo
        {
            // model is the class name of the "lists" in CfgWeapons
            model="91st_glass_NV_red";
            // "Rank" is the class name of the value list
            // The value of "Rank" is just the label used in the list
            Visor="FullRed";
        };
    };
    class 91st_glass_NV_black
    {
        class XtdGearInfo
        {
            model="91st_glass_NV_red";// The value of "Rank" is just the label used in the list
            Visor="FullBlack";
        };
    };
    class 91st_glass_NV_Grey2
    {
        class XtdGearInfo
        {
            model="91st_glass_NV_red";// The value of "Rank" is just the label used in the list
            Visor="FullGrey";
        };
    };
    class 91st_glass_NVspec_red
    {
        class XtdGearInfo
        {
            model="91st_glass_NV_red";// The value of "Rank" is just the label used in the list
            Visor="SpecRed";
        };
    };
    class 91st_glass_NVspec_red2
    {
        class XtdGearInfo
        {
            model="91st_glass_NV_red";// The value of "Rank" is just the label used in the list
            Visor="SpecFullRed";
        };
    };
    class 91st_glass_NVspec_Grey2
    {
        class XtdGearInfo
        {
            model="91st_glass_NV_red";// The value of "Rank" is just the label used in the list
            Visor="SpecFullGrey";
        };
    };
    class 91st_glass_NVspec_black
    {
        class XtdGearInfo
        {
            model="91st_glass_NV_red";// The value of "Rank" is just the label used in the list
            Visor="SpecFullBlack";
        };
    };
    class 91st_med_squad_vest
    {
        class XtdGearInfo
        {
            model="91st_medic";// The value of "Rank" is just the label used in the list
            Medic="Squad";
        };
    };
    class 91st_med_platoon_vest
    {
        class XtdGearInfo
        {
            model="91st_medic";// The value of "Rank" is just the label used in the list
            Medic="Platoon";
        };
    };
    class 91st_med_company_vest
    {
        class XtdGearInfo
        {
            model="91st_medic";// The value of "Rank" is just the label used in the list
            Medic="Company";
        };
    };
    class 91st_archangel_vest
    {
        class XtdGearInfo
        {
            model="91st_medic";// The value of "Rank" is just the label used in the list
            Medic="Archangel";
        };
    };
    class 91st_jumptrooper_vest
    {
        class XtdGearInfo
        {
            model="91st_monkeys";// The value of "Rank" is just the label used in the list
            Monkey="Trooper";
        };
    };
    class 91st_jumptrooper_veteran_vest
    {
        class XtdGearInfo
        {
            model="91st_monkeys";// The value of "Rank" is just the label used in the list
            Monkey="Veteran";
        };
    };
    class 91st_jumptrooper_TL_vest
    {
        class XtdGearInfo
        {
            model="91st_monkeys";// The value of "Rank" is just the label used in the list
            Monkey="Teamleader";
        };
    };




};