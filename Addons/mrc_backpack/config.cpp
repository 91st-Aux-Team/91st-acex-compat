class CfgPatches
{
	class MRC_ACEAX_compat_backpack
	{
        addonRootClass="MRC_ACEAX_compat";
        name="MRC_ACEAX_compat_vests";
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
        class MRCBackpacks
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
            };
            class Type
            {
                labels="Backpacks";
                values[]=
                {
                    "Standard",
                    "Strap"
                };
            };
        };
        class MRCRTOBackpacks
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
            };
            class Type
            {
                labels="Backpacks";
                values[]=
                {
                    "Standard",
                    "Strap"
                };
            };
        };
        class MRCLRs
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
            };
        };
        class MRCBelt
        {
            label="Belt Bags";
            author="91st Aux Team";
            options[]={"Belt"};
            class Belt
            {
                labels="Belt Bags";
                values[]=
                {
                    "Standard",
                    "Medic",
                    "Medic LR",
                };
            };
        };
        class MRCJT12Jumppack
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
                    "Ghost",
                    "Trooper",
                    "Medic",
                    "Veteran",
                    "Teamlead"
                };
            };
        };
        class MRCCDVJumppack
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
                    "MedicCDV",
                    "ScorchCDV",
                    "munkaCDV"
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
                class MedicCDV
                {
                    label="Medic";
                };
                class ScorchCDV
                {
                    label="Scorch";
                };
                class munkaCDV
                {
                    label="Munka";
                };
            };
        };
        class MRCB1Backpacks
        {
            label="B1 Backpacks";
            author="91st Aux Team";
            options[]={"B1Backpack"};
            class B1Backpack
            {
                labels="B1 Backpacks";
                values[]=
                {
                    "Normal",
                    "White",
                    "Black",
                    "Darkgreen",
                    "Firefighter",
                    "Grey",
                    "Swampcolour",
                    "Flamer",
                    "Support",
                    "Marksman",
                    "Officer",
                    "AT",
                    "AA"
                };
            };
        };
        class MRCB1Antennas
        {
            label="B1 Antenna";
            author="91st Aux Team";
            options[]={"B1Antenna"};
            class B1Antenna
            {
                labels="B1 Antenna";
                values[]=
                {
                    "Normal",
                    "White",
                    "Black",
                    "Darkgreen",
                    "Firefighter",
                    "Grey",
                    "Swampcolour",
                    "Flamer",
                    "Support",
                    "Marksman",
                    "Officer",
                    "AT",
                    "AA"
                };
            };
        };
    };
};
class CfgVehicles
{
    class MRC_Base_Backpack;
    class MRC_Base_Straps_Backpack;
    class MRC_LR_Base;
    class JLTS_Clone_jumppack_JT12;
    class MRC_Base_MC_JP;
    class JLTS_Clone_belt_bag;

    #define Macro_MRC_Compat_Backpack(a) class MRC_##a##_Backpack : MRC_Base_Backpack {\
		class XtdGearInfo\
        {\
            model="MRCBackpacks";\
            Backpacks=##a##;\
            Type="Standard";\
        };\
	};

	#define Macro_MRC_Compat_Straps_Backpack(a) class MRC_##a##_Straps_Backpack : MRC_Base_Straps_Backpack {\
		class XtdGearInfo\
        {\
            model="MRCBackpacks";\
            Backpacks=##a##;\
            Type="Strap";\
        };\
	};

    Macro_MRC_Compat_Backpack(GAR);
	Macro_MRC_Compat_Backpack(Kyber);
	Macro_MRC_Compat_Backpack(Nova);
	Macro_MRC_Compat_Backpack(Beskar);
	Macro_MRC_Compat_Backpack(Medic);

	Macro_MRC_Compat_Straps_Backpack(GAR);
	Macro_MRC_Compat_Straps_Backpack(Kyber);
	Macro_MRC_Compat_Straps_Backpack(Nova);
	Macro_MRC_Compat_Straps_Backpack(Beskar);
	Macro_MRC_Compat_Straps_Backpack(Medic);

    #define Macro_MRC_Compat_RTO_Backpack(a) class MRC_##a##_RTO_Backpack : MRC_Base_Backpack {\
		class XtdGearInfo\
        {\
            model="MRCRTOBackpacks";\
            RTOBackpacks=##a##;\
            Type="Standard";\
        };\
	};
    #define Macro_MRC_Compat_RTO_Straps_Backpack(a) class MRC_##a##_RTO_Straps_Backpack : MRC_Base_Straps_Backpack {\
		class XtdGearInfo\
        {\
            model="MRCRTOBackpacks";\
            RTOBackpacks=##a##;\
            Type="Strap";\
        };\
	};

    Macro_MRC_Compat_RTO_Backpack(GAR);
	Macro_MRC_Compat_RTO_Backpack(Kyber);
	Macro_MRC_Compat_RTO_Backpack(Nova);
	Macro_MRC_Compat_RTO_Backpack(Beskar);
	Macro_MRC_Compat_RTO_Backpack(Medic);

	Macro_MRC_Compat_RTO_Straps_Backpack(GAR);
	Macro_MRC_Compat_RTO_Straps_Backpack(Kyber);
	Macro_MRC_Compat_RTO_Straps_Backpack(Nova);
	Macro_MRC_Compat_RTO_Straps_Backpack(Beskar);
	Macro_MRC_Compat_RTO_Straps_Backpack(Medic);

    //Long Ranges
    class MRC_mini_LR_attachment_arrow: MRC_LR_Base
    {
        class XtdGearInfo
        {
            model="MRCLRs";
            LRs="MiniSmall";
        };
    };
    class MRC_mini_LR_pack_arrow: MRC_LR_Base
    {
        class XtdGearInfo
        {
            model="MRCLRs";
            LRs="MiniBig";
        };
    };
    // Belt Bags
    class MRC_Belt_Bag: JLTS_Clone_belt_bag 
    {
        class XtdGearInfo
        {
            model="MRCBelt";
            Belt="Standard";
        };
    };
    class MRC_Medic_Belt_Backpack: JLTS_Clone_belt_bag 
    {
        class XtdGearInfo
        {
            model="MRCBelt";
            Belt="Medic";
        };
    };
    class MRC_Medic_Belt_LR_Backpack: MRC_Medic_Belt_Backpack 
    {
        class XtdGearInfo
        {
            model="MRCBelt";
            Belt="Medic LR";
        };
    };


    //Jumppacks
    // JT12
    class MRC_jumpack_JT12: JLTS_Clone_jumppack_JT12
    {
        class XtdGearInfo
        {
            model="MRCJT12Jumppack";
            Jumpack="Trooper";
        };
    };
    class MRC_Ghost_jumpack_JT12: JLTS_Clone_jumppack_JT12 {
        class XtdGearInfo
        {
            model="MRCJT12Jumppack";
            Jumpack="Ghost";
        };
    };
    class MRC_empty_JT12: MRC_jumpack_JT12
    {
        class XtdGearInfo
        {
            model="MRCJT12Jumppack";
            Jumpack="Empty";
        };
    };
    class MRC_medic_jumppack_JT12: MRC_jumpack_JT12
    {
        class XtdGearInfo
        {
            model="MRCJT12Jumppack";
            Jumpack="Medic";
        };
    };
    class MRC_veteran_jumpack_JT12: MRC_jumpack_JT12
    {
        class XtdGearInfo
        {
            model="MRCJT12Jumppack";
            Jumpack="Veteran";
        };
    };
    class MRC_TL_jumpack_JT12: MRC_jumpack_JT12
    {
        class XtdGearInfo
        {
            model="MRCJT12Jumppack";
            Jumpack="Teamlead";
        };
    };
    // CDV
    class MRC_AA_jumpack_archangel: MRC_Base_MC_JP
    {
        class XtdGearInfo
        {
            model="MRCCDVJumppack";
            CDV="MedicCDV";
        };
    };
    #define Macro_MRC_Compat_Jumppack_MC_Backpack(a) class MRC_jumppack_mc_##a## : MRC_Base_MC_JP {\
		class XtdGearInfo\
        {\
            model="MRCCDVJumppack";\
            CDV=##a##CDV;\
        };\
	};

    Macro_MRC_Compat_Jumppack_MC_Backpack(Jade);
    Macro_MRC_Compat_Jumppack_MC_Backpack(Kyber);
    Macro_MRC_Compat_Jumppack_MC_Backpack(Nova);
    Macro_MRC_Compat_Jumppack_MC_Backpack(Beskar);
    Macro_MRC_Compat_Jumppack_MC_Backpack(munka);
    Macro_MRC_Compat_Jumppack_MC_Backpack(Medic);
    Macro_MRC_Compat_Jumppack_MC_Backpack(Scorch);

    // B1 Backpack
    class JLTS_B1_backpack;
    class MRC_B1_Backpack: JLTS_B1_backpack
    {
        class XtdGearInfo
        {
            model="MRCB1Backpacks";
            B1Backpack="Normal";
        };
    };
    #define Macro_MRC_Compat_B1_Backpack(a) class MRC_B1_##a##_Backpack : MRC_B1_Backpack {\
		class XtdGearInfo\
        {\
            model="MRCB1Backpacks";\
            B1Backpack=##a##;\
        };\
	};

    Macro_MRC_Compat_B1_Backpack(White);
    Macro_MRC_Compat_B1_Backpack(Black);
    Macro_MRC_Compat_B1_Backpack(Darkgreen);
    Macro_MRC_Compat_B1_Backpack(Firefighter);
    Macro_MRC_Compat_B1_Backpack(Grey);
    Macro_MRC_Compat_B1_Backpack(Swampcolour);
	Macro_MRC_Compat_B1_Backpack(Flamer);
	Macro_MRC_Compat_B1_Backpack(Support);
	Macro_MRC_Compat_B1_Backpack(Marksman);
	Macro_MRC_Compat_B1_Backpack(Officer);
	Macro_MRC_Compat_B1_Backpack(AT);
	Macro_MRC_Compat_B1_Backpack(AA);

    class JLTS_B1_antenna;
    class MRC_B1_Antenna_Base: JLTS_B1_antenna
    {
        class XtdGearInfo
        {
            model="MRCB1Antennas";
            B1Antenna="Normal";
        };
    };
    #define Macro_MRC_Compat_B1_Antenna(a) class MRC_B1_##a##_Antenna : MRC_B1_Antenna_Base {\
		class XtdGearInfo\
        {\
            model="MRCB1Antennas";\
            B1Antenna=##a##;\
        };\
	};

    Macro_MRC_Compat_B1_Antenna(White);
    Macro_MRC_Compat_B1_Antenna(Black);
    Macro_MRC_Compat_B1_Antenna(Darkgreen);
    Macro_MRC_Compat_B1_Antenna(Firefighter);
    Macro_MRC_Compat_B1_Antenna(Grey);
    Macro_MRC_Compat_B1_Antenna(Swampcolour);
	Macro_MRC_Compat_B1_Antenna(Flamer);
	Macro_MRC_Compat_B1_Antenna(Support);
	Macro_MRC_Compat_B1_Antenna(Marksman);
	Macro_MRC_Compat_B1_Antenna(Officer);
	Macro_MRC_Compat_B1_Antenna(AT);
	Macro_MRC_Compat_B1_Antenna(AA);
};