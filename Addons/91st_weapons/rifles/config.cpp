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
		version="0.1.1.2";
		versionStr="0.1.1.2";
		versionAr[]={0,1,1,2};
	};
};
class XtdGearModels
{
    class CfgWeapons 
    {
        class Rilfes
        {
            label="Rilfes";
            author="91st Aux Team";
            options[]={"Rifles"};
            class Rifles
            {
                labels="Rifles";
                values[]=
                {
                    "DC15a",
                    "DC15aGL",
                    "DC15c",
                    "DC15cGL",
                    "DC15s"
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
            label="MarksmenRilfes";
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
                    "DW-31S"
                };
            };
        };
        class WestarRilfes
        {
            label="Westars";
            author="91st Aux Team";
            options[]={"Variance"};
            class Variance
            {
                labels="Variance";
                values[]=
                {
                    "M5GL",
                    "C",
                    "S"
                };
            };
        };
    };
};
class CfgWeapons
{
    class 91st_Rifle_Base;
    class 91st_Rifle_Base2;
    class 91st_DC15C_Base;
    class 91st_LMG_Base;
    class aRifle_MX_Base_F;
    class 91st_DC15L_base;
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
    
    //Rifles
    class 91st_DC15A: 91st_Rifle_Base
    {
        class XtdGearInfo
        {
            model="Rilfes";
            Rifles="DC15a";
        };
    };
    class 91st_DC15A_GL: 91st_DC15A
    {
        class XtdGearInfo
        {
            model="Rilfes";
            Rifles="DC15aGL";
        };
    };
    class 91st_DC15C: 91st_DC15C_Base
    {
        class XtdGearInfo
        {
            model="Rilfes";
            Rifles="DC15c";
        };
    };
    class 91st_DC15C_GL: 91st_DC15C
    {
        class XtdGearInfo
        {
            model="Rilfes";
            Rifles="DC15cGL";
        };
    };
    class 91st_DC15S: aRifle_MX_Base_F
    {
        class XtdGearInfo
        {
            model="Rilfes";
            Rifles="DC15s";
        };
    };

    //LMG's
    class 91st_DC15L: 91st_DC15L_base
    {
        class XtdGearInfo
        {
            model="LMGS";
            LMG="DC15L";
        };
    };
    class 91st_Valken_SAW: 91st_DC15L
    {
        class XtdGearInfo
        {
            model="LMGS";
            LMG="Valken-38L";
        };
    };
    class 91st_Z6: 91st_LMG_Base
    {
        class XtdGearInfo
        {
            model="LMGS";
            LMG="Z6";
        };
    };

    //specialist
    class 91st_DP23: JLTS_DP23
    {
        class XtdGearInfo
        {
            model="Special";
            Specialist="DP-23";
        };
    };
    class 91st_EPL2: JLTS_EPL2
    {
        class XtdGearInfo
        {
            model="Special";
            Specialist="EPL-2";
        };
    };
    class 91st_Flamer: 3AS_Flamer_Base
    {
        class XtdGearInfo
        {
            model="Special";
            Specialist="Flamer";
        };
    };
    class 91st_musket: 91st_DC15C
    {
        class XtdGearInfo
        {
            model="Special";
            Specialist="Musket";
        };
    };


    //marksmen
    class 91st_firepuncher_rifle: 327th_firepuncher_rifle
    {
        class XtdGearInfo
        {
            model="MarksmenRilfes";
            Marksmen="Firepuncher";
        };
    };
    class 91st_JLTS_DC15X: JLTS_DC15X
    {
        class XtdGearInfo
        {
            model="MarksmenRilfes";
            Marksmen="DC15X";
        };
    };
    class 91st_DC15LE: 91st_Rifle_Base2
    {
        class XtdGearInfo
        {
            model="MarksmenRilfes";
            Marksmen="DC15LE";
        };
    };
    class 91st_DW32S: JLTS_DW32S
    {
        class XtdGearInfo
        {
            model="MarksmenRilfes";
            Marksmen="DW-31S";
        };
    };

    //Westars
    class 91st_WestarM5_Base_F;
    class 91st_westar_c_pre;
    class 91st_westar_gl:91st_WestarM5_Base_F
    {
        class XtdGearInfo
        {
            model="WestarRilfes";
            Variance="M5GL";
        };
    };
    class 91st_westar35c: 91st_westar_c_pre
    {
        class XtdGearInfo
        {
            model="WestarRilfes";
            Variance="C";
        };
    };
    class 91st_Westar35S: 91st_westar_c_pre
    {
        class XtdGearInfo
        {
            model="WestarRilfes";
            Variance="S";
        };
    };
};