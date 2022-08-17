class CfgPatches
{
	class MRC_ACEAX_compat_NVG
	{
		addonRootClass="MRC_ACEAX_compat"
        name="MRC_ACEAX_compat_NVG";
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
        class MRC_Rangefinders
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
            };
            class RFThermal
            {
                labels="Thermal Type";
                changeingame = 1;
                values[]=
                {
                    "BW",
                    "BG",
                    "BO"
                };
                class BW
                {
                    label="Black White";
                    actionlabel = "Black White";
                };
                class BG
                {
                    label="Black Green";
                    actionlabel = "Black Green";
                };
                class BO
                {
                    label="Black Orange";
                    actionlabel = "Black Orange";
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
            };
            class Type
            {
                labels="Up or Down";
                values[]=
                {
                    "Up",
                    "Down"
                };
            };
        };
        class 91stNvVisorsCustom
        {
            label="NV Visor Custom";
            author="91st Aux Team";
            options[]={"NvVisorCust"};
            class NvVisorCust
            {
                labels="Visors";
                values[]=
                {
                    "Arcanist",
                    "Binns",
                    "Frasier",
                    "Leer",
                    "Perry",
                    "Sound",
                    "Jericho"
                };
            };
        };
        class NF_Chips
        {
            label="NVG Chips";
            author="91st Aux Team";
            options[]={"NVGChips"};
            class NVGChips
            {
                labels="NVG Chips";
                values[]=
                {
                    "NVG",
                    "White",
                    "Green",
                    "Orange"
                };
            };
        };
    };
};
class CfgWeapons
{
    class JLTS_CloneNVGRange;
    class MRC_Visor_Base;
    class MRC_Visor_Down_Base;

    //Arc Rangfinders
    #define Macro_MRC_Copmat_Rangefinders(a,b) class MRC_Rangefinder_##a##_##b## : JLTS_CloneNVGRange {\
        class XtdGearInfo\
        {\
            model="MRC_Rangefinders";\
            RFType=##a##;\
            RFThermal=##b##;\
        };\
    };

    Macro_MRC_Copmat_Rangefinders(Red,BW);
    Macro_MRC_Copmat_Rangefinders(Red,BG);
    Macro_MRC_Copmat_Rangefinders(Red,BO);
    Macro_MRC_Copmat_Rangefinders(Grey,BW);
    Macro_MRC_Copmat_Rangefinders(Grey,BG);
    Macro_MRC_Copmat_Rangefinders(Grey,BO);
    Macro_MRC_Copmat_Rangefinders(Black,BW);
    Macro_MRC_Copmat_Rangefinders(Black,BG);
    Macro_MRC_Copmat_Rangefinders(Black,BO);
    Macro_MRC_Copmat_Rangefinders(ARF,BW);
    Macro_MRC_Copmat_Rangefinders(ARF,BG);
    Macro_MRC_Copmat_Rangefinders(ARF,BO);

    //Visors
    class MRC_Visor : MRC_Visor_Base
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
                ="CT";
            Type="Up";
        };
    };

    #define Macro_MRC_Copmat_Visors(a) class MRC_Visor_##a## : MRC_Visor_Base {\
        class XtdGearInfo\
        {\
            model="91stNvVisors";\
            NvVisor=##a##;\
            Type="Up";\
        };\
    };

	Macro_MRC_Copmat_Visors(SCT);
	Macro_MRC_Copmat_Visors(VCT);
	Macro_MRC_Copmat_Visors(CSP);
	Macro_MRC_Copmat_Visors(WO4);
	Macro_MRC_Copmat_Visors(CSS);

    class MRC_Visor_Down: MRC_Visor_Down_Base
    {
        class XtdGearInfo
        {
            model="91stNvVisors";
            NvVisor="CT";
            Type="Down";
        };
    };

    #define Macro_MRC_Copmat_Visors_Down(a) class MRC_Visor_##a##_Down: MRC_Visor_Down_Base {\
        class XtdGearInfo\
        {\
            model="91stNvVisors";\
            NvVisor=##a##;\
            Type="Down";\
        };\
    };

	Macro_MRC_Copmat_Visors_Down(SCT);
	Macro_MRC_Copmat_Visors_Down(VCT);
	Macro_MRC_Copmat_Visors_Down(CSP);
	Macro_MRC_Copmat_Visors_Down(WO4);
	Macro_MRC_Copmat_Visors_Down(CSS);

    //custom
    #define Macro_MRC_Visor_Custom_Compat_NVG(a) class MRC_Visor_##a## : MRC_Visor_Base  {\
        class XtdGearInfo\
        {\
            model="91stNvVisorsCustom";\
            NvVisorCust=##a##;\
        };\
    };

    Macro_MRC_Visor_Custom_Compat_NVG(Arcanist);
    Macro_MRC_Visor_Custom_Compat_NVG(Binns);
    Macro_MRC_Visor_Custom_Compat_NVG(Frasier);
    Macro_MRC_Visor_Custom_Compat_NVG(Leer);
    Macro_MRC_Visor_Custom_Compat_NVG(Perry);
    Macro_MRC_Visor_Custom_Compat_NVG(Sound);
    Macro_MRC_Visor_Custom_Compat_NVG(Jericho);

    //chips
    class JLTS_NVG_droid_chip_1;
    class MRC_NVG_Chip : JLTS_NVG_droid_chip_1 
    {
        class XtdGearInfo
        {
            model="NF_Chips";
            NVGChips="NVG";
        };
    };
    #define Macro_MRC_Chips_Compat_NVG(a) class MRC_##a##_NVG_Chip : JLTS_NVG_droid_chip_1  {\
        class XtdGearInfo\
        {\
            model="NF_Chips";\
            NVGChips=##a##;\
        };\
    };

    Macro_MRC_Chips_Compat_NVG(White);
    Macro_MRC_Chips_Compat_NVG(Green);
    Macro_MRC_Chips_Compat_NVG(Orange);

};