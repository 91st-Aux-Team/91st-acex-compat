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
    };
};
class CfgWeapons
{
    class JLTS_CloneNVGRange;
    class 91st_Visor_Base;
    class 91st_Visor_Down_Base;

    //Arc Rangfinders
    #define Macro_91st_Copmat_Rangefinders(a,b) class 91st_Rangefinder_##a##_##b## : JLTS_CloneNVGRange {\
        class XtdGearInfo\
        {\
            model="91st_Rangefinders";\
            RFType=##a##;\
            RFThermal=##b##;\
        };\
    };

    Macro_91st_Copmat_Rangefinders(Red,BW);
    Macro_91st_Copmat_Rangefinders(Red,BG);
    Macro_91st_Copmat_Rangefinders(Red,BO);
    Macro_91st_Copmat_Rangefinders(Gray,BW);
    Macro_91st_Copmat_Rangefinders(Gray,BG);
    Macro_91st_Copmat_Rangefinders(Gray,BO);
    Macro_91st_Copmat_Rangefinders(Black,BW);
    Macro_91st_Copmat_Rangefinders(Black,BG);
    Macro_91st_Copmat_Rangefinders(Black,BO);
    Macro_91st_Copmat_Rangefinders(ARF,BW);
    Macro_91st_Copmat_Rangefinders(ARF,BG);
    Macro_91st_Copmat_Rangefinders(ARF,BO);


    //Visors
    #define Macro_91st_Copmat_Visors(a) class 91st_Visor_##a## : 91st_Visor_Base {\
        class XtdGearInfo\
        {\
            model="91stNvVisors";\
            NvVisor=##a##;\
            Type="Up";\
        };\
    };

    Macro_91st_Copmat_Visors(CT);
	Macro_91st_Copmat_Visors(SCT);
	Macro_91st_Copmat_Visors(VCT);
	Macro_91st_Copmat_Visors(CSP);
	Macro_91st_Copmat_Visors(WO4);
	Macro_91st_Copmat_Visors(CSS);

    #define Macro_91st_Copmat_Visors_Down(a) class 91st_Visor_Down_##a##: 91st_Visor_Down_Base {\
        class XtdGearInfo\
        {\
            model="91stNvVisors";\
            NvVisor=##a##;\
            Type="Down";\
        };\
    };

    Macro_91st_Copmat_Visors_Down(CT);
	Macro_91st_Copmat_Visors_Down(SCT);
	Macro_91st_Copmat_Visors_Down(VCT);
	Macro_91st_Copmat_Visors_Down(CSP);
	Macro_91st_Copmat_Visors_Down(WO4);
	Macro_91st_Copmat_Visors_Down(CSS);
};