class CfgPatches
{
	class 91st_ACEAX_compat_NVG
	{
		addonRootClass="91st_ACEAX_compat"
        name="91st_ACEAX_compat_NVG";
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
        class 91st_Rangefinders
        {
            label="Rangefinders";
            author="91st Aux Team";
            options[]={"Rangefinders"};
            class Rangefinders
            {
                labels="Rangefinders";
                values[]=
                {
                    "RedBW",
                    "RedBG",
                    "RedBO",
                    "GreyBW",
                    "GreyBG",
                    "GreyBO",
                    "BlackBW",
                    "BlackBG",
                    "BlackBO",
                    "ARFBW",
                    "ARFBG",
                    "ARFBO"
                };
                class RedBW
                {
                    label="RedBW";
                };
                class RedBG
                {
                    label="RedBG";
                };
                class RedBO
                {
                    label="RedBO";
                };
                class GreyBW
                {
                    label="GreyBW";
                };
                class GreyBG
                {
                    label="GreyBG";
                };
                class GreyBO
                {
                    label="GreyBO";
                };
                class BlackBW
                {
                    label="BlackBW";
                };
                class BlackBG
                {
                    label="BlackBG";
                };
                class BlackBO
                {
                    label="BlackBO";
                };
                class ARFBW
                {
                    label="ARFBW";
                };
                class ARFBG
                {
                    label="ARFBG";
                };
                class ARFBO
                {
                    label="ARFBO";
                };
            };
        };
        class 91stNvVisors
        {
            label="NV Visor";
            author="91st Aux Team";
            options[]={"NvVisor","Type"};
            class NvVisor
            {
                labels="Visors";
                values[]=
                {
                    "CT",
                    "SCT",
                    "VCT",
                    "CSP",
                    "WO4",
                    "CSS"
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
                class WO4
                {
                    label="WO4";
                };
                class CSS
                {
                    label="CSS";
                };
                
            };
            class Type
            {
                labels="Up or Down";
                values[]=
                {
                    "Up",
                    "Down"
                };
                class Up
                {
                    label="Up";
                };
                class Down
                {
                    label="Down";
                };
            };
        };
    };
};
class CfgWeapons
{
    class JLTS_CloneNVGRange;
    class JLTS_CloneNVG;
    class JLTS_CloneNVG_spec;
    class 91st_Visor_Down;

    //Arc Rangfinders
    class 91st_Rangefinder_Red_BW: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            Rangefinders="RedBW";
        };
    };
    class 91st_Rangefinder_Red_BG: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            Rangefinders="RedBG";
        };
    };
    class 91st_Rangefinder_Red_BO: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            Rangefinders="RedBO";
        };
    };
    class 91st_Rangefinder_Gray_BW: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            Rangefinders="GreyBW";
        };
    };
    class 91st_Rangefinder_Gray_BG: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            Rangefinders="GreyBG";
        };
    };
    class 91st_Rangefinder_Gray_BO: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            Rangefinders="GreyBO";
        };
    };
    class 91st_Rangefinder_Black_BW: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            Rangefinders="BlackBW";
        };
    };
    class 91st_Rangefinder_Black_BG: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            Rangefinders="BlackBG";
        };
    };
    class 91st_Rangefinder_Black_BO: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            Rangefinders="BlackBO";
        };
    };
    class 91st_Rangefinder_ARF_BW: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            Rangefinders="ARFBW";
        };
    };
    class 91st_Rangefinder_ARF_BG: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            Rangefinders="ARFBG";
        };
    };
    class 91st_Rangefinder_ARF_BO: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            Rangefinders="ARFBO";
        };
    };

    //Visors
	class 91st_Visor: JLTS_CloneNVG
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="CT";
            Type="Up";
        };
    };
	class 91st_Visor_Down: JLTS_CloneNVG_spec
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="CT";
            Type="Down";
        };
    };
    class 91st_Visor_CSS: 91st_Visor
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="CSS";
            Type="Up";
        };
    };
    class 91st_Visor_CSS_Down: 91st_Visor_Down
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="CSS";
            Type="Down";
        };
    };
    class 91st_Visor_SCT: 91st_Visor
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="SCT";
            Type="Up";
        };
    };
    class 91st_Visor_SCT_Down: 91st_Visor_Down
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="SCT";
            Type="Down";
        };
    };
    class 91st_Visor_VCT: 91st_Visor
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="VCT";
            Type="Up";
        };
    };
    class 91st_Visor_VCT_Down: 91st_Visor_Down
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="VCT";
            Type="Down";
        };
    };
    class 91st_Visor_CSP: 91st_Visor
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="CSP";
            Type="Up";
        };
    };
    class 91st_Visor_CSP_Down: 91st_Visor_Down
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="CSP";
            Type="Down";
        };
    };
    class 91st_Visor_WO4: 91st_Visor
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="WO4";
            Type="Up";
        };
    };
    class 91st_Visor_WO4_Down: 91st_Visor_Down
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="WO4";
            Type="Down";
        };
    };
};