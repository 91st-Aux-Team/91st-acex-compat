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
		version="0.1.1.2";
		versionStr="0.1.1.2";
		versionAr[]={0,1,1,2};
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
            options[]={"Backpacks"};
            class Backpacks
            {
                labels="Backpacks";
                values[]=
                {
                    "Standard",
                    "StandardStrap",
                    "StandardBelt",
                    "Medic",
                    "Medicbelt",
                    "MedicStrap",
                    "EOD",
                    "EODStrap",
                    "Straps"
                };
                class Standard
                {
                    label="Standard";
                };
                class StandardStrap
                {
                    label="Stand Strap";
                };
                class StandardBelt
                {
                    label="Stand Belt";
                };
                class Medic
                {
                    label="Medic";
                };
                class Medicbelt
                {
                    label="Med belt";
                };
                class MedicStrap
                {
                    label="Medic Strap";
                };
                class EOD
                {
                    label="EOD";
                };
                class EODStrap
                {
                    label="EOD Strap";
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
                    "RTO",
                    "RTOStrap",
                    "MiniSmall",
                    "MiniBig",
                    "RTOArrow",
                    "RTOStrapArrow",
                    "MiniSmallArrow",
                    "MiniBigArrow"
                };
                class RTO
                {
                    label="RTO";
                };
                class RTOStrap
                {
                    label="RTOStrap";
                };
                class MiniSmall
                {
                    label="MiniSmall";
                };
                class MiniBig
                {
                    label="MiniBig";
                };
                class RTOArrow
                {
                    label="RTOBeta";
                };
                class RTOStrapArrow
                {
                    label="RTOStrapBeta";
                };
                class MiniSmallArrow
                {
                    label="MiniSmallBeta";
                };
                class MiniBigArrow
                {
                    label="MiniBigBeta";
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
                    "Trooper",
                    "Empty",
                    "Veteran",
                    "Teamlead"
                };
                class Trooper
                {
                    label="Trooper";
                };
                class Empty
                {
                    label="Empty";
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
                    "TrooperCDV",
                    "KyberCDV",
                    "BeskarCDV",
                    "NovaCDV",
                    "JadeCDV",
                    "ArchangelCDV",
                    "ScorchCDV"
                };
                class TrooperCDV
                {
                    label="Trooper";
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
    class JLTS_Clone_backpack;
    class JLTS_Clone_backpack_eod;
    class JLTS_Clone_backpack_medic;
	class JLTS_Clone_backpack_s;
    class JLTS_Clone_belt_bag;
    class TFAR_rt1523g_big;
    class JLTS_Clone_backpack_RTO;
    class JLTS_Clone_LR_attachment;
    class JLTS_Clone_RTO_pack;
    class JLTS_Clone_backpack_s_RTO;
    class JLTS_Clone_jumppack_mc;
    class JLTS_Clone_jumppack_JT12;
    //Standard backpacks
    class 91st_Standard_Backpack: JLTS_Clone_backpack
    {
        class XtdGearInfo
        {
            model="91stBackpacks";
            Backpacks="Standard";
        };
    };
    class 91st_Standard_Backpack_s: JLTS_Clone_backpack_s
    {
        class XtdGearInfo
        {
            model="91stBackpacks";
            Backpacks="StandardStrap";
        };
    };
    class 91st_JLTS_Clone_belt_bag: JLTS_Clone_belt_bag
    {
        class XtdGearInfo
        {
            model="91stBackpacks";
            Backpacks="StandardBelt";
        };
    };
    class 91st_Medic_Backpack: JLTS_Clone_backpack_medic
    {
        class XtdGearInfo
        {
            model="91stBackpacks";
            Backpacks="Medic";
        };
    };
    class 91st_Medic_Belt_Backpack: JLTS_Clone_belt_bag
    {
        class XtdGearInfo
        {
            model="91stBackpacks";
            Backpacks="Medicbelt";
        };
    };
    class 91st_Medic_Backpack_s: JLTS_Clone_backpack_s
    {
        class XtdGearInfo
        {
            model="91stBackpacks";
            Backpacks="MedicStrap";
        };
    };
    class 91st_EOD_Backpack: JLTS_Clone_backpack_eod
    {
        class XtdGearInfo
        {
            model="91stBackpacks";
            Backpacks="EOD";
        };
    };
    class 91st_EOD_Backpack_s: JLTS_Clone_backpack_s
    {
        class XtdGearInfo
        {
            model="91stBackpacks";
            Backpacks="EODStrap";
        };
    };
    class 91st_Straps_bag: JLTS_Clone_belt_bag
    {
        class XtdGearInfo
        {
            model="91stBackpacks";
            Backpacks="Straps";
        };
    };

    //Long Ranges
    class 91st_RTO_backpack: JLTS_Clone_backpack_RTO
    {
        class XtdGearInfo
        {
            model="91stLRs";
            LRs="RTO";
        };
    };
    class 91st_RTO_backpack_s: JLTS_Clone_backpack_s_RTO
    {
        class XtdGearInfo
        {
            model="91stLRs";
            LRs="RTOStrap";
        };
    };
    class 91st_mini_LR_attachment: JLTS_Clone_LR_attachment
    {
        class XtdGearInfo
        {
            model="91stLRs";
            LRs="MiniSmall";
        };
    };
    class 91st_mini_LR_pack: JLTS_Clone_RTO_pack
    {
        class XtdGearInfo
        {
            model="91stLRs";
            LRs="MiniBig";
        };
    };
    class 91st_RTO_backpack_arrow: TFAR_rt1523g_big
    {
        class XtdGearInfo
        {
            model="91stLRs";
            LRs="RTOArrow";
        };
    };
    class 91st_RTO_backpack_s_arrow: TFAR_rt1523g_big
    {
        class XtdGearInfo
        {
            model="91stLRs";
            LRs="RTOStrapArrow";
        };
    };
    class 91st_mini_LR_attachment_arrow: TFAR_rt1523g_big
    {
        class XtdGearInfo
        {
            model="91stLRs";
            LRs="MiniSmallArrow";
        };
    };
    class 91st_mini_LR_pack_arrow: TFAR_rt1523g_big
    {
        class XtdGearInfo
        {
            model="91stLRs";
            LRs="MiniBigArrow";
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
    class 91st_jumppack_mc: JLTS_Clone_jumppack_mc
    {
        class XtdGearInfo
        {
            model="91stCDVJumppack";
            CDV="TrooperCDV";
        };
    };
    class 91st_AA_jumpack_archangel: 91st_jumppack_mc
    {
        class XtdGearInfo
        {
            model="91stCDVJumppack";
            CDV="ArchangelCDV";
        };
    };
    class 91st_jumppack_mc_jade: 91st_jumppack_mc
    {
        class XtdGearInfo
        {
            model="91stCDVJumppack";
            CDV="JadeCDV";
        };
    };
    class 91st_jumppack_mc_kyber: 91st_jumppack_mc
    {
        class XtdGearInfo
        {
            model="91stCDVJumppack";
            CDV="KyberCDV";
        };
    };
    class 91st_jumppack_mc_nova: 91st_jumppack_mc
    {
        class XtdGearInfo
        {
            model="91stCDVJumppack";
            CDV="NovaCDV";
        };
    };
    class 91st_jumppack_mc_beskar: 91st_jumppack_mc
    {
        class XtdGearInfo
        {
            model="91stCDVJumppack";
            CDV="BeskarCDV";
        };
    };
    class 91st_jumppack_mc_scorch: 91st_jumppack_mc
    {
        class XtdGearInfo
        {
            model="91stCDVJumppack";
            CDV="ScorchCDV";
        };
    };
};