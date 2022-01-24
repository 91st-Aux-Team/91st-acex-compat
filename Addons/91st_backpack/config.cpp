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
                    "Medic",
                    "EOD"
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
                class EOD
                {
                    label="EOD";
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
        class 91st_GAR_Backpack: JLTS_Clone_backpack
        {
            class XtdGearInfo
            {
                model="91stBackpacks";
                Backpacks="GAR";
                Type="Standard";
            };
        };
        class 91st_GAR_Straps_Backpack: JLTS_Clone_backpack_s
        {
            class XtdGearInfo
            {
                model="91stBackpacks";
                Backpacks="GAR";
                Type="Strap";
            };
        };

        //Kyber
        class 91st_Kyber_Backpack: JLTS_Clone_backpack
        {
            class XtdGearInfo
            {
                model="91stBackpacks";
                Backpacks="Kyber";
                Type="Standard";
            };
        };
        class 91st_Kyber_Straps_Backpack: JLTS_Clone_backpack_s
        {
            class XtdGearInfo
            {
                model="91stBackpacks";
                Backpacks="Kyber";
                Type="Strap";
            };
        };

        //Beskar
        class 91st_Beskar_Backpack: JLTS_Clone_backpack
        {
            class XtdGearInfo
            {
                model="91stBackpacks";
                Backpacks="Beskar";
                Type="Standard";
            };
        };
        class 91st_Beskar_Straps_Backpack: JLTS_Clone_backpack_s
        {
            class XtdGearInfo
            {
                model="91stBackpacks";
                Backpacks="Beskar";
                Type="Strap";
            };
        };

        //Nova
        class 91st_Nova_Backpack: JLTS_Clone_backpack
        {
            class XtdGearInfo
            {
                model="91stBackpacks";
                Backpacks="Nova";
                Type="Standard";
            };
        };
        class 91st_Nova_Straps_Backpack: JLTS_Clone_backpack_s
        {
            class XtdGearInfo
            {
                model="91stBackpacks";
                Backpacks="Nova";
                Type="Strap";
            };
        };

        //Medic
        class 91st_Medic_Backpack: 91st_GAR_Backpack
        {
            class XtdGearInfo
            {
                model="91stBackpacks";
                Backpacks="Medic";
                Type="Standard";
            };
        };
        class 91st_Medic_Straps_Backpack: 91st_GAR_Straps_Backpack
        {
            class XtdGearInfo
            {
                model="91stBackpacks";
                Backpacks="Medic";
                Type="Strap";
            };
        };
        //EOD
        class 91st_EOD_Backpack: 91st_GAR_Backpack
        {
            class XtdGearInfo
            {
                model="91stBackpacks";
                Backpacks="EOD";
                Type="Standard";
            };
        };
        class 91st_EOD_Straps_Backpack: 91st_GAR_Straps_Backpack
        {
            class XtdGearInfo
            {
                model="91stBackpacks";
                Backpacks="EOD";
                Type="Strap";
            };
        };

    //RTO Backpack
        class 91st_GAR_RTO_backpack: TFAR_rt1523g_big
        {
            class XtdGearInfo
            {
                model="91stRTOBackpacks";
                RTOBackpacks="GAR";
                Type="Standard";
            };
        };
	    class 91st_GAR_RTO_strap_packpack: 91st_GAR_RTO_backpack
        {
            class XtdGearInfo
            {
                model="91stRTOBackpacks";
                RTOBackpacks="GAR";
                Type="Strap";
            };
        };

        //Kyber
        class 91st_Kyber_RTO_packpack: 91st_GAR_RTO_backpack
        {
            class XtdGearInfo
            {
                model="91stRTOBackpacks";
                RTOBackpacks="Kyber";
                Type="Standard";
            };
        };
        class 91st_Kyber_RTO_strap_packpack: 91st_GAR_RTO_backpack
        {
            class XtdGearInfo
            {
                model="91stRTOBackpacks";
                RTOBackpacks="Kyber";
                Type="Strap";
            };
        };

        //Beskar
        class 91st_Beskar_RTO_packpack: 91st_GAR_RTO_backpack
        {
            class XtdGearInfo
            {
                model="91stRTOBackpacks";
                RTOBackpacks="Beskar";
                Type="Standard";
            };
        };
        class 91st_Beskar_RTO_strap_packpack: 91st_GAR_RTO_backpack
        {
            class XtdGearInfo
            {
                model="91stRTOBackpacks";
                RTOBackpacks="Beskar";
                Type="Strap";
            };
        };

        //Nova
        class 91st_Nova_RTO_packpack: 91st_GAR_RTO_backpack
        {
            class XtdGearInfo
            {
                model="91stRTOBackpacks";
                RTOBackpacks="Nova";
                Type="Standard";
            };
        };
        class 91st_Nova_RTO_strap_packpack: 91st_GAR_RTO_backpack
        {
            class XtdGearInfo
            {
                model="91stRTOBackpacks";
                RTOBackpacks="Nova";
                Type="Strap";
            };
        };

       

    //Long Ranges
    class 91st_mini_LR_attachment_arrow: 91st_GAR_RTO_backpack
    {
        class XtdGearInfo
        {
            model="91stLRs";
            LRs="MiniSmall";
        };
    };
    class 91st_mini_LR_pack_arrow: 91st_GAR_RTO_backpack
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