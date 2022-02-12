class CfgPatches
{
	class 91st_ACEAX_compat_helms
	{
		addonRootClass="91st_ACEAX_compat"
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
        class Infrnakhelms
        {
            label="Rank Helmets";
            author="91st Aux Team";
            options[]={"InfantryRankhelms"};
            class InfantryRankhelms
            {
                labels="Infantry Rank Helmets";
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
                class CRC
                {
                    label="CRC";
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
                class CSM
                {
                    label="CSM";
                };
                class CFS
                {
                    label="CFS";
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
        class Pilotrankshelmets
        {
            label="Pilot Rank Helmets";
            author="91st Aux Team";
            options[]={"Type","Pilotranks"};
            class Type
            {
                labels="Type";
                values[]=
                {
                    "Pilot",
                    "Infantry"
                };
            };
            class Pilotranks
            {
                labels="Pilot Rank Helmets";
                values[]=
                {
                    "Crewman",
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
        class Beskarhelmets
        {
            label="Beskar Rank Helmets";
            author="91st Aux Team";
            options[]={"BeskarInfantryRankhelms"};
            class BeskarInfantryRankhelms
            {
                labels="Beskar Rank Helmets";
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
                class CSM
                {
                    label="CSM";
                };
                class CFS
                {
                    label="CFS";
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

        class CampaignHelmets
        {
            label="Campaign Helmets";
            author="91st Aux Team";
            options[]={"Campaignhelms"};
            class Campaignhelms
            {
                labels="Campaign Helmets";
                values[]=
                {
                    "CampaignStandard",
                    "CampaignMedic",
                    "CampaignBARC",
                    "CampaignBARCMedic"
                };
                class CampaignStandard
                {
                    label="Standard";
                };
                class CampaignMedic
                {
                    label="Medic";
                };
                class CampaignBARC
                {
                    label="BARC";
                };
                class CampaignBARCMedic
                {
                    label="BARC Medic";
                };
            };
        };
    };
};
class CfgWeapons
{
    class 91st_Pilot_Infantry_Helmet;
    class 91st_Beskar_Infantry_Helmet;
    class 91st_Pilot_Helmet;
	class Uniform_Base;
	class H_HelmetSpecB;
	class JLTS_CloneHelmetP2;
	class JLTS_CloneHelmetP2_illum;
	class JLTS_CloneHelmetARC;
	class JLTS_CloneHelmetBARC;
    class JLTS_CloneHelmetARC_illum;
    class 91st_Base_Helmet;
    //Inf Ranks
    class 91st_CR_Helmet: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            InfantryRankhelms="CR";
        };
    };
    class 91st_CRC_Helmet: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            InfantryRankhelms="CRC";
        };
    };
    class 91st_CT_Helmet: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            InfantryRankhelms="CT";
        };
    };
    class 91st_SCT_Helmet: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            InfantryRankhelms="SCT";
        };
    };
    class 91st_VCT_Helmet: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            InfantryRankhelms="VCT";
        };
    };
    class 91st_CSP_Helmet: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            InfantryRankhelms="CSP";
        };
    };
    class 91st_CLC_Helmet: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            InfantryRankhelms="CLC";
        };
    };
    class 91st_CP_Helmet: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            InfantryRankhelms="CP";
        };
    };
    class 91st_CS_Helmet: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            InfantryRankhelms="CS";
        };
    };
    class 91st_CSS_Helmet: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            InfantryRankhelms="CSS";
        };
    };
    class 91st_CFS_Helmet: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            InfantryRankhelms="CFS";
        };
    };
    class 91st_CSM_Helmet: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            InfantryRankhelms="CSM";
        };
    };
    class 91st_WO1_Helmet: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            InfantryRankhelms="WO1";
        };
    };
    class 91st_WO2_Helmet: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            InfantryRankhelms="WO2";
        };
    };
    class 91st_WO3_Helmet: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            InfantryRankhelms="WO3";
        };
    };
    class 91st_WO4_Helmet: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            InfantryRankhelms="WO4";
        };
    };
    class 91st_WO5_Helmet: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            InfantryRankhelms="WO5";
        };
    };

    //Pilot Ranks
    class 91st_CXS_Pilot_Helmet: 91st_Pilot_Helmet
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Pilot";
            Pilotranks="CXS";
        };
    };
    class 91st_CXP_Pilot_Helmet: 91st_Pilot_Helmet
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Pilot";
            Pilotranks="CXP";
        };
    };
    class 91st_CXX_Pilot_Helmet: 91st_Pilot_Helmet
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Pilot";
            Pilotranks="CXX";
        };
    };
    class 91st_CX_Pilot_Helmet: 91st_Pilot_Helmet
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Pilot";
            Pilotranks="CX";
        };
    };
    class 91st_CXC_Pilot_Helmet: 91st_Pilot_Helmet
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Pilot";
            Pilotranks="CXC";
        };
    };
    class 91st_CXW_Pilot_Helmet: 91st_Pilot_Helmet
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Pilot";
            Pilotranks="CX1";
        };
    };

   //Pilot Infantry
    class 91st_Crew_Pilot_Helmet: 91st_Pilot_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Infantry";
            Pilotranks="Crewman";
        };
    };
    class 91st_CXSS_Helmet: 91st_Pilot_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Infantry";
            Pilotranks="CXSS";
        };
    };
    class 91st_CXS_Helmet: 91st_Pilot_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Infantry";
            Pilotranks="CXS";
        };
    };
    class 91st_CXP_Helmet: 91st_Pilot_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Infantry";
            Pilotranks="CXP";
        };
    };
    class 91st_CXX_Helmet: 91st_Pilot_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Infantry";
            Pilotranks="CXX";
        };
    };
    class 91st_CX_Helmet: 91st_Pilot_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Infantry";
            Pilotranks="CX";
        };
    };
    class 91st_CXC_Helmet: 91st_Pilot_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Infantry";
            Pilotranks="CXC";
        };
    };
    class 91st_CX1_Helmet: 91st_Pilot_Infantry_Helmet
	{
		class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Infantry";
            Pilotranks="CX1";
        };
	};
	class 91st_CX2_Helmet: 91st_Pilot_Infantry_Helmet
	{
		class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Infantry";
            Pilotranks="CX2";
        };
	};
	class 91st_CX3_Helmet: 91st_Pilot_Infantry_Helmet
	{
		class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Infantry";
            Pilotranks="CX3";
        };
	};
	class 91st_CX4_Helmet: 91st_Pilot_Infantry_Helmet
	{
		class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Infantry";
            Pilotranks="CX4";
        };
	};
    class 91st_CX5_Helmet: 91st_Pilot_Infantry_Helmet
	{
		class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Infantry";
            Pilotranks="CX5";
        };
	};

    //Beskar
    class 91st_Beskar_CT_Helmet: 91st_Beskar_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Beskarhelmets";
            BeskarInfantryRankhelms="CT";
        };
    };
    class 91st_Beskar_SCT_Helmet: 91st_Beskar_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Beskarhelmets";
            BeskarInfantryRankhelms="SCT";
        };
    };
    class 91st_Beskar_VCT_Helmet: 91st_Beskar_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Beskarhelmets";
            BeskarInfantryRankhelms="VCT";
        };
    };
    class 91st_Beskar_CSP_Helmet: 91st_Beskar_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Beskarhelmets";
            BeskarInfantryRankhelms="CSP";
        };
    };
    class 91st_Beskar_CLC_Helmet: 91st_Beskar_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Beskarhelmets";
            BeskarInfantryRankhelms="CLC";
        };
    };
    class 91st_Beskar_CP_Helmet: 91st_Beskar_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Beskarhelmets";
            BeskarInfantryRankhelms="CP";
        };
    };
    class 91st_Beskar_CS_Helmet: 91st_Beskar_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Beskarhelmets";
            BeskarInfantryRankhelms="CS";
        };
    };
    class 91st_Beskar_CSS_Helmet: 91st_Beskar_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Beskarhelmets";
            BeskarInfantryRankhelms="CSS";
        };
    };
    class 91st_Beskar_WO1_Helmet: 91st_Beskar_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Beskarhelmets";
            BeskarInfantryRankhelms="WO1";
        };
    };
    class 91st_Beskar_WO2_Helmet: 91st_Beskar_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Beskarhelmets";
            BeskarInfantryRankhelms="WO2";
        };
    };
    class 91st_Beskar_WO3_Helmet: 91st_Beskar_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Beskarhelmets";
            BeskarInfantryRankhelms="WO3";
        };
    };
    class 91st_Beskar_WO4_Helmet: 91st_Beskar_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Beskarhelmets";
            BeskarInfantryRankhelms="WO4";
        };
    };
    class 91st_Beskar_WO5_Helmet: 91st_Beskar_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Beskarhelmets";
            BeskarInfantryRankhelms="WO5";
        };
    };





    // Campaign
    class 91st_Campaign_Helmet: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="CampaignHelmets";
            Campaignhelms="CampaignStandard";
        };
    };
    class 91st_Campaign_Medic_Helmet: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="CampaignHelmets";
            Campaignhelms="CampaignMedic";
        };
    };
    class 91st_Campaign_BARC_Helmet: JLTS_CloneHelmetBARC
    {
        class XtdGearInfo
        {
            model="CampaignHelmets";
            Campaignhelms="CampaignBARC";
        };
    };
    class 91st_Campaign_BARC_Medic_Helmet: JLTS_CloneHelmetBARC
    {
        class XtdGearInfo
        {
            model="CampaignHelmets";
            Campaignhelms="CampaignBARCMedic";
        };
    };
};