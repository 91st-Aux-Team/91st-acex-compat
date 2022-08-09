class CfgPatches
{
	class 91st_Infantry_ACEAX_compat_uniforms
	{
		addonRootClass="91st_Infantry_ACEAX_compat";
        name="91st_Infantry_ACEAX_compat_uniforms";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"aceax_gearinfo"
		};
		author="91st aux";
	};
};
class XtdGearModels
{
    class CfgWeapons 
    {
		class 91st_Infantry_Ranks
        {
            label="91st Infantry Armor";
            author="91st Aux Team";
            options[]={"InfantryRank"};
            class InfantryRank
            {
                label="Ranks";
                values[]=
                {
                    "CR",
                    "CRC",
                    "CT",
                    "SCT",
                    "VCT",
                    "CSP",
                    "CLC",
                    "CP",
                    "CS",
                    "CSS",
                    "CFS",
                    "CSM",
                    "WO1",
                    "WO2",
                    "WO3",
                    "WO4",
                    "WO5"
                };                
            };
        };
        class 91st_Medic_Ranks
        {
            label="91st Medic Armor";
            author="91st Aux Team";
            options[]={"MedicRank"};
            class MedicRank
            {
                label="Ranks";
                values[]=
                {
                    "CT",
                    "SCT",
                    "VCT",
                    "CSP",
                    "CLC",
                    "CP",
                    "CS",
                    "CSS",
                    "WO1",
                    "WO2",
                    "WO3",
                    "WO4",
                    "WO5"
                };
            };
        };
        class 91st_Pilot_Ranks
        {
            label="91st Pilot Rank Armor";
            author="91st Aux Team";
            options[]={"PilotRank"};
            class PilotRank
            {
                label="Ranks";
                values[]=
                {
                    "CT",
                    "CXC",
                    "CX",
                    "CXX",
                    "CXP",
                    "CXS",
                    "CXSS",
                    "CX1",
                    "CX2",
                    "CX3",
                    "CX4",
                    "CX5"
                };
            };
        };
        class 91st_Beskar_Ranks
        {
            label="91st Beskar Rank Armor";
            author="91st Aux Team";
            options[]={"BeskarRank"};
            class BeskarRank
            {
                label="Ranks";
                values[]=
                {
                    "CT",
                    "SCT",
                    "VCT",
                    "CSP",
                    "CLC",
                    "CP",
                    "CS",
                    "CSS",
                    "WO1",
                    "WO2",
                    "WO3",
                    "WO4",
                    "WO5"
                };
            };
        };
        class 91st_ARC_Ranks
        {
            label="91st ARC Rank Armor";
            author="91st Aux Team";
            options[]={"ARCRank"};
            class ARCRank
            {
                label="Ranks";
                values[]=
                {
                    "CSP",
                    "CLC",
                    "CP",
                    "CS",
                    "CSS",
                    "WO1",
                    "WO2",
                    "WO3",
                    "WO4",
                    "WO5"
                };
            };
        };
        class 91st_Munka_Ranks
        {
            label="91st Munka Rank Armor";
            author="91st Aux Team";
            options[]={"MunkaRank"};
            class MunkaRank
            {
                label="Ranks";
                values[]=
                {
                    "CSP",
                    "CLC",
                    "CP",
                    "CS",
                    "CSS",
                    "WO1",
                    "WO2",
                    "WO3",
                    "WO4",
                    "WO5"
                };
            };
        };
        class 91stCustomArmor
        {
            label="91st Custom Armor";
            author="91st Aux Team";
            options[]={"Custom"};
            class Custom
            {
                labels="Customs";
                values[]=
                {
                    "Axer",
                    "Charred",
                    "Corpse",
                    "Cross",
                    "Dex",
                    "Frog",
                    "Kuro",
                    "Mav",
                    "Roach",
                    "Scorch",
                    "ScorchARC",
                    "Saint",
                    "Penguin",
                    "Hex"
                };
            };
        };
        class MRC_OPFOR
        {
            label="91st OPFOR Armor";
            author="91st C-4 Team";
            options[]={"B1"};
            class B1
            {
                labels="B1";
                values[]=
                {
                    "B1",
                    "AT",
                    "AA",
                    "Sniper",
                    "Flamer",
                    "Support",
                    "Officer",
                    "Black",
                    "DarkGreen",
                    "FireFighter",
                    "Grey",
                    "Purple",
                    "Swamp",
                    "White"
                };
            };
        };
    };
};
class CfgWeapons
{
    class Uniform_Base;
    class JLTS_Clone_P2_recon;
    class 91st_Armor_Base;
    //Rank Armor

    #define Macro_91st_Infantry_Compat_Armor(a) class 91st_Infantry_##a##_Armor : 91st_Armor_Base {\
        class XtdGearInfo\
        {\
            model="91st_Infantry_Ranks";\
            InfantryRank=##a##;\
        };\
    };

    Macro_91st_Infantry_Compat_Armor(CR);
	Macro_91st_Infantry_Compat_Armor(CRC);
	Macro_91st_Infantry_Compat_Armor(CT);
	Macro_91st_Infantry_Compat_Armor(SCT);
	Macro_91st_Infantry_Compat_Armor(VCT);
	Macro_91st_Infantry_Compat_Armor(CSP);

	Macro_91st_Infantry_Compat_Armor(WO1);
	Macro_91st_Infantry_Compat_Armor(WO2);
	Macro_91st_Infantry_Compat_Armor(WO3);
	Macro_91st_Infantry_Compat_Armor(WO4);
	Macro_91st_Infantry_Compat_Armor(WO5);

	Macro_91st_Infantry_Compat_Armor(CLC);
	Macro_91st_Infantry_Compat_Armor(CP);
	Macro_91st_Infantry_Compat_Armor(CS);
	Macro_91st_Infantry_Compat_Armor(CSS);
	Macro_91st_Infantry_Compat_Armor(CFS);
	Macro_91st_Infantry_Compat_Armor(CSM);


    //Medic Armor
    #define Macro_91st_Medic_Compat_Armor(a) class 91st_Medic_##a##_Armor : 91st_Armor_Base {\
        class XtdGearInfo\
        {\
            model="91st_Medic_Ranks";\
            MedicRank=##a##;\
        };\
    };

    Macro_91st_Medic_Compat_Armor(CT);
    Macro_91st_Medic_Compat_Armor(SCT);
    Macro_91st_Medic_Compat_Armor(VCT);
    Macro_91st_Medic_Compat_Armor(CSP);

    Macro_91st_Medic_Compat_Armor(WO1);
    Macro_91st_Medic_Compat_Armor(WO2);
    Macro_91st_Medic_Compat_Armor(WO3);
    Macro_91st_Medic_Compat_Armor(WO4);
    Macro_91st_Medic_Compat_Armor(WO5);

    Macro_91st_Medic_Compat_Armor(CLC);
    Macro_91st_Medic_Compat_Armor(CP);
    Macro_91st_Medic_Compat_Armor(CS);
    Macro_91st_Medic_Compat_Armor(CSS);


    //Pilots Armor
    #define Macro_91st_Pilot_Compat_Armor(a) class 91st_Pilot_##a##_Armor : 91st_Armor_Base {\
        class XtdGearInfo\
        {\
            model="91st_Pilot_Ranks";\
            PilotRank=##a##;\
        };\
    };

    Macro_91st_Pilot_Compat_Armor(CT);
	Macro_91st_Pilot_Compat_Armor(CXC);
	Macro_91st_Pilot_Compat_Armor(CX);
	Macro_91st_Pilot_Compat_Armor(CXX);

	Macro_91st_Pilot_Compat_Armor(CX1);
	Macro_91st_Pilot_Compat_Armor(CX2);
	Macro_91st_Pilot_Compat_Armor(CX3);
	Macro_91st_Pilot_Compat_Armor(CX4);
	Macro_91st_Pilot_Compat_Armor(CX5);

	Macro_91st_Pilot_Compat_Armor(CXP);
	Macro_91st_Pilot_Compat_Armor(CXS);
	Macro_91st_Pilot_Compat_Armor(CXSS);


    //Mech Armor
    #define Macro_91st_Mechanized_Compat_Armor(a) class 91st_Mechanized_##a##_Armor : 91st_Armor_Base {\
        class XtdGearInfo\
        {\
            model="91st_Beskar_Ranks";\
            BeskarRank=##a##;\
        };\
    };

    Macro_91st_Mechanized_Compat_Armor(CT);
	Macro_91st_Mechanized_Compat_Armor(SCT);
	Macro_91st_Mechanized_Compat_Armor(VCT);
	Macro_91st_Mechanized_Compat_Armor(CSP);

	Macro_91st_Mechanized_Compat_Armor(WO1);
	Macro_91st_Mechanized_Compat_Armor(WO2);
	Macro_91st_Mechanized_Compat_Armor(WO3);
	Macro_91st_Mechanized_Compat_Armor(WO4);
    Macro_91st_Mechanized_Compat_Armor(WO5);

	Macro_91st_Mechanized_Compat_Armor(CLC);
	Macro_91st_Mechanized_Compat_Armor(CP);
	Macro_91st_Mechanized_Compat_Armor(CS);
	Macro_91st_Mechanized_Compat_Armor(CSS);


    //Jade 
    #define Macro_91st_ARC_Compat_Armor(a) class 91st_ARC_##a##_Armor : 91st_Armor_Base {\
        class XtdGearInfo\
        {\
            model="91st_ARC_Ranks";\
            ARCRank=##a##;\
        };\
    };

    Macro_91st_ARC_Compat_Armor(CSP);

	Macro_91st_ARC_Compat_Armor(WO1);
	Macro_91st_ARC_Compat_Armor(WO2);
	Macro_91st_ARC_Compat_Armor(WO3);
	Macro_91st_ARC_Compat_Armor(WO4);
	Macro_91st_ARC_Compat_Armor(WO5);

	Macro_91st_ARC_Compat_Armor(CLC);
	Macro_91st_ARC_Compat_Armor(CP);
	Macro_91st_ARC_Compat_Armor(CS);
	Macro_91st_ARC_Compat_Armor(CSS);


    //Munka Armor
    #define Macro_91st_Munka_Compat_Armor(a) class 91st_Munka_##a##_Armor : 91st_Armor_Base {\
        class XtdGearInfo\
        {\
            model="91st_Munka_Ranks";\
            MunkaRank=##a##;\
        };\
    };

    Macro_91st_Munka_Compat_Armor(CSP);

	Macro_91st_Munka_Compat_Armor(WO1);
	Macro_91st_Munka_Compat_Armor(WO2);
	Macro_91st_Munka_Compat_Armor(WO3);
	Macro_91st_Munka_Compat_Armor(WO4);
	Macro_91st_Munka_Compat_Armor(WO5);

	Macro_91st_Munka_Compat_Armor(CLC);
	Macro_91st_Munka_Compat_Armor(CP);
	Macro_91st_Munka_Compat_Armor(CS);
	Macro_91st_Munka_Compat_Armor(CSS);


    //ARF Armor


    // Custom Armor
    #define Macro_91st_Custom_Compat_Armor(a) class 91st_Infantry_##a##_Armor : 91st_Armor_Base {\
        class XtdGearInfo\
        {\
            model="91stCustomArmor";\
            Custom=##a##;\
        };\
    };

    Macro_91st_Custom_Compat_Armor(Axer);
    Macro_91st_Custom_Compat_Armor(Charred);
	Macro_91st_Custom_Compat_Armor(Corpse);
	Macro_91st_Custom_Compat_Armor(Cross);
	Macro_91st_Custom_Compat_Armor(Dex);
	Macro_91st_Custom_Compat_Armor(Frog);
	Macro_91st_Custom_Compat_Armor(Kuro);
	Macro_91st_Custom_Compat_Armor(Mav);
	Macro_91st_Custom_Compat_Armor(Nova);
	Macro_91st_Custom_Compat_Armor(Penguin);
	Macro_91st_Custom_Compat_Armor(Roach);
	Macro_91st_Custom_Compat_Armor(Saint);
	Macro_91st_Custom_Compat_Armor(Scorch);
    Macro_91st_Custom_Compat_Armor(ScorchARC);
    Macro_91st_Custom_Compat_Armor(Hex);
    
    class UniformItem;
    class 91st_B1_Uniform: UniformItem
    {
        class XtdGearInfo
        {
            model="MRC_OPFOR";
            B1="B1";
        };
    };
    class 91st_B1_Uniform_AT: UniformItem
    {
        class XtdGearInfo
        {
            model="MRC_OPFOR";
            B1="AT";
        };
    };
    class 91st_B1_Uniform_AA: UniformItem
    {
        class XtdGearInfo
        {
            model="MRC_OPFOR";
            B1="AA";
        };
    };
    class 91st_B1_Uniform_Sniper: UniformItem
    {
        class XtdGearInfo
        {
            model="MRC_OPFOR";
            B1="Sniper";
        };
    };
    class 91st_B1_Uniform_Flamer: UniformItem
    {
        class XtdGearInfo
        {
            model="MRC_OPFOR";
            B1="Flamer";
        };
    };
    class 91st_B1_Uniform_Support: UniformItem
    {
        class XtdGearInfo
        {
            model="MRC_OPFOR";
            B1="Support";
        };
    };
    class 91st_B1_Uniform_Officer: UniformItem
    {
        class XtdGearInfo
        {
            model="MRC_OPFOR";
            B1="Officer";
        };
    };
    class MRC_B1_uniform_black: UniformItem
    {
        class XtdGearInfo
        {
            model="MRC_OPFOR";
            B1="Black";
        };
    };
    class MRC_B1_uniform_darkgreen: UniformItem
    {
        class XtdGearInfo
        {
            model="MRC_OPFOR";
            B1="DarkGreen";
        };
    };
    class MRC_B1_uniform_firefighter: UniformItem
    {
        class XtdGearInfo
        {
            model="MRC_OPFOR";
            B1="FireFighter";
        };
    };
    class MRC_B1_uniform_grey: UniformItem
    {
        class XtdGearInfo
        {
            model="MRC_OPFOR";
            B1="Grey";
        };
    };
    class MRC_B1_uniform_purple: UniformItem
    {
        class XtdGearInfo
        {
            model="MRC_OPFOR";
            B1="Purple";
        };
    };
    class MRC_B1_uniform_swamp: UniformItem
    {
        class XtdGearInfo
        {
            model="MRC_OPFOR";
            B1="Swamp";
        };
    };
    class MRC_B1_uniform_white: UniformItem
    {
        class XtdGearInfo
        {
            model="MRC_OPFOR";
            B1="White";
        };
    };
};