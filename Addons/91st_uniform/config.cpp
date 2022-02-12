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
                class CR
				{
					label = "CR";
				};
                class CRC
				{
					label = "CRC";
				};
				class CT
				{
					label = "CT";
				};
				class SCT
				{
					label = "SCT";
				};
				class VCT
				{
					label = "VCT";
				};
				class CSP
				{
					label = "CSP";
				};
				class CLC
				{
					label = "CLC";
				};
				class CP
				{
					label = "CP";
				};
				class CS
				{
					label = "CS";
				};
				class CSS
				{
					label = "CSS";
				};
				class CFS
				{
					label = "CFS";
				};
				class CSM
				{
					label = "CSM";
				};
				class WO1
				{
					label = "W01";
				};
				class WO2
				{
					label = "W02";
				};
				class WO3
				{
					label = "W03";
				};
				class WO4
				{
					label = "W04";
				};
				class WO5
				{
					label = "W05";
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
                    "WO4"
                };
				class CT
				{
					label = "CT";
				};
				class SCT
				{
					label = "SCT";
				};
				class VCT
				{
					label = "VCT";
				};
				class CSP
				{
					label = "CSP";
				};
				class CLC
				{
					label = "CLC";
				};
				class CP
				{
					label = "CP";
				};
				class CS
				{
					label = "CS";
				};
				class CSS
				{
					label = "CSS";
				};
				class WO1
				{
					label = "W01";
				};
				class WO2
				{
					label = "W02";
				};
				class WO3
				{
					label = "W03";
				};
				class WO4
				{
					label = "W04";
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
                class CT
				{
					label = "CT";
				};
                class CXC
				{
					label = "CXC";
				};
				class CX
				{
					label = "CX";
				};
				class CXX
				{
					label = "CXX";
				};
				class CXP
				{
					label = "CXP";
				};
				class CXS
				{
					label = "CXS";
				};
				class CXSS
				{
					label = "CXSS";
				};
				class CX1
				{
					label = "CX1";
				};
				class CX2
				{
					label = "CX2";
				};
				class CX3
				{
					label = "CX3";
				};
				class CX4
				{
					label = "CX4";
				};
				class CX5
				{
					label = "CX5";
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
                class CSP
				{
					label = "CSP";
				};
				class CLC
				{
					label = "CLC";
				};
				class CP
				{
					label = "CP";
				};
				class CS
				{
					label = "CS";
				};
				class CSS
				{
					label = "CSS";
				};
				class CSM
				{
					label = "CSM";
				};
				class CFS
				{
					label = "CFS";
				};
				class WO1
				{
					label = "W01";
				};
				class WO2
				{
					label = "W02";
				};
				class WO3
				{
					label = "W03";
				};
				class WO4
				{
					label = "W04";
				};
				class WO5
				{
					label = "W05";
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
                class CSP
				{
					label = "CSP";
				};
				class CLC
				{
					label = "CLC";
				};
				class CP
				{
					label = "CP";
				};
				class CS
				{
					label = "CS";
				};
				class CSS
				{
					label = "CSS";
				};
				class WO1
				{
					label = "WO1";
				};
				class WO2
				{
					label = "WO2";
				};
				class WO3
				{
					label = "WO3";
				};
				class WO4
				{
					label = "WO4";
				};
				class WO5
				{
					label = "WO5";
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
                    "Rat",
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
                class Rat
                {
                    label="Rat";
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
    class JLTS_Clone_P2_recon;
    class 91st_Armor_Base;
    //Rank Armor
    class 91st_Infantry_CR_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Infantry_Ranks";
            InfantryRank="CR";
        };
    };
    class 91st_Infantry_CRC_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Infantry_Ranks";
           InfantryRank="CRC";
        };
    };
    class 91st_Infantry_CT_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Infantry_Ranks";
           InfantryRank="CT";
        };
    };
    class 91st_Infantry_SCT_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Infantry_Ranks";
           InfantryRank="SCT";
        };
    };
    class 91st_Infantry_VCT_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Infantry_Ranks";
           InfantryRank="VCT";
        };
    };
    class 91st_Infantry_CSP_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Infantry_Ranks";
           InfantryRank="CSP";
        };
    };
    class 91st_Infantry_CLC_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Infantry_Ranks";
           InfantryRank="CLC";
        };
    };
    class 91st_Infantry_CP_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Infantry_Ranks";
           InfantryRank="CP";
        };
    };
    class 91st_Infantry_CS_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Infantry_Ranks";
           InfantryRank="CS";
        };
    };
    class 91st_Infantry_CSS_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Infantry_Ranks";
            InfantryRank="CSS";
        };
    };
    class 91st_Infantry_CFS_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Infantry_Ranks";
            InfantryRank="CFS";
        };
    };
    class 91st_Infantry_CSM_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Infantry_Ranks";
            InfantryRank="CSM";
        };
    };
    class 91st_Infantry_WO1_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Infantry_Ranks";
           InfantryRank="WO1";
        };
    };
    class 91st_Infantry_WO2_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Infantry_Ranks";
           InfantryRank="WO2";
        };
    };
    class 91st_Infantry_WO3_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Infantry_Ranks";
           InfantryRank="WO3";
        };
    };
    class 91st_Infantry_WO4_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Infantry_Ranks";
           InfantryRank="WO4";
        };
    };
    class 91st_Infantry_WO5_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Infantry_Ranks";
           InfantryRank="WO5";
        };
    };

    //Medic Armor
    class 91st_Medic_CT_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Medic_Ranks";
           MedicRank="CT";
        };
    };
    class 91st_Medic_SCT_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Medic_Ranks";
           MedicRank="SCT";
        };
    };
    class 91st_Medic_VCT_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Medic_Ranks";
           MedicRank="VCT";
        };
    };
    class 91st_Medic_CSP_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Medic_Ranks";
           MedicRank="CSP";
        };
    };
    class 91st_Medic_CLC_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Medic_Ranks";
           MedicRank="CLC";
        };
    };
    class 91st_Medic_CP_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Medic_Ranks";
           MedicRank="CP";
        };
    };
    class 91st_Medic_CS_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Medic_Ranks";
            MedicRank="CS";
        };
    };
    class 91st_Medic_CSS_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Medic_Ranks";
            MedicRank="CSS";
        };
    };
    class 91st_Medic_WO1_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Medic_Ranks";
           MedicRank="WO1";
        };
    };
    class 91st_Medic_WO2_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Medic_Ranks";
           MedicRank="WO2";
        };
    };
    class 91st_Medic_WO3_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Medic_Ranks";
           MedicRank="WO3";
        };
    };
    class 91st_Medic_WO4_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Medic_Ranks";
           MedicRank="WO4";
        };
    };

    //Pilots Armor
    class 91st_Pilot_CT_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Pilot_Ranks";
            PilotRank="CT";
        };
    };
    class 91st_Pilot_CXC_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Pilot_Ranks";
            PilotRank="CXC";
        };
    };
    class 91st_Pilot_CX_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Pilot_Ranks";
            PilotRank="CX";
        };
    };
    class 91st_Pilot_CXX_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Pilot_Ranks";
            PilotRank="CXX";
        };
    };
    class 91st_Pilot_CXP_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Pilot_Ranks";
            PilotRank="CXP";
        };
    };
    class 91st_Pilot_CXS_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Pilot_Ranks";
            PilotRank="CXS";
        };
    };
    class 91st_Pilot_CXSS_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Pilot_Ranks";
            PilotRank="CXSS";
        };
    };
    class 91st_Pilot_CX1_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Pilot_Ranks";
            PilotRank="CX1";
        };
    };
    class 91st_Pilot_CX2_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Pilot_Ranks";
            PilotRank="CX2";
        };
    };
    class 91st_Pilot_CX3_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Pilot_Ranks";
            PilotRank="CX3";
        };
    };
    class 91st_Pilot_CX4_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Pilot_Ranks";
            PilotRank="CX4";
        };
    };
    class 91st_Pilot_CX5_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Pilot_Ranks";
            PilotRank="CX5";
        };
    };

    //Mech Armor
    class 91st_Mechanized_CT_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Beskar_Ranks";
            BeskarRank="CT";
        };
    };
    class 91st_Mechanized_SCT_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Beskar_Ranks";
            BeskarRank="SCT";
        };
    };
    class 91st_Mechanized_VCT_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Beskar_Ranks";
            BeskarRank="VCT";
        };
    };
    class 91st_Mechanized_CSP_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Beskar_Ranks";
            BeskarRank="CSP";
        };
    };
    class 91st_Mechanized_CLC_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Beskar_Ranks";
            BeskarRank="CLC";
        };
    };
    class 91st_Mechanized_CP_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Beskar_Ranks";
            BeskarRank="CP";
        };
    };
    class 91st_Mechanized_CS_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Beskar_Ranks";
            BeskarRank="CS";
        };
    };
    class 91st_Mechanized_CSS_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Beskar_Ranks";
            BeskarRank="CSS";
        };
    };
    class 91st_Mechanized_WO1_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Beskar_Ranks";
            BeskarRank="WO1";
        };
    };
    class 91st_Mechanized_WO2_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Beskar_Ranks";
            BeskarRank="WO2";
        };
    };
    class 91st_Mechanized_WO3_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Beskar_Ranks";
            BeskarRank="WO3";
        };
    };
    class 91st_Mechanized_WO4_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Beskar_Ranks";
            BeskarRank="WO4";
        };
    };
    class 91st_Mechanized_WO5_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_Beskar_Ranks";
            BeskarRank="WO5";
        };
    };

    //Jade 
    class 91st_ARC_CSP_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_ARC_Ranks";
            ARCRank="CSP";
        };
    };
    class 91st_ARC_CLC_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_ARC_Ranks";
            ARCRank="CLC";
        };
    };
    class 91st_ARC_CP_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_ARC_Ranks";
            ARCRank="CP";
        };
    };
    class 91st_ARC_CS_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_ARC_Ranks";
            ARCRank="CS";
        };
    };
    class 91st_ARC_CSS_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_ARC_Ranks";
            ARCRank="CSS";
        };
    };
    class 91st_ARC_WO1_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_ARC_Ranks";
            ARCRank="WO1";
        };
    };
    class 91st_ARC_WO2_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_ARC_Ranks";
            ARCRank="WO2";
        };
    };
    class 91st_ARC_WO3_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_ARC_Ranks";
            ARCRank="WO3";
        };
    };
    class 91st_ARC_WO4_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_ARC_Ranks";
            ARCRank="WO4";
        };
    };
    class 91st_ARC_WO5_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91st_ARC_Ranks";
            ARCRank="WO5";
        };
    };

    //Munka Armor


    //ARF Armor


    // Custom Armor
    class 91st_Infantry_Axer_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Axer";
        };
    };
    class 91st_Infantry_Cross_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Cross";
        };
    };
    class 91st_Infantry_Corpse_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Corpse";
        };
    };
    class 91st_Infantry_Dex_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Dex";
        };
    };
    class 91st_Infantry_Frog_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Frog";
        };
    };
    class 91st_Infantry_Kuro_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Kuro";
        };
    };
    class 91st_Infantry_Mav_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Mav";
        };
    };
    class 91st_Infantry_Nova_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Nova";
        };
    };
    class 91st_Infantry_Rat_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Rat";
        };
    };
    class 91st_Infantry_Raze_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Raze";
        };
    };
    class 91st_Infantry_Roach_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Roach";
        };
    };
    class 91st_Infantry_Scorch_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Scorch";
        };
    };
    class 91st_Infantry_Sconch_Armor: 91st_Armor_Base
    {
        class XtdGearInfo
        {
            model="91stCustomArmor";
            Custom="Scorch2";
        };
    };
};
