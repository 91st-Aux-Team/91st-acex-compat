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
        class MRC_Vest_Kama
        {
            label = "91st Kamas";
            author = "91st C-4 Team";
            options[] = {"Standard"};
            class Standard
            {
                labels = "Standard Kamas";
                values[] = 
                {
                    "Corporal",
                    "Sergeant",
                    "Frasier",
                    "Skit",
                    "Chubs",
                    "Trill",
                    "Weylyn",
                    "Misery",
                };
            };
        };
        class MRC_Officer_Vests
        {
            label="91st Officer Vests";
            author="91st Aux Team";
            options[]={"Standard"};
            class Standard
            {
                labels="91st Officer Vests: Standard";
                values[]=
                {
                    "PSGXO",
                    "PLCO",
                    "1SG",
                    "CSM",
                    "Commander",
                    "Medic",
                    "WO"
                };
                class PSGXO
                {
                    label="PSG/XO";
                };
                class PLCO
                {
                    label="PL/CO";
                };
                class Commander
                {
                    label = "TF CC";
                };
                class CSM
                {
                    label = "TF CSM";
                };
                class Medic
                {
                    label = "TF Medic";
                };
                class WO
                {
                    label = "WO5";
                };
            };
        };
        // class MRC_Officer_Vests_Reverse
        // {
        //     label="91st Officer Vests: Reversed";
        //     author="91st Aux Team";
        //     options[]={"Standard"};
        //     class Standard
        //     {
        //         labels="Standard Officer Vests";
        //         values[]=
        //         {
        //             "Grey",
        //             "Red_Gray",
        //             "Red",
        //         };
        //         class Grey
        //         {
        //             label="PSG/DNCOIC";
        //         };
        //         class Red_Gray
        //         {
        //             label="1SG/D XO";
        //         };
        //         class Red
        //         {
        //             label="CO/Officer";
        //         };
        //     };
        // };
        class MRC_Officer_Vests_Custom
        {
            label="91st Officer Vests: Custom";
            author="91st Aux Team";
            options[]={"Standard"};
            class Standard
            {
                labels = "Custom Officer Vests";
                values[] = 
                {
                    "Avalanche",
                    "Charred",
                    "Corn",
                    "Doc",
                    "Dev",
                    "Jimmy",
                    "Kuro",
                    "Main",
                    "Mav",
                    "Mauser",
                    "Predator",
                    "Hex",
                    "Frog",
                    "Misery"
                };
            };
        };
        class MRC_ARC_Vests
        {
            label="91st ARC Vests: Standard";
            author="91st Aux Team";
            options[]={"Standard"};
            class Standard
            {
                labels="Standard Arc Vests";
                values[]=
                {
                    "Cadet",
                    "Trooper",
                    "Trooper1",
                    "Trooper2",
                    "Veteran",
                    "Veteran1",
                    "Veteran2",
                    "Veteran3",
                    "TL",
                    "TL1",
                    "TL2",
                    "NCOIC",
                    "XO",
                    "CO",
                    "CO1",
                };
                class TL
                {
                    label = "Teamlead";
                };
            };
        };
        class MRC_ARC_Vests_Custom
        {
            label="91st ARC Vests: Custom";
            author="91st Aux Team";
            options[]={"Standard"};
            class Standard
            {
                labels="Standard Arc Vests";
                values[]=
                {
                    "Scorch",
                    "Roach",
                    "Jericho",
                    "Cannon",
                    "Trauma"
                };
            };
        };
        class MRC_Holsters
        {
            label="91st Holsters";
            author="91st Aux Team";
            options[]={"Holsters"};
            class Holsters
            {
                labels="Holsters";
                values[]=
                {
                    "SCT",
                    "VCT",
                    "CSP",
                    "WO",
                    "NCO"
                };
            };
        };
        class MRC_Vest_Recon
        {
            label="91st Standard Vests";
            author="91st Aux Team";
            options[]={"Standard"};
            class Standard
            {
                labels="Standard Vests";
                values[]=
                {
                    "Trooper",
                    "Heavy",
                    "WO4",
                    "SL",
                    "NCO",
                    "RTO"
                };
            };
        }; 
	};
};
class CfgWeapons
{
    class V_RebreatherB;
    class ItemCore;
    class MRC_Vest_ARC_Base;
    class MRC_Vest_Holster_Base;
    class MRC_Vest_Officer_Base;
    class MRC_Vest_Officer_Reverse_Base;
    class MRC_Vest_Commander_Base;

    // KAMA

    #define MACRO_MRC_VEST_KAMA_COMPAT(a) class MRC_Vest_Kama_##a: MRC_Vest_Officer_Base { \
        class XtdGearInfo \
        { \
            model = "MRC_Vest_Kama"; \
            Standard = ##a; \
        }; \
    }

    MACRO_MRC_VEST_KAMA_COMPAT(Corporal);
    MACRO_MRC_VEST_KAMA_COMPAT(Sergeant);

    MACRO_MRC_VEST_KAMA_COMPAT(Frasier);
    MACRO_MRC_VEST_KAMA_COMPAT(Misery);
    MACRO_MRC_VEST_KAMA_COMPAT(Chubs);
    MACRO_MRC_VEST_KAMA_COMPAT(Skit);
    MACRO_MRC_VEST_KAMA_COMPAT(Trill);
    MACRO_MRC_VEST_KAMA_COMPAT(Weylyn);

    // OFFICER VESTS

    #define MACRO_MRC_VEST_OFFICER_COMPAT(a,b) class MRC_Vest_Officer_##a : ItemCore { \
        class XtdGearInfo \
        { \
            model = #b; \
            Standard = #a; \
        }; \
    }
    #define MACRO_MRC_VEST_OFFICER_REVERSE_COMPAT(a,b) class MRC_Vest_Officer_Reverse_##a : MRC_Vest_Officer_Reverse_Base { \
        class XtdGearInfo \
        { \
            model = #b; \
            Standard = #a; \
        }; \
    }

    #define MACRO_MRC_VEST_COMMANDER_COMPAT(a,b,c) class MRC_Vest_Commander_##a : MRC_Vest_Commander_Base { \
        class XtdGearInfo \
        { \
            model = #b; \
            Standard = #c; \
        }; \
    }

    MACRO_MRC_VEST_OFFICER_COMPAT(PSGXO,MRC_Officer_Vests);
    MACRO_MRC_VEST_OFFICER_COMPAT(PLCO,MRC_Officer_Vests);
    MACRO_MRC_VEST_OFFICER_COMPAT(1SG,MRC_Officer_Vests);
    MACRO_MRC_VEST_OFFICER_COMPAT(WO,MRC_Officer_Vests);
    MACRO_MRC_VEST_OFFICER_COMPAT(Medic,MRC_Officer_Vests);

    MACRO_MRC_VEST_COMMANDER_COMPAT(Red_Commander,MRC_Officer_Vests,Commander);
    MACRO_MRC_VEST_COMMANDER_COMPAT(Red_Gray,MRC_Officer_Vests,CSM);

    MACRO_MRC_VEST_OFFICER_COMPAT(Avalanche,MRC_Officer_Vests_Custom);
    MACRO_MRC_VEST_OFFICER_COMPAT(Charred,MRC_Officer_Vests_Custom);
    MACRO_MRC_VEST_OFFICER_COMPAT(Corn,MRC_Officer_Vests_Custom);
    MACRO_MRC_VEST_OFFICER_COMPAT(Doc,MRC_Officer_Vests_Custom);
    MACRO_MRC_VEST_OFFICER_COMPAT(Dev,MRC_Officer_Vests_Custom);
    MACRO_MRC_VEST_OFFICER_COMPAT(Frasier,MRC_Officer_Vests_Custom);
    MACRO_MRC_VEST_OFFICER_COMPAT(Main,MRC_Officer_Vests_Custom);
    MACRO_MRC_VEST_OFFICER_COMPAT(Mauser,MRC_Officer_Vests_Custom);
    MACRO_MRC_VEST_OFFICER_COMPAT(Hex,MRC_Officer_Vests_Custom);
    MACRO_MRC_VEST_OFFICER_COMPAT(Mav,MRC_Officer_Vests_Custom);
    MACRO_MRC_VEST_OFFICER_COMPAT(Predator,MRC_Officer_Vests_Custom);
    MACRO_MRC_VEST_OFFICER_COMPAT(Misery,MRC_Officer_Vests_Custom);
    // MACRO_MRC_VEST_OFFICER_COMPAT(Jimmy,MRC_Officer_Vests_Custom);


    MACRO_MRC_VEST_OFFICER_REVERSE_COMPAT(Kuro,MRC_Officer_Vests_Custom);
    MACRO_MRC_VEST_OFFICER_REVERSE_COMPAT(Frog,MRC_Officer_Vests_Custom);


    // ARC VESTS

    #define MACRO_MRC_VEST_ARC_COMPAT(a,b) class MRC_Vest_ARC_##a: MRC_Vest_ARC_Base { \
        class XtdGearInfo \
        { \
            model=#b; \
            Standard = #a; \
        }; \
    }
    #define MACRO_MRC_VEST_ARC_COMPAT(a,b) class MRC_Vest_ARC_##a: MRC_Vest_ARC_Base { \
        class XtdGearInfo \
        { \
            model=#b; \
            Standard = #a; \
        }; \
    }

    MACRO_MRC_VEST_ARC_COMPAT(Cadet,MRC_ARC_Vests);
    MACRO_MRC_VEST_ARC_COMPAT(Trooper,MRC_ARC_Vests);
    MACRO_MRC_VEST_ARC_COMPAT(Trooper1,MRC_ARC_Vests);
    MACRO_MRC_VEST_ARC_COMPAT(Trooper2,MRC_ARC_Vests);
    MACRO_MRC_VEST_ARC_COMPAT(Veteran,MRC_ARC_Vests);
    MACRO_MRC_VEST_ARC_COMPAT(Veteran1,MRC_ARC_Vests);
    MACRO_MRC_VEST_ARC_COMPAT(Veteran2,MRC_ARC_Vests);
    MACRO_MRC_VEST_ARC_COMPAT(Veteran3,MRC_ARC_Vests);
    MACRO_MRC_VEST_ARC_COMPAT(TL,MRC_ARC_Vests);
    MACRO_MRC_VEST_ARC_COMPAT(TL1,MRC_ARC_Vests);
    MACRO_MRC_VEST_ARC_COMPAT(TL2,MRC_ARC_Vests);
    MACRO_MRC_VEST_ARC_COMPAT(NCOIC,MRC_ARC_Vests);
    MACRO_MRC_VEST_ARC_COMPAT(XO,MRC_ARC_Vests);
    MACRO_MRC_VEST_ARC_COMPAT(CO,MRC_ARC_Vests);
    MACRO_MRC_VEST_ARC_COMPAT(CO1,MRC_ARC_Vests);
    MACRO_MRC_VEST_ARC_COMPAT(Roach,MRC_ARC_Vests_Custom);
    MACRO_MRC_VEST_ARC_COMPAT(Scorch,MRC_ARC_Vests_Custom);
    MACRO_MRC_VEST_ARC_COMPAT(Jericho,MRC_ARC_Vests_Custom);
    MACRO_MRC_VEST_ARC_COMPAT(Cannon,MRC_ARC_Vests_Custom);
    MACRO_MRC_VEST_ARC_COMPAT(Trauma,MRC_ARC_Vests_Custom);

    //Holsters

    #define MACRO_MRC_VEST_HOLSTER_COMPAT(a) class MRC_##a##_Holster: MRC_Vest_Holster_Base { \
        class XtdGearInfo \
        { \
            model = "MRC_Holsters"; \
            Holsters = ##a; \
        }; \
    }

    MACRO_MRC_VEST_HOLSTER_COMPAT(SCT);
    MACRO_MRC_VEST_HOLSTER_COMPAT(VCT);
    MACRO_MRC_VEST_HOLSTER_COMPAT(CSP);
    MACRO_MRC_VEST_HOLSTER_COMPAT(WO);
    MACRO_MRC_VEST_HOLSTER_COMPAT(NCO);
    //Standard vests and recons

    #define MACRO_MRC_VEST_RECON_COMPAT(a) class MRC_Vest_Recon_##a: V_RebreatherB { \
        class XtdGearInfo \
        { \
            model = "MRC_Vest_Recon"; \
            Standard = ##a; \
        }; \
    } 

    MACRO_MRC_VEST_RECON_COMPAT(Trooper);
    MACRO_MRC_VEST_RECON_COMPAT(SL);
    MACRO_MRC_VEST_RECON_COMPAT(WO4);
    MACRO_MRC_VEST_RECON_COMPAT(Heavy);
    MACRO_MRC_VEST_RECON_COMPAT(RTO);

};