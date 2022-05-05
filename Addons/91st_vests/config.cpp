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
                    "Cadet",
                    "Trooper",
                    "Veteran",
                    "TL",
                    "NCOIC",
                    "XO",
                    "CO"
                };
                class TL
                {
                    label="Team Lead";
                };
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
        class 91stHolsters
        {
            label="91st Holsters";
            author="91st Aux Team";
            options[]={"Holsters"};
            class Holsters
            {
                labels="Holsters";
                values[]=
                {
                    "Senior",
                    "Veterans",
                    "Specialist",
                    "WarrantOfficer",
                    "NCO"
                };
                class Senior
                {
                    label="Senior";
                };
                class Veterans
                {
                    label="Veterans";
                }; 
                class Specialist
                {
                    label="Specialist";
                };
                class WarrantOfficer
                {
                    label="Warrant Officer";
                };
                class NCO
                {
                    label="NCO";
                };
            };
        };
        class 91stStandardVests
        {
            label="91st Standard Vests";
            author="91st Aux Team";
            options[]={"StandardVests"};
            class StandardVests
            {
                labels="Standard Vests";
                values[]=
                {
                    "Trooper",
                    "TrooperRecon",
                    "WO4",
                    "NCORecon",
                    "Corporal",
                    "Sergeant"
                };
                class Trooper
                {
                    label="Trooper";
                };
                class TrooperRecon
                {
                    label="Trooper Recon";
                };
                class WO4
                {
                    label="WO4";
                };
                class NCORecon
                {
                    label="NCO Recon";
                };
                class Corporal
                {
                    label="Corporal";
                }; 
                class Sergeant
                {
                    label="Sergeant";
                };
                class CSM
                {
                    label="CSM";
                };
            };
        }; 
	};
};
class CfgWeapons
{
    class V_RebreatherB;
    class 91st_Vest_ARC_Base;
    //Officer Vests
    class 91st_Officer_Vest_Gray: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="Grey";
        };
    };
    class 91st_Reverse_Officer_Gray: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="ReversedGrey";
        };
    };
    class 91st_Officer_Vest_RedGray: 91st_Officer_Vest_gray
    {
        class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="Red_Grey";
        };
    };
    class 91st_Officer_Vest_Red: 91st_Officer_Vest_gray
    {
        class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="Red";
        };
    };
    class 91st_Reverse_Officer_RedGray: 91st_Reverse_Officer_Gray
    {
        class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="Rev_Red_Grey";
        };
    };
    class 91st_Reverse_Officer_Red: 91st_Reverse_Officer_Gray
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
    class 91st_Commander_CSM: 91st_Commander_Vest 
    {
        class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="CSM";
        }; 
    };

    // Officer Pauldrons
    class 91st_Officer_pauldron_Gray: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stOfficerPauldrons";
            Officerpauldron="Grey";
        };
    };
    class 91st_Officer_pauldron_Red: 91st_Officer_Pauldron_Gray
    {
        class XtdGearInfo
        {
            model="91stOfficerPauldrons";
            Officerpauldron="Red";
        };
    };
    class 91st_Officer_pauldron_RedGray: 91st_Officer_Pauldron_Gray
    {
        class XtdGearInfo
        {
            model="91stOfficerPauldrons";
            Officerpauldron="Red_Grey";
        };
    };

    // ARC Vests
    
    class 91st_Vest_ARC_Cadet: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stARCVests";
            Arcvests="Cadet";
        };
    };

    #define Macro_91st_ARC_Compat_Vests(a) class 91st_Vest_ARC_##a## : 91st_Vest_ARC_Cadet {\
        class XtdGearInfo\
        {\
            model="91stARCVests";\
            Arcvests=##a##;\
        };\
    };

    Macro_91st_ARC_Compat_Vests(Trooper);
    Macro_91st_ARC_Compat_Vests(Veteran);
    Macro_91st_ARC_Compat_Vests(TL);
    Macro_91st_ARC_Compat_Vests(NCOIC);
    Macro_91st_ARC_Compat_Vests(XO);
    Macro_91st_ARC_Compat_Vests(CO);

    //Holsters
    class 91st_SCT_Holster: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stHolsters";
            Holsters="Senior";
        };
    };
    class 91st_VCT_Holster: 91st_SCT_Holster
    {
        class XtdGearInfo
        {
            model="91stHolsters";
            Holsters="Veterans";
        };
    };
    class 91st_CSP_Holster: 91st_SCT_Holster
    {
        class XtdGearInfo
        {
            model="91stHolsters";
            Holsters="Specialist";
        };
    };
    class 91st_WO_Holster: 91st_SCT_Holster
    {
        class XtdGearInfo
        {
            model="91stHolsters";
            Holsters="WarrantOfficer";
        };
    };
    class 91st_NCO_Holster: 91st_SCT_Holster
    {
        class XtdGearInfo
        {
            model="91stHolsters";
            Holsters="NCO";
        };
    };

    //Standard vests and recons
    class 91st_Trooper_Vest: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stStandardVests";
            StandardVests="Trooper";
        };
    };
    class 91st_Recon_Vest: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stStandardVests";
            StandardVests="TrooperRecon";
        };
    };
    class 91st_WO4_Vest: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stStandardVests";
            StandardVests="WO4";
        };
    };
    class 91st_Recon_NCO_Vest: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stStandardVests";
            StandardVests="NCORecon";
        };
    };
    class 91st_Corporal_Vest: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stStandardVests";
            StandardVests="Corporal";
        };
    };
    class 91st_Sergeant_Vest: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stStandardVests";
            StandardVests="Sergeant";
        };
    };
};