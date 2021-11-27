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
        class StandardRifles
        {
            label="StandardRifles";
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
                    "DC15L",
                    "Valken-38L",
                    "DC15s"
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
                    "DC15X",
                    "DC15LE",
                    "Firepuncher",
                    "DW-31S",
                    "Musket"
                };
            };
        };
    };
};
class CfgWeapons
{
    class 3AS_DC15A_F;
    class 3AS_DC15A_GL;
    class 3AS_DC15C_F;
    class 3AS_DC15C_GL;
    class 3AS_DC15L_F;
    class JLTS_DC15X;
    class 327th_dc15le;
    class JLTS_DC15S;
    class 327th_firepuncher_rifle;
    class JLTS_DW32S;
    
    //Rifles
    class 91st_3AS_DC15A: 3AS_DC15A_F
    {
        class XtdGearInfo
        {
            model="StandardRifles";
            Rifles="DC15a";
        };
    };
    class 91st_3AS_DC15A_GL: 3AS_DC15A_GL
    {
        class XtdGearInfo
        {
            model="StandardRifles";
            Rifles="DC15aGL";
        };
    };
    class 91st_3AS_DC15C: 3AS_DC15C_F
    {
        class XtdGearInfo
        {
            model="StandardRifles";
            Rifles="DC15c";
        };
    };
    class 91st_3AS_DC15C_GL: 3AS_DC15C_GL
    {
        class XtdGearInfo
        {
            model="StandardRifles";
            Rifles="DC15cGL";
        };
    };
    class 91st_3AS_DC15L:3AS_DC15L_F
    {
        class XtdGearInfo
        {
            model="StandardRifles";
            Rifles="DC15L";
        };
    };
    class 91st_JLTS_DC15S: JLTS_DC15S
    {
        class XtdGearInfo
        {
            model="StandardRifles";
            Rifles="DC15s";
        };
    };
    class 91st_Valken_SAW: 91st_3AS_DC15L
    {
        class XtdGearInfo
        {
            model="StandardRifles";
            Rifles="Valken-38L";
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
    class 91st_327_DC15LE: 327th_dc15le
    {
        class XtdGearInfo
        {
            model="MarksmenRilfes";
            Marksmen="DC15LE";
        };
    };
    class 91st_JLTS_DW32S: JLTS_DW32S
    {
        class XtdGearInfo
        {
            model="MarksmenRilfes";
            Marksmen="DW-31S";
        };
    };
    class 91st_musket: 91st_3AS_DC15C
    {
        class XtdGearInfo
        {
            model="MarksmenRilfes";
            Marksmen="Musket";
        };
    };
};