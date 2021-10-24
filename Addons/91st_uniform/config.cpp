class CfgPatches
{
	class 91st_ACEAX_compat_uniforms
	{
		name="91st_ACEAX_compat_uniforms";
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
    class CfgWeapons 
    {
		class JLTS_Clone_P2_recon
        {
            label="91st Rank Armor";
            author="91st Aux Team";
            options[]={"Rank"};
            class Rank
            {
                label="Ranks";
                values[]=
                {
                    "CR",
                    "CT",
                    "SCT",
                    "VCT",
                    "CSP",
                    "CLC",
                    "CP",
                    "CS",
                    "CSS",
                    "CFS",
                    "CL",
                    "CC",
                    "WO1",
                    "WO2",
                    "WO3",
                    "WO4",
                    "WO5"
                };
                class CR
                {
                    label="CR";
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
                class CLC
                {
                    label="CLC";
                };
                class CP
                {
                    label="CP";
                };
                class CS
                {
                    label="CS";
                };
                class CSS
                {
                    label="CSS";
                };
                class CSM
                {
                    label="CSM";
                };
                class CFS
                {
                    label="CFS";
                };
                class CL
                {
                    label="CL";
                };
                class CC
                {
                    label="CC";
                };
                class WO1
                {
                    label="W01";
                };
                class WO2
                {
                    label="W02";
                };
                class WO3
                {
                    label="W03";
                };
                class WO4
                {
                    label="W04";
                };
                class WO5
                {
                    label="W05";
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
                    "Corpse",
                    "Cross",
                    "Dex",
                    "Frog",
                    "Kuro",
                    "Mav",
                    "Nova",
                    "Raze",
                    "Roach",
                    "Scorch",
                    "Scorch2"
                };
                class Axer
                {
                    label="Axer";
                };
                class Corpse
                {
                    label="Corpse";
                };
                class Cross
                {
                    label="Cross";
                };
                class Dex
                {
                    label="Dex";
                };
                class Frog
                {
                    label="Frog";
                };
                class Kuro
                {
                    label="Kuro";
                };
                class Mav
                {
                    label="Mav";
                };
                class Nova
                {
                    label="Nova";
                };
                class Penguin
                {
                    label="Penguin";
                };
                class Raze
                {
                    label="Raze";
                };
                class Roach
                {
                    label="Roach";
                };
                class Saint
                {
                    label="Saint";
                };
                class Scorch
                {
                    label="Scorch";
                };
                class Scorch2
                {
                    label="Scorch 2";
                };
            };
        };
    };
};
class CfgWeapons
{
    class Uniform_Base;
    //Rank Armor
    class 91st_Recruit_Armor: Uniform_Base
    {
        class XtdGearInfo : Uniform_Base
        {
            model="JLTS_Clone_P2_recon";
            Rank="CR";
        };
    };
    class 91st_CT_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="JLTS_Clone_P2_recon";
            Rank="CT";
        };
    };
    class 91st_SCT_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="JLTS_Clone_P2_recon";
            Rank="SCT";
        };
    };
    class 91st_VCT_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="JLTS_Clone_P2_recon";
            Rank="VCT";
        };
    };
    class 91st_CSP_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="JLTS_Clone_P2_recon";
            Rank="CSP";
        };
    };
    class 91st_CLC_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="JLTS_Clone_P2_recon";
            Rank="CLC";
        };
    };
    class 91st_CP_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="JLTS_Clone_P2_recon";
            Rank="CP";
        };
    };
    class 91st_CS_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="JLTS_Clone_P2_recon";
            Rank="CS";
        };
    };
    class 91st_CSS_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="JLTS_Clone_P2_recon";
            Rank="CSS";
        };
    };
    class 91st_CFS_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="JLTS_Clone_P2_recon";
            Rank="CFS";
        };
    };
    class 91st_CL_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="JLTS_Clone_P2_recon";
            Rank="CL";
        };
    };
    class 91st_CC_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="JLTS_Clone_P2_recon";
            Rank="CC";
        };
    };
    class 91st_WO1_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="JLTS_Clone_P2_recon";
            Rank="WO1";
        };
    };
    class 91st_WO2_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="JLTS_Clone_P2_recon";
            Rank="WO2";
        };
    };
    class 91st_WO3_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="JLTS_Clone_P2_recon";
            Rank="WO3";
        };
    };
    class 91st_WO4_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="JLTS_Clone_P2_recon";
            Rank="WO4";
        };
    };
    class 91st_WO5_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="JLTS_Clone_P2_recon";
            Rank="WO5";
        };
    };

    // Custom Armor
    class 91st_Axer_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Axer";
        };
    };
    class 91st_Cross_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Cross";
        };
    };
    class 91st_Corpse_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Corpse";
        };
    };
    class 91st_Dex_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Dex";
        };
    };
    class 91st_Frog_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Frog";
        };
    };
    class 91st_Kuro_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Kuro";
        };
    };
    class 91st_Mav_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Mav";
        };
    };
    class 91st_Nova_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Nova";
        };
    };
    class 91st_Raze_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Raze";
        };
    };
    class 91st_Roach_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Roach";
        };
    };
    class 91st_Scorch_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Scorch";
        };
    };
    class 91st_Scorch_Armor_Alt: Uniform_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Scorch2";
        };
    };
};
