class CfgPatches
{
	class MRC_ACEAX_compat_vests
	{
		name="MRC_ACEAX_compat_vests";
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
                    "Commander",
                    "CSM"
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
                class CSM
                {
                    label="CSM";
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
                    "Teamlead",
                    "NCOIC",
                    "XO",
                    "CO"
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
                class NCOIC
                {
                    label="NCOIC";
                };
                class XO
                {
                    label="XO";
                };
                class CO
                {
                    label="CO";
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
            };
        }; 
	};
};
class CfgWeapons
{
    class V_RebreatherB;
    class MRC_Vest_ARC_Base;
    //Officer Vests
    class MRC_Officer_Vest_Gray: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="Grey";
        };
    };
    class MRC_Reverse_Officer_Gray: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="ReversedGrey";
        };
    };
    class MRC_Officer_Vest_RedGray: MRC_Officer_Vest_gray
    {
        class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="Red_Grey";
        };
    };
    class MRC_Officer_Vest_Red: MRC_Officer_Vest_gray
    {
        class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="Red";
        };
    };
    class MRC_Reverse_Officer_RedGray: MRC_Reverse_Officer_Gray
    {
        class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="Rev_Red_Grey";
        };
    };
    class MRC_Reverse_Officer_Red: MRC_Reverse_Officer_Gray
    {
        class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="ReversedRed";
        };
    };
    class MRC_Commander_Vest: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="Commander";
        };
    };
    class MRC_Commander_CSM: MRC_Commander_Vest 
    {
       class XtdGearInfo
        {
            model="91stOfficerVests";
            Officervest="CSM";
        }; 
    };

    // Officer Pauldrons
    class MRC_Officer_pauldron_Gray: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stOfficerPauldrons";
            Officerpauldron="Grey";
        };
    };
    class MRC_Officer_pauldron_Red: MRC_Officer_Pauldron_Gray
    {
        class XtdGearInfo
        {
            model="91stOfficerPauldrons";
            Officerpauldron="Red";
        };
    };
    class MRC_Officer_pauldron_RedGray: MRC_Officer_Pauldron_Gray
    {
        class XtdGearInfo
        {
            model="91stOfficerPauldrons";
            Officerpauldron="Red_Grey";
        };
    };

    // ARC Vests
    class MRC_Vest_ARC_Cadet: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stARCVests";
            Arcvests="Cadet";
        };
    };
    class MRC_Vest_ARC_Trooper: MRC_Vest_ARC_Base
    {
        class XtdGearInfo
        {
            model="91stARCVests";
            Arcvests="Trooper";
        };
    };
    class MRC_Vest_ARC_veteran: MRC_Vest_ARC_Base
    {
        class XtdGearInfo
        {
            model="91stARCVests";
            Arcvests="Veteran";
        };
    };
    class MRC_Vest_ARC_TL: MRC_Vest_ARC_Base
    {
        class XtdGearInfo
        {
            model="91stARCVests";
            Arcvests="Teamlead";
        };
    };
    class MRC_Vest_ARC_NCOIC: MRC_Vest_ARC_Base
    {
        class XtdGearInfo
        {
            model="91stARCVests";
            Arcvests="NCOIC";
        };
    };
    class MRC_Vest_ARC_XO: MRC_Vest_ARC_Base
    {
        class XtdGearInfo
        {
            model="91stARCVests";
            Arcvests="XO";
        };
    };
    class MRC_Vest_ARC_CO: MRC_Vest_ARC_Base
    {
        class XtdGearInfo
        {
            model="91stARCVests";
            Arcvests="CO";
        };
    };

    //Holsters
    class MRC_SCT_Holster: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stHolsters";
            Holsters="Senior";
        };
    };
    class MRC_VCT_Holster: MRC_SCT_Holster
    {
        class XtdGearInfo
        {
            model="91stHolsters";
            Holsters="Veterans";
        };
    };
    class MRC_CSP_Holster: MRC_SCT_Holster
    {
        class XtdGearInfo
        {
            model="91stHolsters";
            Holsters="Specialist";
        };
    };
    class MRC_WO_Holster: MRC_SCT_Holster
    {
        class XtdGearInfo
        {
            model="91stHolsters";
            Holsters="WarrantOfficer";
        };
    };
    class MRC_NCO_Holster: MRC_SCT_Holster
    {
        class XtdGearInfo
        {
            model="91stHolsters";
            Holsters="NCO";
        };
    };

    //Standard vests and recons
    class MRC_Trooper_Vest: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stStandardVests";
            StandardVests="Trooper";
        };
    };
    class MRC_Recon_Vest: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stStandardVests";
            StandardVests="TrooperRecon";
        };
    };
    class MRC_WO4_Vest: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stStandardVests";
            StandardVests="WO4";
        };
    };
    class MRC_Recon_NCO_Vest: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stStandardVests";
            StandardVests="NCORecon";
        };
    };
    class MRC_Corporal_Vest: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stStandardVests";
            StandardVests="Corporal";
        };
    };
    class MRC_Sergeant_Vest: V_RebreatherB
    {
        class XtdGearInfo
        {
            model="91stStandardVests";
            StandardVests="Sergeant";
        };
    };
};