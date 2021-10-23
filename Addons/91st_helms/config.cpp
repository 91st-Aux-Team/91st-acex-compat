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
    class CfgWeapons 
    {
        class 91st_Recruit_Helmet_JLTS
        {
            label="Rank Helmets";
            author="Chopper";
            options[]={"Rankhelms"};
            class Rankhelms
            {
                labels="Officer Vests";
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
        class 91st_CXO_Helmet
        {
            class Pilotranks
            {
                label="Rank Helmets";
                author="Chopper";
                options[]={"PilotRankhelms"};
                class PilotRankhelms
                {
                    labels="Pilot Rank Helms";
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
        };
        /*class
        {
            class Pilotcustoms
            {
                label="Rank Helmets";
                author="Chopper";
                options[]={"Rankhelms"};
                class Rankhelms
                {
                    labels="Officer Vests";
                    values[]=
                    {
                        "CR",
                        "CRC",
                        "CT",
                        "SCT",
                        "VCT",
                        "CSP",
                        "CLC",
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
                    class CRC
                    {
                        label="CR-C";
                    };
                    class CT
            };
        };*/
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
    class 91st_Recruit_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            Rankhelms="CR";
        };
    };
    class 91st_Cadet_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            Rankhelms="CRC";
        };
    };
    class 91st_CT_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            Rankhelms="CT";
        };
    };
    class 91st_SCT_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            Rankhelms="SCT";
        };
    };
    class 91st_VCT_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            Rankhelms="VCT";
        };
    };
    class 91st_CSP_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            Rankhelms="CSP";
        };
    };
    class 91st_CLC_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            Rankhelms="CLC";
        };
    };
    class 91st_CP_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            Rankhelms="CP";
        };
    };
    class 91st_CS_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            Rankhelms="CS";
        };
    };
    class 91st_CFS_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            Rankhelms="CFS";
        };
    };
    class 91st_CSM_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            Rankhelms="CSM";
        };
    };
    class 91st_CL_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            Rankhelms="CL";
        };
    };
    class 91st_CC_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            Rankhelms="CC";
        };
    };
    class 91st_WO1_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            Rankhelms="WO1";
        };
    };
    class 91st_WO2_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            Rankhelms="WO2";
        };
    };
    class 91st_WO3_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            Rankhelms="WO3";
        };
    };
    class 91st_WO4_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            Rankhelms="WO4";
        };
    };
    class 91st_WO5_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            Rankhelms="WO5";
        };
    };
    class 91st_CXO_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            PilotRankhelms="CXO";
        };
    };
    class 91st_CXS_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            PilotRankhelms="CXS";
        };
    };
    class 91st_CXP_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            PilotRankhelms="CXP";
        };
    };
    class 91st_CXX_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            PilotRankhelms="CXX";
        };
    };
    class 91st_CX_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            PilotRankhelms="CX";
        };
    };
    class 91st_CXC_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            PilotRankhelms="CXC";
        };
    };
    class 91st_CXW_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="91st_Recruit_Helmet_JLTS";
            PilotRankhelms="CXW";
        };
    };
};