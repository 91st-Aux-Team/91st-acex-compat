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

    #define Macro_91st_Inf_Rank_Compat_Helmet(a) class 91st_##a##_Helmet : 91st_Base_Helmet {\
        class XtdGearInfo\
        {\
            model="Infrnakhelms";\
            InfantryRankhelms=##a##;\
        };\
    };

    Macro_91st_Inf_Rank_Compat_Helmet(CR);
	Macro_91st_Inf_Rank_Compat_Helmet(CRC);
	Macro_91st_Inf_Rank_Compat_Helmet(CT);
	Macro_91st_Inf_Rank_Compat_Helmet(SCT);
	Macro_91st_Inf_Rank_Compat_Helmet(VCT);
	Macro_91st_Inf_Rank_Compat_Helmet(CSP);

	Macro_91st_Inf_Rank_Compat_Helmet(WO1);
	Macro_91st_Inf_Rank_Compat_Helmet(WO2);
	Macro_91st_Inf_Rank_Compat_Helmet(WO3);
	Macro_91st_Inf_Rank_Compat_Helmet(WO4);
	Macro_91st_Inf_Rank_Compat_Helmet(WO5);

	Macro_91st_Inf_Rank_Compat_Helmet(CLC);
	Macro_91st_Inf_Rank_Compat_Helmet(CP);
	Macro_91st_Inf_Rank_Compat_Helmet(CS);
	Macro_91st_Inf_Rank_Compat_Helmet(CSS);
	Macro_91st_Inf_Rank_Compat_Helmet(CFS);
	Macro_91st_Inf_Rank_Compat_Helmet(CSM);
    

    //Pilot Ranks
    #define Macro_91st_Pilot_Inf_Rank_Compat_Helmet(a) class 91st_##a##_Helmet : 91st_Pilot_Infantry_Helmet  {\
        class XtdGearInfo\
        {\
            model="Pilotrankshelmets";\
            Type="Infantry";\
            Pilotranks=##a##;\
        };\
    };
    Macro_91st_Pilot_Inf_Rank_Compat_Helmet(CXC);
	Macro_91st_Pilot_Inf_Rank_Compat_Helmet(CX);
	Macro_91st_Pilot_Inf_Rank_Compat_Helmet(CXX);

	Macro_91st_Pilot_Inf_Rank_Compat_Helmet(CX1);
	Macro_91st_Pilot_Inf_Rank_Compat_Helmet(CX2);
	Macro_91st_Pilot_Inf_Rank_Compat_Helmet(CX3);
	Macro_91st_Pilot_Inf_Rank_Compat_Helmet(CX4);
	Macro_91st_Pilot_Inf_Rank_Compat_Helmet(CX5);

	Macro_91st_Pilot_Inf_Rank_Compat_Helmet(CXP);
	Macro_91st_Pilot_Inf_Rank_Compat_Helmet(CXS);
	Macro_91st_Pilot_Inf_Rank_Compat_Helmet(CXSS);


    class 91st_Crew_Pilot_Helmet : 91st_Pilot_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Infantry";
            Pilotranks="Crew";
        };
    };
    #define Macro_91st_Pilot_Rank_Compat_Helmet(a) class 91st_##a##_Pilot_Helmet : 91st_Pilot_Helmet     {\
        class XtdGearInfo\
        {\
            model="Pilotrankshelmets";\
            Type="Pilot";\
            Pilotranks=##a##;\
        };\
    };

    Macro_91st_Pilot_Rank_Compat_Helmet(CXC);
	Macro_91st_Pilot_Rank_Compat_Helmet(CX);
	Macro_91st_Pilot_Rank_Compat_Helmet(CXX);
	Macro_91st_Pilot_Rank_Compat_Helmet(CXW);
	Macro_91st_Pilot_Rank_Compat_Helmet(CXP);
	Macro_91st_Pilot_Rank_Compat_Helmet(CXS);

    /*class 91st_CXS_Pilot_Helmet: 91st_Pilot_Helmet
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Type="Pilot";
            Pilotranks="CXS";
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
    //Beskar
    class 91st_Beskar_CT_Helmet: 91st_Beskar_Infantry_Helmet
    {
        class XtdGearInfo
        {
            model="Beskarhelmets";
            BeskarInfantryRankhelms="CT";
        };
    };*/

    #define Macro_91st_Beskar_Inf_Rank_Compat_Helmet(a) class 91st_Beskar_##a##_Helmet : 91st_Beskar_Infantry_Helmet     {\
        class XtdGearInfo\
        {\
            model="Beskarhelmets";\
            BeskarInfantryRankhelms=##a##;\
        };\
    };

    Macro_91st_Beskar_Inf_Rank_Compat_Helmet(CT);
	Macro_91st_Beskar_Inf_Rank_Compat_Helmet(SCT);
	Macro_91st_Beskar_Inf_Rank_Compat_Helmet(VCT);
	Macro_91st_Beskar_Inf_Rank_Compat_Helmet(CSP);

	Macro_91st_Beskar_Inf_Rank_Compat_Helmet(WO1);
	Macro_91st_Beskar_Inf_Rank_Compat_Helmet(WO2);
	Macro_91st_Beskar_Inf_Rank_Compat_Helmet(WO3);
	Macro_91st_Beskar_Inf_Rank_Compat_Helmet(WO4);

	Macro_91st_Beskar_Inf_Rank_Compat_Helmet(CLC);
	Macro_91st_Beskar_Inf_Rank_Compat_Helmet(CP);
	Macro_91st_Beskar_Inf_Rank_Compat_Helmet(CS);
	Macro_91st_Beskar_Inf_Rank_Compat_Helmet(CSS);




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