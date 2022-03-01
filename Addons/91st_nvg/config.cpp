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
            options[]={"RFType", "RFThermal"};
            class RFType
            {
                labels="Rangefinder Type";
                values[]=
                {
                    "Red",
                    "Grey",
                    "Black",
                    "ARF"
                };
                class Red
                {
                    label="Red";
                };
                class Grey
                {
                    label="Grey";
                };
                class Black
                {
                    label="Black";
                };
                class ARF
                {
                    label="ARF";
                };
            };
            class RFThermal
            {
                labels="Thermal Type";
                values[]=
                {
                    "BW",
                    "BG",
                    "BO"
                };
                class BW
                {
                    label="Black White";
                };
                class BG
                {
                    label="Black Green";
                };
                class BO
                {
                    label="Black Orange";
                };
            }
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
    class 91st_Visor_Base;
    class 91st_Visor_Down_Base;

    //Arc Rangfinders
    class 91st_Rangefinder_Red_BW: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            RFType="Red";
            RFThermal="BW";
        };
    };
    class 91st_Rangefinder_Red_BG: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            RFType="Red";
            RFThermal="BG";
        };
    };
    class 91st_Rangefinder_Red_BO: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            RFType="Red";
            RFThermal="BO";
        };
    };
    class 91st_Rangefinder_Gray_BW: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            RFType="Grey";
            RFThermal="BW";
        };
    };
    class 91st_Rangefinder_Gray_BG: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            RFType="Grey";
            RFThermal="BG";
        };
    };
    class 91st_Rangefinder_Gray_BO: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            RFType="Grey";
            RFThermal="BO";
        };
    };
    class 91st_Rangefinder_Black_BW: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            RFType="Black";
            RFThermal="BW";
        };
    };
    class 91st_Rangefinder_Black_BG: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            RFType="Black";
            RFThermal="BG";
        };
    };
    class 91st_Rangefinder_Black_BO: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            RFType="Black";
            RFThermal="BO";
        };
    };
    class 91st_Rangefinder_ARF_BW: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            RFType="ARF";
            RFThermal="BW";
        };
    };
    class 91st_Rangefinder_ARF_BG: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            RFType="ARF";
            RFThermal="BG";
        };
    };
    class 91st_Rangefinder_ARF_BO: JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            RFType="ARF";
            RFThermal="BO";
        };
    };

    //Visors
	class 91st_Visor: 91st_Visor_Base
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="CT";
            Type="Up";
        };
    };
	class 91st_Visor_Down: 91st_Visor_Down_Base
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="CT";
            Type="Down";
        };
    };
    class 91st_Visor_CSS: 91st_Visor_Base
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="CSS";
            Type="Up";
        };
    };
    class 91st_Visor_CSS_Down: 91st_Visor_Down_Base
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="CSS";
            Type="Down";
        };
    };
    class 91st_Visor_SCT: 91st_Visor_Base
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="SCT";
            Type="Up";
        };
    };
    class 91st_Visor_SCT_Down: 91st_Visor_Down_Base
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="SCT";
            Type="Down";
        };
    };
    class 91st_Visor_VCT: 91st_Visor_Base
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="VCT";
            Type="Up";
        };
    };
    class 91st_Visor_VCT_Down: 91st_Visor_Down_Base
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="VCT";
            Type="Down";
        };
    };
    class 91st_Visor_CSP: 91st_Visor_Base
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="CSP";
            Type="Up";
        };
    };
    class 91st_Visor_CSP_Down: 91st_Visor_Down_Base
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="CSP";
            Type="Down";
        };
    };
    class 91st_Visor_WO4: 91st_Visor_Base
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="WO4";
            Type="Up";
        };
    };
    class 91st_Visor_WO4_Down: 91st_Visor_Down_Base
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="WO4";
            Type="Down";
        };
    };
};