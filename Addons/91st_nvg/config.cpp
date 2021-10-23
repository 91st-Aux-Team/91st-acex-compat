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
        class 91st_ARCRangefinders
        {
            label="ARC Rangefinders";
            author="Chopper";
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
                    "BlackBO",
                    "BlackBreather"
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
                class BlackBreather
                {
                    label="BlackBreather";
                };
            };
        };
        class 91st_Rangefinders
        {
            label="Rangefinders";
            author="Chopper";
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
            author="Chopper";
            options[]={"NvVisor"};
            class NvVisor
            {
                labels="ARC Rangefinders";
                values[]=
                {
                    "Red",
                    "RedFull",
                    "Grey",
                    "GreyFull",
                    "Black",
                    "SpecRed",
                    "SpecRedFull",
                    "SpecGrey",
                    "SpecGreyFull",
                    "SpecBlack"
                };
                class Red
                {
                    label="Red";
                };
                class RedFull
                {
                    label="RedFull";
                };
                class Grey
                {
                    label="Grey";
                };
                class GreyFull
                {
                    label="GreyFull";
                };
                class Black
                {
                    label="Black";
                };
                class SpecRed
                {
                    label="SpecRed";
                };
                class SpecRedFull
                {
                    label="SpecRedFull";
                };
                class SpecGrey
                {
                    label="SpecGrey";
                };
                class SpecGreyFull
                {
                    label="SpecGreyFull";
                };
                class SpecBlack
                {
                    label="SpecBlack";
                };
            };
        };
    };
};
class CfgWeapons
{
    class rd501_JLTS_CloneNVGRange;
    class rd501_JLTS_CloneNVGCC;
    class rd501_JLTS_CloneNVG;
    class rd501_JLTS_CloneNVG_spec;
    //Arc Rangfinders
    class 91st_ArcNVGRange_red_bw: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_ARCRangefinders";
            ARCRangefinders="RedBW";
        };
    };
    class 91st_ArcNVGRange_red_bg: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_ARCRangefinders";
            ARCRangefinders="RedBG";
        };
    };
    class 91st_ArcNVGRange_red_bo: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_ARCRangefinders";
            ARCRangefinders="RedBO";
        };
    };
    class 91st_ArcNVGRange_gray_bw: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_ARCRangefinders";
            ARCRangefinders="GreyBW";
        };
    };
    class 91st_ArcNVGRange_gray_bg: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_ARCRangefinders";
            ARCRangefinders="GreyBG";
        };
    };
    class 91st_ArcNVGRange_gray_bo: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_ARCRangefinders";
            ARCRangefinders="GreyBO";
        };
    };
    class 91st_ArcNVGRange_black_bw: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_ARCRangefinders";
            ARCRangefinders="BlackBW";
        };
    };
    class 91st_ArcNVGRange_black_bg: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_ARCRangefinders";
            ARCRangefinders="BlackBG";
        };
    };
    class 91st_ArcNVGRange_black_bo: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_ARCRangefinders";
            ARCRangefinders="BlackBO";
        };
    };
    class 91st_ArcNVGRange_black_bo2: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_ARCRangefinders";
            ARCRangefinders="BlackBreather";
        };
    };

    //Rangefinders
    class 91st_CloneNVGRange_gray: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            Rangefinders="Grey";
        };
    };
   class 91st_CloneNVGRange_red: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            Rangefinders="Red";
        };
    };
    class 91st_CloneNVGRange_black: rd501_JLTS_CloneNVGRange
    {
        class XtdGearInfo
        {
            model="91st_Rangefinders";
            Rangefinders="Black";
        };
    };

    //Visors
    class 91st_CloneNVG_red: rd501_JLTS_CloneNVG
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="Red";
        };
    };
    class 91st_CloneNVG_red2: rd501_JLTS_CloneNVG
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="RedFull";
        };
    };
    class 91st_CloneNVG_gray: rd501_JLTS_CloneNVG
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="Grey";
        };
    };
    class 91st_CloneNVG_gray2: rd501_JLTS_CloneNVG
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="GreyFull";
        };
    };
    class 91st_CloneNVG_black: rd501_JLTS_CloneNVG
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="Black";
        };
    };
    class 91st_CloneNVG_spec_red: rd501_JLTS_CloneNVG_spec
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="SpecRed";
        };
    };
    class 91st_CloneNVG_spec_red2: rd501_JLTS_CloneNVG_spec
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="SpecRedFull";
        };
    };
    class 91st_CloneNVG_spec_gray: rd501_JLTS_CloneNVG_spec
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="SpecGrey";
        };
    };
    class 91st_CloneNVG_spec_gray2: rd501_JLTS_CloneNVG_spec
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="SpecGreyFull";
        };
    };
    class 91st_CloneNVG_spec_black2: rd501_JLTS_CloneNVG_spec
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="SpecBlack";
        };
    };
};