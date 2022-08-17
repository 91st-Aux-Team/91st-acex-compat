class CfgPatches
{
	class MRC_ACEAX_compat_helms
	{
		addonRootClass="MRC_ACEAX_compat"
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"aceax_gearinfo"
		};
		author="91st aux";
		version="0.1";
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
    class MRC_Pilot_Infantry_Helmet;
    class MRC_Beskar_Infantry_Helmet;
    class MRC_Pilot_Helmet;
	class Uniform_Base;
	class H_HelmetSpecB;
	class JLTS_CloneHelmetP2;
	class JLTS_CloneHelmetP2_illum;
	class JLTS_CloneHelmetARC;
	class JLTS_CloneHelmetBARC;
    class JLTS_CloneHelmetARC_illum;
    class MRC_Base_Helmet;
    //Inf Ranks

    #define Macro_MRC_Inf_Rank_Compat_Helmet(a) class MRC_##a##_Helmet : MRC_Base_Helmet {\
        class XtdGearInfo\
        {\
            model="Infrnakhelms";\
            InfantryRankhelms=##a##;\
        };\
    };

    Macro_MRC_Inf_Rank_Compat_Helmet(CR);
	Macro_MRC_Inf_Rank_Compat_Helmet(CRC);
	Macro_MRC_Inf_Rank_Compat_Helmet(CT);
	Macro_MRC_Inf_Rank_Compat_Helmet(SCT);
	Macro_MRC_Inf_Rank_Compat_Helmet(VCT);
	Macro_MRC_Inf_Rank_Compat_Helmet(CSP);

	Macro_MRC_Inf_Rank_Compat_Helmet(WO1);
	Macro_MRC_Inf_Rank_Compat_Helmet(WO2);
	Macro_MRC_Inf_Rank_Compat_Helmet(WO3);
	Macro_MRC_Inf_Rank_Compat_Helmet(WO4);
	Macro_MRC_Inf_Rank_Compat_Helmet(WO5);

	Macro_MRC_Inf_Rank_Compat_Helmet(CLC);
	Macro_MRC_Inf_Rank_Compat_Helmet(CP);
	Macro_MRC_Inf_Rank_Compat_Helmet(CS);
	Macro_MRC_Inf_Rank_Compat_Helmet(CSS);
	Macro_MRC_Inf_Rank_Compat_Helmet(CFS);
	Macro_MRC_Inf_Rank_Compat_Helmet(CSM);
    

    //Pilot Ranks
    #define Macro_MRC_Pilot_Inf_Rank_Compat_Helmet(a) class MRC_##a##_Helmet : MRC_Pilot_Infantry_Helmet  {\
        class XtdGearInfo\
        {\
            model="Pilotrankshelmets";\
            Type="Infantry";\
            Pilotranks=##a##;\
        };\
    };
    Macro_MRC_Pilot_Inf_Rank_Compat_Helmet(CXC);
	Macro_MRC_Pilot_Inf_Rank_Compat_Helmet(CX);
	Macro_MRC_Pilot_Inf_Rank_Compat_Helmet(CXX);

	Macro_MRC_Pilot_Inf_Rank_Compat_Helmet(CX1);
	Macro_MRC_Pilot_Inf_Rank_Compat_Helmet(CX2);
	Macro_MRC_Pilot_Inf_Rank_Compat_Helmet(CX3);
	Macro_MRC_Pilot_Inf_Rank_Compat_Helmet(CX4);
	Macro_MRC_Pilot_Inf_Rank_Compat_Helmet(CX5);

	Macro_MRC_Pilot_Inf_Rank_Compat_Helmet(CXP);
	Macro_MRC_Pilot_Inf_Rank_Compat_Helmet(CXS);
	Macro_MRC_Pilot_Inf_Rank_Compat_Helmet(CXSS);


    class MRC_Crew_Pilot_Helmet : MRC_Pilot_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Infantry";
            Pilotranks="Crew";
        };
    };
    #define Macro_MRC_Pilot_Rank_Compat_Helmet(a) class MRC_##a##_Pilot_Helmet : MRC_Pilot_Helmet     {\
        class XtdGearInfo\
        {\
            model="Pilotrankshelmets";\
            Type="Pilot";\
            Pilotranks=##a##;\
        };\
    };

    Macro_MRC_Pilot_Rank_Compat_Helmet(CXC);
	Macro_MRC_Pilot_Rank_Compat_Helmet(CX);
	Macro_MRC_Pilot_Rank_Compat_Helmet(CXX);
	Macro_MRC_Pilot_Rank_Compat_Helmet(CXW);
	Macro_MRC_Pilot_Rank_Compat_Helmet(CXP);
	Macro_MRC_Pilot_Rank_Compat_Helmet(CXS);

    /*class MRC_CXS_Pilot_Helmet: MRC_Pilot_Helmet
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Pilot";
            Pilotranks="CXS";
        };
    };

   //Pilot Infantry
    class MRC_Crew_Pilot_Helmet: MRC_Pilot_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Infantry";
            Pilotranks="Crewman";
        };
    };
    //Beskar
    class MRC_Beskar_CT_Helmet: MRC_Beskar_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Beskarhelmets";
            BeskarInfantryRankhelms="CT";
        };
    };*/

    #define Macro_MRC_Beskar_Inf_Rank_Compat_Helmet(a) class MRC_Beskar_##a##_Helmet : MRC_Beskar_Infantry_Helmet     {\
        class XtdGearInfo\
        {\
            model="Beskarhelmets";\
            BeskarInfantryRankhelms=##a##;\
        };\
    };

    Macro_MRC_Beskar_Inf_Rank_Compat_Helmet(CT);
	Macro_MRC_Beskar_Inf_Rank_Compat_Helmet(SCT);
	Macro_MRC_Beskar_Inf_Rank_Compat_Helmet(VCT);
	Macro_MRC_Beskar_Inf_Rank_Compat_Helmet(CSP);

	Macro_MRC_Beskar_Inf_Rank_Compat_Helmet(WO1);
	Macro_MRC_Beskar_Inf_Rank_Compat_Helmet(WO2);
	Macro_MRC_Beskar_Inf_Rank_Compat_Helmet(WO3);
	Macro_MRC_Beskar_Inf_Rank_Compat_Helmet(WO4);

	Macro_MRC_Beskar_Inf_Rank_Compat_Helmet(CLC);
	Macro_MRC_Beskar_Inf_Rank_Compat_Helmet(CP);
	Macro_MRC_Beskar_Inf_Rank_Compat_Helmet(CS);
	Macro_MRC_Beskar_Inf_Rank_Compat_Helmet(CSS);




    // Campaign
    class MRC_Campaign_Helmet: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="CampaignHelmets";
            Campaignhelms="CampaignStandard";
        };
    };
    class MRC_Campaign_Medic_Helmet: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="CampaignHelmets";
            Campaignhelms="CampaignMedic";
        };
    };
    class MRC_Campaign_BARC_Helmet: JLTS_CloneHelmetBARC
    {
        class XtdGearInfo
        {
            model="CampaignHelmets";
            Campaignhelms="CampaignBARC";
        };
    };
    class MRC_Campaign_BARC_Medic_Helmet: JLTS_CloneHelmetBARC
    {
        class XtdGearInfo
        {
            model="CampaignHelmets";
            Campaignhelms="CampaignBARCMedic";
        };
    };
};