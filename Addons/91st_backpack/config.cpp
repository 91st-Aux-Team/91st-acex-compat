class CfgPatches
{
	class 91st_ACEAX_compat_backpack
	{
	    addonRootClass="91st_ACEAX_compat";
    	name="91st_ACEAX_compat_vests";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
		};
		author="91st aux";
		version="0.1";
	};
};
class XtdGearModels
{
    class CfgVehicles
    {
        class 91stBackpacks
        {
            label="91st Backpacks";
            author="91st Aux Team";
            options[]={"Backpacks","Type"};
            class Backpacks
            {
                labels="Backpacks";
                values[]=
                {
                    "GAR",
                    "Kyber",
                    "Beskar",
                    "Nova",
                    "Medic"
                };
                class GAR
                {
                    label="GAR";
                };
                class Kyber
                {
                    label="Kyber";
                };
                class Beskar
                {
                    label="Beskar";
                };
                class Nova
                {
                    label="Nova";
                };
                class Medic
                {
                    label="Medic";
                };
            };
            class Type
            {
             labels="Backpacks";
                values[]=
                {
                    "Standard",
                    "Strap"
                };
                class Standard
                {
                    label="Standard";
                };
                class Straps
                {
                    label="Straps";
                };
            };
        };
        class 91stRTOBackpacks
        {
            label="91st RTO Backpacks";
            author="91st Aux Team";
            options[]={"RTOBackpacks","Type"};
            class RTOBackpacks
            {
                labels="RTO Backpacks";
                values[]=
                {
                    "GAR",
                    "Kyber",
                    "Beskar",
                    "Nova"
                };
                class GAR
                {
                    label="GAR";
                };
                class Kyber
                {
                    label="Kyber";
                };
                class Beskar
                {
                    label="Beskar";
                };
                class Nova
                {
                    label="Nova";
                };
            };
            class Type
            {
                labels="Backpacks";
                values[]=
                {
                    "Standard",
                    "Strap"
                };
                class Standard
                {
                    label="Standard";
                };
                class Straps
                {
                    label="Straps";
                };
            };
        };
        class 91stLRs
        {
            label="91st Long Ranges";
            author="91st Aux Team";
            options[]={"LRs"};
            class LRs
            {
                labels="Backpacks";
                values[]=
                {
                    "MiniSmall",
                    "MiniBig"
                };
                class MiniSmall
                {
                    label="MiniSmall";
                };
                class MiniBig
                {
                    label="MiniBig";
                };
            };
        };
        class 91stJT12Jumppack
        {
            label="Jumppacks";
            author="91st Aux Team";
            options[]={"Jumpack"};
            class Jumpack
            {
                labels="Jumpack";
                values[]=
                {
                    "Empty",
                    "Trooper",
                    "Veteran",
                    "Teamlead"
                };
                class Empty
                {
                    label="Empty";
                };
                class Trooper
                {
                    label="Trooper";
                };
                class Veteran
                {
                    label="Veteran";
                };
                class Teamlead
                {
                    label="Teamlead";
                };
            };
        };
        class 91stCDVJumppack
        {
            label="Jumppacks";
            author="91st Aux Team";
            options[]={"CDV"};
            class CDV
            {
                labels="Jumpack";
                values[]=
                {
                    "KyberCDV",
                    "BeskarCDV",
                    "NovaCDV",
                    "JadeCDV",
                    "ArchangelCDV",
                    "ScorchCDV"
                };
                class KyberCDV
                {
                    label="Kyber";
                };
                class BeskarCDV
                {
                    label="Beskar";
                };
                class NovaCDV
                {
                    label="Nova";
                };
                class JadeCDV
                {
                    label="Jade";
                };
                class ArchangelCDV
                {
                    label="Archangel";
                };
                class ScorchCDV
                {
                    label="Scorch";
                };
            };
        };
    };
};
class CfgVehicles
{
    class 91st_Base_Backpack;
    class 91st_Base_Straps_Backpack;
    class 91st_LR_Base;
    class JLTS_Clone_jumppack_JT12;
    class 91st_Base_MC_JP;
    #define Macro_91st_Compat_Backpack(a) class 91st_##a##_Backpack : 91st_Base_Backpack {\
		class XtdGearInfo\
        {\
            model="91stBackpacks";\
            Backpacks=##a##;\
            Type="Standard";\
        };\
	};

	#define Macro_91st_Compat_Straps_Backpack(a) class 91st_##a##_Straps_Backpack : 91st_Base_Straps_Backpack {\
		class XtdGearInfo\
        {\
            model="91stBackpacks";\
            Backpacks="Beskar";\
            Type="Strap";\
        };\
	};

    Macro_91st_Compat_Backpack(GAR);
	Macro_91st_Compat_Backpack(Kyber);
	Macro_91st_Compat_Backpack(Nova);
	Macro_91st_Compat_Backpack(Beskar);
	Macro_91st_Compat_Backpack(Medic);

	Macro_91st_Compat_Straps_Backpack(GAR);
	Macro_91st_Compat_Straps_Backpack(Kyber);
	Macro_91st_Compat_Straps_Backpack(Nova);
	Macro_91st_Compat_Straps_Backpack(Beskar);
	Macro_91st_Compat_Straps_Backpack(Medic);

    #define Macro_91st_Compat_RTO_Backpack(a) class 91st_##a##_RTO_Backpack : 91st_Base_Backpack {\
		class XtdGearInfo\
        {\
            model="91stRTOBackpacks";\
            RTOBackpacks=##a##;\
            Type="Standard";\
        };\
	};
    #define Macro_91st_Compat_RTO_Straps_Backpack(a) class 91st_##a##_RTO_Straps_Backpack : 91st_Base_Straps_Backpack {\
		class XtdGearInfo\
        {\
            model="91stRTOBackpacks";\
            RTOBackpacks="Beskar";\
            Type="Strap";\
        };\
	};

    Macro_91st_Compat_RTO_Backpack(GAR);
	Macro_91st_Compat_RTO_Backpack(Kyber);
	Macro_91st_Compat_RTO_Backpack(Nova);
	Macro_91st_Compat_RTO_Backpack(Beskar);
	Macro_91st_Compat_RTO_Backpack(Medic);

	Macro_91st_Compat_RTO_Straps_Backpack(GAR);
	Macro_91st_Compat_RTO_Straps_Backpack(Kyber);
	Macro_91st_Compat_RTO_Straps_Backpack(Nova);
	Macro_91st_Compat_RTO_Straps_Backpack(Beskar);
	Macro_91st_Compat_RTO_Straps_Backpack(Medic);

    //Long Ranges
    class 91st_mini_LR_attachment_arrow: 91st_LR_Base
    {
        class XtdGearInfo
        {
            model="91stLRs";
            LRs="MiniSmall";
        };
    };
    class 91st_mini_LR_pack_arrow: 91st_LR_Base
    {
        class XtdGearInfo
        {
            model="91stLRs";
            LRs="MiniBig";
        };
    };

    //Jumppacks
    // JT12
    class 91st_jumpack_JT12: JLTS_Clone_jumppack_JT12
    {
        class XtdGearInfo
        {
            model="91stJT12Jumppack";
            Jumpack="Trooper";
        };
    };
    class 91st_empty_JT12: 91st_jumpack_JT12
    {
        class XtdGearInfo
        {
            model="91stJT12Jumppack";
            Jumpack="Empty";
        };
    };
    class 91st_veteran_jumpack_JT12: 91st_jumpack_JT12
    {
        class XtdGearInfo
        {
            model="91stJT12Jumppack";
            Jumpack="Veteran";
        };
    };
    class 91st_TL_jumpack_JT12: 91st_jumpack_JT12
    {
        class XtdGearInfo
        {
            model="91stJT12Jumppack";
            Jumpack="Teamlead";
        };
    };
    // CDV
    class 91st_AA_jumpack_archangel: 91st_Base_MC_JP
    {
        class XtdGearInfo
        {
            model="91stCDVJumppack";
            CDV="ArchangelCDV";
        };
    };
    #define Macro_91st_Compat_Jumppack_MC_Backpack(a) class 91st_jumppack_mc_##a## : 91st_Base_MC_JP {\
		class XtdGearInfo\
        {\
            model="91stCDVJumppack";\
            CDV=##a##CDV;\
        };\
	};

    Macro_91st_Compat_Jumppack_MC_Backpack(Jade);
    Macro_91st_Compat_Jumppack_MC_Backpack(Kyber);
    Macro_91st_Compat_Jumppack_MC_Backpack(Nova);
    Macro_91st_Compat_Jumppack_MC_Backpack(Beskar);
    Macro_91st_Compat_Jumppack_MC_Backpack(Scorch);
};