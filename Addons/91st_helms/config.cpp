class CfgPatches
{
	class 91st_ACEAX_compat_vests
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
            options[]={"Rankhelms"};
            class Rankhelms
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
                    //"CSS",
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
                class CRC
                {
                    label="CR-C";
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
        class Pilotrankshelmets
        {
            label="Pilot Rank Helmets";
            author="91st Aux Team";
            options[]={"Pilotranks"};
            class Pilotranks
            {
                labels="Pilot Rank Helmets";
                values[]=
                {
                    "CXC",
                    "CX",
                    "CXX",
                    "CXP",
                    "CXS",
                    "CXO",
                    "CXW"
                };
                class CXC
                {
                    label="CXC";
                };
                class CX
                {
                    label="CX";
                };
                class CXX
                {
                    label="CXX";
                };
                class CXP
                {
                    label="CXP";
                };
                class CXS
                {
                    label="CXS";
                };
                class CXO
                {
                    label="CXO";
                };
                class CXW
                {
                    label="CXW";
                };
            };
        };
        class Archelmets
        {
            label="ARC Helmets";
            author="91st Aux Team";
            options[]={"Archelms"};
            class Archelms
            {
                labels="ARC Helmets";
                values[]=
                {
                    "Tallyrand",
                    "Caber",
                    "Corn",
                    "Roach",
                    "Bacon",
                    "Skittles",
                    "Arcanist",
                    "Nova",
                    "Galahad",
                    "Loken",
                    "Scorch"
                };
                class Tallyrand
                {
                    label="Tallyrand";
                };
                class Caber
                {
                    label="Caber";
                };
                class Corn
                {
                    label="Corn";
                };
                class Roach
                {
                    label="Roach";
                };
                class Bacon
                {
                    label="Bacon";
                };
                class Skittles
                {
                    label="Skittles";
                };
                class Arcanist
                {
                    label="Arcanist";
                };
                class Nova
                {
                    label="Nova";
                };
                class Galahad
                {
                    label="Galahad";
                };
                class Loken
                {
                    label="Loken";
                };
                class Scorch
                {
                    label="Scorch";
                };
                
            };
        };
        class Beskarhelmets
        {
            label="Beskar Helmets";
            author="91st Aux Team";
            options[]={"Beskarhelms"};
            class Beskarhelms
            {
                labels="Beskar Helmets";
                values[]=
                {
                    "Base",
                    "Kuro",
                    "Toxic",
                    "Fly",
                    "Sentinel"
                };
                class Base
                {
                    label="Base";
                };
                class Kuro
                {
                    label="Kuro";
                };
                class Toxic
                {
                    label="Toxic";
                };
                class Fly
                {
                    label="Fly";
                };
                class Sentinel
                {
                    label="Sentinel";
                };
            };
        };
    };
};
class CfgWeapons
{
	class 212th_AB_Helmet;
	class 212th_Pilot_Helmet_91st;
	class Uniform_Base;
	class H_HelmetSpecB;
	class JLTS_CloneHelmetP2;
	class JLTS_CloneHelmetP2_illum;
	class JLTS_CloneHelmetARC;
	class JLTS_CloneHelmetBARC;
	class 212th_ATRT_helmet;
    class JLTS_CloneHelmetARC_illum;
    class 91st_Base_Helmet;
    //Inf Ranks
    class 91st_Recruit_Helmet_JLTS: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            Rankhelms="CR";
        };
    };
    class 91st_Cadet_Helmet_JLTS: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            Rankhelms="CRC";
        };
    };
    class 91st_CT_Helmet_JLTS: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            Rankhelms="CT";
        };
    };
    class 91st_SCT_Helmet_JLTS: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            Rankhelms="SCT";
        };
    };
    class 91st_VCT_Helmet_JLTS: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            Rankhelms="VCT";
        };
    };
    class 91st_CSP_Helmet_JLTS: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            Rankhelms="CSP";
        };
    };
    class 91st_CLC_Helmet_JLTS: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            Rankhelms="CLC";
        };
    };
    class 91st_CP_Helmet_JLTS: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            Rankhelms="CP";
        };
    };
    class 91st_CS_Helmet_JLTS: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            Rankhelms="CS";
        };
    };
    class 91st_CFS_Helmet_JLTS: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            Rankhelms="CFS";
        };
    };
    class 91st_CSM_Helmet_JLTS: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            Rankhelms="CSM";
        };
    };
    class 91st_CL_Helmet_JLTS: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            Rankhelms="CL";
        };
    };
    class 91st_CC_Helmet_JLTS: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            Rankhelms="CC";
        };
    };
    class 91st_WO1_Helmet_JLTS: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            Rankhelms="WO1";
        };
    };
    class 91st_WO2_Helmet_JLTS: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            Rankhelms="WO2";
        };
    };
    class 91st_WO3_Helmet_JLTS: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            Rankhelms="WO3";
        };
    };
    class 91st_WO4_Helmet_JLTS: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            Rankhelms="WO4";
        };
    };
    class 91st_WO5_Helmet_JLTS: 91st_Base_Helmet
    {
        class XtdGearInfo
        {
            model="Infrnakhelms";
            Rankhelms="WO5";
        };
    };

    //Pilot Ranks
    class 91st_CXO_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Pilotranks="CXO";
        };
    };
    class 91st_CXS_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Pilotranks="CXS";
        };
    };
    class 91st_CXP_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Pilotranks="CXP";
        };
    };
    class 91st_CXX_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Pilotranks="CXX";
        };
    };
    class 91st_CX_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Pilotranks="CX";
        };
    };
    class 91st_CXC_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Pilotranks="CXC";
        };
    };
    class 91st_CXW_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="Pilotrankshelmets";
            Pilotranks="CXW";
        };
    };
    
    //Beskar Helms
    class 91st_Beskar_Helmet_JLTS: 212th_ATRT_helmet
    {
        class XtdGearInfo
        {
            model="Beskarhelmets";
            Beskarhelms="Base";
        };
    };
    class 91st_Beskar_Kuro_Helmet_JLTS: 91st_Beskar_Helmet_JLTS
    {
        class XtdGearInfo
        {
            model="Beskarhelmets";
            Beskarhelms="Kuro";
        };
    };
    class 91st_Beskar_Toxic_Helmet_JLTS: 91st_Beskar_Helmet_JLTS
    {
        class XtdGearInfo
        {
            model="Beskarhelmets";
            Beskarhelms="Toxic";
        };
    };
    class 91st_Beskar_Fly_Helmet_JLTS: 91st_Beskar_Helmet_JLTS
    {
        class XtdGearInfo
        {
            model="Beskarhelmets";
            Beskarhelms="Fly";
        };
    };
    class 91st_Beskar_Sentinel_Helmet_JLTS: 91st_Beskar_Helmet_JLTS
    {
        class XtdGearInfo
        {
            model="Beskarhelmets";
            Beskarhelms="Sentinel";
        };
    };
};