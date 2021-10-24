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
        class 91stOfficerVests
        {
            label="91st Officer Vests";
            author="91st Aux Team";
            options[]={"Officervest"};
            class Officervest
            {
                labels="Officer Vests";
                values[]=
                {
                    "ReversedGrey",
                    "Rev_Red_Grey",
                    "ReversedRed",
                    "Grey",
                    "Red_Grey",
                    "Red",
                    "Commander"
                };
                class ReversedGrey
                {
                    label="R PSG/D IC";
                };
                class Rev_Red_Grey
                {
                    label="R 1SG/DXO";
                };
                class ReversedRed
                {
                    label="R CO/Off";
                };
                class Grey
                {
                    label="PSG/DNCOIC";
                };
                class Red_Grey
                {
                    label="1SG/D XO";
                };
                class Red
                {
                    label="CO/Officer";
                };
                class Commander
                {
                    label="Commander";
                };
            };
        };
        class 91stARCVests
        {
            label="ARC Vests";
            author="91st Aux Team";
            options[]={"Arcvests"};
            class Arcvests
            {
                labels="Arc Vest";
                values[]=
                {
                    "Trooper",
                    "Veteran",
                    "Teamlead",
                    "XO",
                    "CO",
                    "Scorch",
                    "Arcanist"
                };
                class Trooper
                {
                    label="Trooper";
                };
                class Veteran
                {
                    label="Veteran";
                }; 
                class Teamlead
                {
                    label="Teamlead";
                };
                class XO
                {
                    label="XO";
                };
                class CO
                {
                    label="CO";
                };
                class Scorch
                {
                    label="Scorch";
                };
                class Arcanist
                {
                    label="Arcanist";
                }
            };
        };
	    class 91stOfficerPauldrons
        {
            label="91st Officer Pauldrons";
            author="91st Aux Team";
            options[]={"Officerpauldron"};
            class Officerpauldron
            {
                labels="Officer pauldron";
                values[]=
                {
                    "Grey",
                    "Red_Grey",
                    "Red"
                };
                class Grey
                {
                    label="Grey";
                };
                class Red_Grey
                {
                    label="Red Grey";
                }; 
                class Red
                {
                    label="Red";
                };
            };
        };
	};
};
class CfgWeapons
{
    class V_RebreatherB;
    //Officer Vests
    class 91st_Officer_Vest_gray: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="Grey";
        };
    };
    class 91st_Officer_Vest_redgray: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="Red_Grey";
        };
    };
    class 91st_Officer_Vest_red: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="Red";
        };
    };
    class 91st_Officer_rev_Vest_gray: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="ReversedGrey";
        };
    };
    class 91st_Officer_rev_Vest_redgray: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="Rev_Red_Grey";
        };
    };
    class 91st_Officer_rev_Vest_red: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="ReversedRed";
        };
    };
    class 91st_Commander_Vest: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="Commander";
        };
    };

    // Officer Pauldrons
    class 91st_Officer_pauldron_gray: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stOfficerPauldrons";
            Officerpauldron="Grey";
        };
    };
    class 91st_Officer_pauldron_red: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stOfficerPauldrons";
            Officerpauldron="Red";
        };
    };
    class 91st_Officer_pauldron_redgray: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stOfficerPauldrons";
            Officerpauldron="Red_Grey";
        };
    };

    // ARC Vests
    class 91st_JLTS_Vest_ARC_Trooper: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stARCVests";
            Arcvests="Trooper";
        };
    };
    class 91st_JLTS_Vest_ARC_veteran: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stARCVests";
            Arcvests="Veteran";
        };
    };
    class 91st_JLTS_Vest_ARC_TL: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stARCVests";
            Arcvests="Teamlead";
        };
    };
    class 91st_JLTS_Vest_ARC_XO: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stARCVests";
            Arcvests="XO";
        };
    };
    class 91st_JLTS_Vest_ARC_CO: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stARCVests";
            Arcvests="CO";
        };
    };
    class 91st_JLTS_Vest_ARC_Scorch: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stARCVests";
            Arcvests="Scorch";
        };
    };
    class 91st_JLTS_Vest_ARC_Arcanist: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stARCVests";
            Arcvests="Arcanist";
        };
    };
};