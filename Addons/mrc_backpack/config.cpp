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
    };
};
class CfgVehicles
{
    class MRC_Base_Backpack;
    class MRC_Base_Straps_Backpack;
    class MRC_LR_Base;
    class JLTS_Clone_jumppack_JT12;
    class MRC_Base_MC_JP;

    #define Macro_MRC_Compat_Backpack(a) class MRC_##a##_Backpack : MRC_Base_Backpack {\
		class XtdGearInfo\
        {\
            model="91stBackpacks";\
            Backpacks=##a##;\
            Type="Standard";\
        };\
	};

	#define Macro_MRC_Compat_Straps_Backpack(a) class MRC_##a##_Straps_Backpack : MRC_Base_Straps_Backpack {\
		class XtdGearInfo\
        {\
            model="91stBackpacks";\
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
            model="91stRTOBackpacks";\
            RTOBackpacks=##a##;\
            Type="Standard";\
        };\
	};
    #define Macro_MRC_Compat_RTO_Straps_Backpack(a) class MRC_##a##_RTO_Straps_Backpack : MRC_Base_Straps_Backpack {\
		class XtdGearInfo\
        {\
            model="91stRTOBackpacks";\
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
            model="91stLRs";
            LRs="MiniSmall";
        };
    };
    class MRC_mini_LR_pack_arrow: MRC_LR_Base
    {
        class XtdGearInfo
        {
            model="91stLRs";
            LRs="MiniBig";
        };
    };

    //Jumppacks
    // JT12
    class MRC_jumpack_JT12: JLTS_Clone_jumppack_JT12
    {
        class XtdGearInfo
        {
            model="91stJT12Jumppack";
            Jumpack="Trooper";
        };
    };
    class MRC_empty_JT12: MRC_jumpack_JT12
    {
        class XtdGearInfo
        {
            model="91stJT12Jumppack";
            Jumpack="Empty";
        };
    };
    class MRC_veteran_jumpack_JT12: MRC_jumpack_JT12
    {
        class XtdGearInfo
        {
            model="91stJT12Jumppack";
            Jumpack="Veteran";
        };
    };
    class MRC_TL_jumpack_JT12: MRC_jumpack_JT12
    {
        class XtdGearInfo
        {
            model="91stJT12Jumppack";
            Jumpack="Teamlead";
        };
    };
    // CDV
    class MRC_AA_jumpack_archangel: MRC_Base_MC_JP
    {
        class XtdGearInfo
        {
            model="91stCDVJumppack";
            CDV="MedicCDV";
        };
    };
    #define Macro_MRC_Compat_Jumppack_MC_Backpack(a) class MRC_jumppack_mc_##a## : MRC_Base_MC_JP {\
		class XtdGearInfo\
        {\
            model="91stCDVJumppack";\
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
};