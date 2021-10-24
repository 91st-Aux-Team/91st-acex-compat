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
            author="Chopper";
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
            author="Chopper";
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
        class 91stJumppack
        {
            label="Jumppacks";
            author="Chopper";
            options[]={"Jumpack"};
            class Jumpack
            {
                labels="Jumpack";
                values[]=
                {
                    "JTrooper",
                    "JVeteran",
                    "JTeamlead",
                    "Archangel",
                    "Jade",
                    "CDVTrooper"
                };
                class JT12
                {
                    label="JT12";
                };
                class JTrooper
                {
                    label="Trooper";
                };
                class JVeteran
                {
                    label="Veteran";
                };
                class JTeamlead
                {
                    label="Teamlead";
                };
                class Archangel
                {
                    label="Archangel";
                };
                class Jade
                {
                    label="Jade";
                };
                class CDVTrooper
                {
                    label="CDVTrooper";
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
    class 91st_jumpack_JT12: JLTS_Clone_jumppack_JT12
    {
        class XtdGearInfo
        {
            model="91stJumppack";
            Jumpack="JTrooper";
        };
    };
    class 91st_jumppack_trooper_mc: JLTS_Clone_jumppack_mc
    {
        class XtdGearInfo
        {
            model="91stJumppack";
            Jumpack="CDVTrooper";
        };
    };
    class 91st_veteran_jumpack_JT12: JLTS_Clone_jumppack_JT12
    {
        class XtdGearInfo
        {
            model="91stJumppack";
            Jumpack="JVeteran";
        };
    };
    class 91st_TL_jumpack_JT12: JLTS_Clone_jumppack_JT12
    {
        class XtdGearInfo
        {
            model="91stJumppack";
            Jumpack="JTeamlead";
        };
    };
    class 91st_AA_jumpack_JT12: JLTS_Clone_jumppack_mc
    {
        class XtdGearInfo
        {
            model="91stJumppack";
            Jumpack="Archangel";
        };
    };
    class 91st_jumppack_mc_jade: JLTS_Clone_jumppack_mc
    {
        class XtdGearInfo
        {
            model="91stJumppack";
            Jumpack="Jade";
        };
    };
};