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
        class 91st_ARCRangefinders
        {
            label="ARC Rangefinders";
            author="91st Aux Team";
            options[]={"ARCRangefinders"};
            class ARCRangefinders
            {
                labels="ARC Rangefinders";
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
                    "BlackBO"
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
            };
        };
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
                    "Grey",
                    "Red",
                    "Black"
                };
                class Grey
                {
                    label="Grey";
                };
                class Red
                {
                    label="Red";
                };
                class Black
                {
                    label="Black";
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
    class rd501_JLTS_CloneNVGRange;
    class rd501_JLTS_CloneNVG;
    class rd501_JLTS_CloneNVG_spec;
    class 91st_Visor_Down;

    //Arc Rangfinders
    class 91st_Rangefinder_Red_BW: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_ARCRangefinders";
            ARCRangefinders="RedBW";
        };
    };
    class 91st_Rangefinder_Red_BG: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_ARCRangefinders";
            ARCRangefinders="RedBG";
        };
    };
    class 91st_Rangefinder_Red_BO: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_ARCRangefinders";
            ARCRangefinders="RedBO";
        };
    };
    class 91st_Rangefinder_Gray_BW: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_ARCRangefinders";
            ARCRangefinders="GreyBW";
        };
    };
    class 91st_Rangefinder_Gray_BG: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_ARCRangefinders";
            ARCRangefinders="GreyBG";
        };
    };
    class 91st_Rangefinder_Gray_BO: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_ARCRangefinders";
            ARCRangefinders="GreyBO";
        };
    };
    class 91st_Rangefinder_Black_BW: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_ARCRangefinders";
            ARCRangefinders="BlackBW";
        };
    };
    class 91st_Rangefinder_Black_BG: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_ARCRangefinders";
            ARCRangefinders="BlackBG";
        };
    };
    class 91st_Rangefinder_Black_BO: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_ARCRangefinders";
            ARCRangefinders="BlackBO";
        };
    };

    //Visors
	class 91st_Visor: rd501_JLTS_CloneNVG
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="CT";
            Type="Up";
        };
    };
	class 91st_Visor_Down: rd501_JLTS_CloneNVG_spec
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