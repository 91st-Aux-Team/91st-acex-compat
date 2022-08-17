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
		version="0.1.1.2";
		versionStr="0.1.1.2";
		versionAr[]={0,1,1,2};
	};
};
class XtdGearModels
{
    class CfgWeapons 
    {
        class Rifle
        {
            label="Rifle";
            author="91st Aux Team";
            options[]={"Rifles"};
            class Rifles
            {
                labels="Rifles";
                values[]=
                {
                    "DC15A",
                    "DC15AGL",
                    "DC15C",
                    "DC15CGL",
                    "DC15S"
                };
                class DC15A
                {
                    label="DC15A";
                };
                class DC15AGL
                {
                    label="DC15AGL";
                };
                class DC15C
                {
                    label="DC15C";
                };
                class DC15CGL
                {
                    label="DC15CGL";
                };
                class DC15S
                {
                    label="DC15S";
                };                
            };
        };
        class LMGS
        {
            label="LMG";
            author="91st Aux Team";
            options[]={"LMG"};
            class LMG
            {
                labels="LMG's";
                values[]=
                {
                    "DC15L",
                    "Valken-38L",
                    "Z6"
                };
            };
        };
        class Special
        {
            label="Specialist";
            author="91st Aux Team";
            options[]={"Specialist"};
            class Specialist
            {
                labels="Specialist";
                values[]=
                {
                    "DP-23",
                    "EPL-2",
                    "Flamer",
                    "Musket"
                };
            };
        };
        class MarksmenRilfes
        {
            label="Marksmen Rilfes";
            author="91st Aux Team";
            options[]={"Marksmen"};
            class Marksmen
            {
                labels="Marksmen";
                values[]=
                {
                    "DC15LE",
                    "DC15X",
                    "Firepuncher",
                    "773EBR",
                    "DW-32S"
                };
                class DC15LE
                {
                    label="DC15LE";
                };
            };
        };
        class WestarRilfes
        {
            label="Westars";
            author="91st Aux Team";
            options[]={"Variant"};
            class Variant
            {
                labels="Variant";
                values[]=
                {
                    "M5GL",
                    "35C",
                    "35S",
                    "SPR"
                };
            };
        };
    };
};
class CfgWeapons
{
    class MRC_Rifle_Base;
    class MRC_Rifle_Base2;
    class MRC_DC15C_Base;
    class MRC_LMG_Base;
    class aRifle_MX_Base_F;
    class MRC_DC15L_base;
    class Rifle_Base_F;
    class JLTS_DC15X;
    class 327th_dc15le;
    class JLTS_DC15S;
    class 327th_firepuncher_rifle;
    class JLTS_DW32S;
    class JLTS_Z6;
    class JLTS_DP23;
    class JLTS_EPL2;
    class 3AS_Flamer_Base;
    class k_773_rifle_base;
    
    //Rifles
    class MRC_DC15A: MRC_Rifle_Base
    {
        class XtdGearInfo
        {
            model="Rifle";
            Rifles="DC15A";
        };
    };
    class MRC_DC15A_GL: MRC_DC15A
    {
        class XtdGearInfo
        {
            model="Rifle";
            Rifles="DC15AGL";
        };
    };
    class MRC_DC15C: MRC_DC15C_Base
    {
        class XtdGearInfo
        {
            model="Rifle";
            Rifles="DC15C";
        };
    };
    class MRC_DC15C_GL: MRC_DC15C
    {
        class XtdGearInfo
        {
            model="Rifle";
            Rifles="DC15CGL";
        };
    };
    class MRC_DC15S: aRifle_MX_Base_F
    {
        class XtdGearInfo
        {
            model="Rifle";
            Rifles="DC15S";
        };
    };

    //LMG's
    class MRC_DC15L: MRC_DC15L_base
    {
        class XtdGearInfo
        {
            model="LMGS";
            LMG="DC15L";
        };
    };
    class MRC_Valken_SAW: MRC_DC15L
    {
        class XtdGearInfo
        {
            model="LMGS";
            LMG="Valken-38L";
        };
    };
    class MRC_Z6: MRC_LMG_Base
    {
        class XtdGearInfo
        {
            model="LMGS";
            LMG="Z6";
        };
    };

    //specialist
    class MRC_DP23: JLTS_DP23
    {
        class XtdGearInfo
        {
            model="Special";
            Specialist="DP-23";
        };
    };
    class MRC_EPL2: JLTS_EPL2
    {
        class XtdGearInfo
        {
            model="Special";
            Specialist="EPL-2";
        };
    };
    class MRC_Flamer: 3AS_Flamer_Base
    {
        class XtdGearInfo
        {
            model="Special";
            Specialist="Flamer";
        };
    };
    class MRC_musket: MRC_DC15C
    {
        class XtdGearInfo
        {
            model="Special";
            Specialist="Musket";
        };
    };


    //marksmen
    class MRC_firepuncher_rifle: 327th_firepuncher_rifle
    {
        class XtdGearInfo
        {
            model="MarksmenRilfes";
            Marksmen="Firepuncher";
        };
    };
    class MRC_DC15X: JLTS_DC15X
    {
        class XtdGearInfo
        {
            model="MarksmenRilfes";
            Marksmen="DC15X";
        };
    };
    class MRC_DC15ALE: MRC_DC15A
    {
        class XtdGearInfo
        {
            model="MarksmenRilfes";
            Marksmen="DC15LE";
        };
    };
    class 91_773_rifle_base: k_773_rifle_base
    {
        class XtdGearInfo
        {
            model="MarksmenRilfes";
            Marksmen="773EBR";
        };
    };
    class MRC_DW32S: JLTS_DW32S
    {
        class XtdGearInfo
        {
            model="MarksmenRilfes";
            Marksmen="DW-32S";
        };
    };

    //Westars
    class MRC_WestarM5_Base_F;
    class MRC_westar_c_pre;
    class LFP_rifle_base;
    class MRC_westar_gl:MRC_WestarM5_Base_F
    {
        class XtdGearInfo
        {
            model="WestarRilfes";
            Variant="M5GL";
        };
    };
    class MRC_westar35c: MRC_westar_c_pre
    {
        class XtdGearInfo
        {
            model="WestarRilfes";
            Variant="35C";
        };
    };
    class MRC_Westar35S: MRC_westar_c_pre
    {
        class XtdGearInfo
        {
            model="WestarRilfes";
            Variant="35S";
        };
    };
    class MRC_WestarSPR: LFP_rifle_base
    {
        class XtdGearInfo
        {
            model="WestarRilfes";
            Variant="SPR";
        };
    };
};