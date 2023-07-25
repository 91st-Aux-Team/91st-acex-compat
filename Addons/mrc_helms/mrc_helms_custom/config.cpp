class CfgPatches
{
	class MRC_ACEAX_compat_helmcustom
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
        class InfantryCustomHelms
        {
            label="Custom Infantry Helmets";
            author="91st Aux Team";
            options[]={"InfantryCustoms"};
            class InfantryCustoms
            {
                labels="Infantry Custom Helmets";
                values[]=
                {
                    "Ant",
                    "Barr",
                    "Bardok",
                    "Blackout",
                    "Blanks",
                    "Charred",
                    "Chop",
                    "Chubs",
                    "Con",
                    "Corvus",
                    "Corpse",
                    "Cross",
                    "Dante",
                    "Dev",
                    "Doc",
                    "Fraiser",
                    "Galahad",
                    "Ghoul",
                    "Gibby",
                    "Goose",
                    "Jas",
                    "Jimmy",
                    "Joker",
                    "Jughead",
                    "Larkkit",
                    "Laser",
                    "Legate",
                    "Loki",
                    "Magic",
                    "Main",
                    "Mauser",
                    "Miller",
                    "Misery",
                    "Mountain",
                    "Nova",
                    "Nuclear",
                    "Odin",
                    "Opossum",
                    "Penguin",
                    "Perry",
                    "Postal",
                    "Predator",
                    "Qal",
                    "Saga",
                    "Saint",
                    "Samael",
                    "Sappheron",
                    "Scar",
                    "Scorch",
                    "Snapper",
                    "Skit",
                    "Sound",
                    "Steak",
                    "Sunday",
                    "Tarz",
                    "Tig",
                    "Trauma",
                    "Volx",
                    "Widget",
                    "Xero",
                };
            };
        };
        class PilotCustomshelmets
        {
            label="Pilot Custom Helmets";
            author="91st Aux Team";
            options[]={"PilotCustoms"};
            class PilotCustoms
            {
                labels="Pilot Custom Helmets";
                values[]=
                {
                    "Frog",
                    "Binns",
                    "Hex",
                    "Grizzly",
                    "Marf",
                    "Oxide",
                    "Tiny",
                    "Crimmy",
                };
            };            
        };
        class BeskarCustomhelmets
        {
            label="Beskar Custom Helmets";
            author="91st Aux Team";
            options[]={"Beskarhelms"};
            class Beskarhelms
            {
                labels="Beskar Helmets";
                values[]=
                {
                    "Crew",
                    "Kuro",
                    "Woost",
                    "Weylyn"
                };
            };
        };
        class Archelmets
        {
            label="ARC Helmets";
            author="91st Aux Team";
            options[]={"Archelms"};
            class Archelms
            {
                labels="ARC Helmets";
                values[]=
                {
                    "Cannon",
                    "Talleyrand",
                    "Corn",
                    "Roach",
                    "Bacon",
                    "Skittles",
                    "Scorch",
                    "Jericho",
                    "Oddball",
                    "Trauma",
                };                
            };        
        };

        class Barchelmets
        {
            label="BARC Helmets";
            author="91st Aux Team";
            options[]={"Barchelms"};
            class Barchelms
            {
                labels="BARC Helmets";
                values[]=
                {
                    "Base",
                    "Medic",
                    "Avalanche",
                    "Binns",
                    "Fire",
                    "Gray",
                    "Shank",
                    "Mav",
                    "Merit",
                    "Trill",
                    "Snapper",
                    "Wagner",
                    "Wedge",
                    "Binns",
                    "Shogun"
                };
            };
        };
    };
};
class CfgWeapons
{
	class MRC_Pilot_Helmet;
    class 3as_ATRT_helmet;
    class MRC_Base_Helmet;
	class Uniform_Base;
	class H_HelmetSpecB;
	class JLTS_CloneHelmetP2_illum;
	class MRC_ARC_Helmet;
	class JLTS_CloneHelmetBARC;
    class JLTS_CloneHelmetARC_illum;
    
    //Infantry Custom Helmets
    #define Macro_MRC_Inf_Custom_Compat_Helmet(a) class MRC_##a##_Helmet : MRC_Base_Helmet {\
        class XtdGearInfo\
        {\
            model="InfantryCustomHelms";\
            InfantryCustoms=##a##;\
        };\
    };
    
    Macro_MRC_Inf_Custom_Compat_Helmet(Ant);

    Macro_MRC_Inf_Custom_Compat_Helmet(Barr);
	Macro_MRC_Inf_Custom_Compat_Helmet(Bardok);
	Macro_MRC_Inf_Custom_Compat_Helmet(Blackout);
	Macro_MRC_Inf_Custom_Compat_Helmet(Blanks);

	Macro_MRC_Inf_Custom_Compat_Helmet(Charred);
	Macro_MRC_Inf_Custom_Compat_Helmet(Chop);
    Macro_MRC_Inf_Custom_Compat_Helmet(Chubs);
    Macro_MRC_Inf_Custom_Compat_Helmet(Corvus);
	Macro_MRC_Inf_Custom_Compat_Helmet(Con);
    Macro_MRC_Inf_Custom_Compat_Helmet(Corpse);

	Macro_MRC_Inf_Custom_Compat_Helmet(Dante);
	Macro_MRC_Inf_Custom_Compat_Helmet(Dev);
    Macro_MRC_Inf_Custom_Compat_Helmet(Doc);

	Macro_MRC_Inf_Custom_Compat_Helmet(Fraiser);

    Macro_MRC_Inf_Custom_Compat_Helmet(Galahad);
    Macro_MRC_Inf_Custom_Compat_Helmet(Ghoul);
    Macro_MRC_Inf_Custom_Compat_Helmet(Gibby);
    Macro_MRC_Inf_Custom_Compat_Helmet(Goose);

    Macro_MRC_Inf_Custom_Compat_Helmet(Jimmy);
    Macro_MRC_Inf_Custom_Compat_Helmet(Jas);
    Macro_MRC_Inf_Custom_Compat_Helmet(Joker);
	Macro_MRC_Inf_Custom_Compat_Helmet(Jughead);
	
    Macro_MRC_Inf_Custom_Compat_Helmet(Larkkit);
	Macro_MRC_Inf_Custom_Compat_Helmet(Laser);
	Macro_MRC_Inf_Custom_Compat_Helmet(Legate);
	Macro_MRC_Inf_Custom_Compat_Helmet(Loki);

	Macro_MRC_Inf_Custom_Compat_Helmet(Magic);
	Macro_MRC_Inf_Custom_Compat_Helmet(Main);
    Macro_MRC_Inf_Custom_Compat_Helmet(Mauser);
    Macro_MRC_Inf_Custom_Compat_Helmet(Mountain);
    Macro_MRC_Inf_Custom_Compat_Helmet(Miller);
    Macro_MRC_Inf_Custom_Compat_Helmet(Misery);

    Macro_MRC_Inf_Custom_Compat_Helmet(Nova);
    Macro_MRC_Inf_Custom_Compat_Helmet(Nuclear);

    Macro_MRC_Inf_Custom_Compat_Helmet(Odin);
	Macro_MRC_Inf_Custom_Compat_Helmet(Opossum);

    Macro_MRC_Inf_Custom_Compat_Helmet(Penguin);
	Macro_MRC_Inf_Custom_Compat_Helmet(Perry);
    Macro_MRC_Inf_Custom_Compat_Helmet(Polarbear);
    Macro_MRC_Inf_Custom_Compat_Helmet(Postal);
	Macro_MRC_Inf_Custom_Compat_Helmet(Predator);

	Macro_MRC_Inf_Custom_Compat_Helmet(Qal);
	
    Macro_MRC_Inf_Custom_Compat_Helmet(Saga);
    Macro_MRC_Inf_Custom_Compat_Helmet(Saint);
    Macro_MRC_Inf_Custom_Compat_Helmet(Samael);
	Macro_MRC_Inf_Custom_Compat_Helmet(Sappheron);
    Macro_MRC_Inf_Custom_Compat_Helmet(Scar);
	Macro_MRC_Inf_Custom_Compat_Helmet(Scorch);
    Macro_MRC_Inf_Custom_Compat_Helmet(Snapper);
	Macro_MRC_Inf_Custom_Compat_Helmet(Skit);
	Macro_MRC_Inf_Custom_Compat_Helmet(Sound);
	Macro_MRC_Inf_Custom_Compat_Helmet(Steak);
    Macro_MRC_Inf_Custom_Compat_Helmet(Sunday);

	Macro_MRC_Inf_Custom_Compat_Helmet(Tarz);
    Macro_MRC_Inf_Custom_Compat_Helmet(Tig);
	Macro_MRC_Inf_Custom_Compat_Helmet(Trauma);

	Macro_MRC_Inf_Custom_Compat_Helmet(Volx);

	Macro_MRC_Inf_Custom_Compat_Helmet(Widget);

	Macro_MRC_Inf_Custom_Compat_Helmet(Xero);

    Macro_MRC_Inf_Custom_Compat_Helmet(Yoshi);

    class MRC_Cross_Helmet: JLTS_CloneHelmetP2_illum
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Cross";
        };
    };
    
    
    //Pilot customs
    #define Macro_MRC_Pilot_Custom_Compat_Helmet(a) class MRC_##a##_Helmet : MRC_Pilot_Helmet  {\
        class XtdGearInfo\
        {\
            model="PilotCustomshelmets";\
            PilotCustoms=##a##;\
        };\
    };

	Macro_MRC_Pilot_Custom_Compat_Helmet(Frog);
	Macro_MRC_Pilot_Custom_Compat_Helmet(Binns);
	Macro_MRC_Pilot_Custom_Compat_Helmet(Grizzly);
	Macro_MRC_Pilot_Custom_Compat_Helmet(Hex);
    Macro_MRC_Pilot_Custom_Compat_Helmet(Marf);
	Macro_MRC_Pilot_Custom_Compat_Helmet(Oxide);
    Macro_MRC_Pilot_Custom_Compat_Helmet(Tiny);
    Macro_MRC_Pilot_Custom_Compat_Helmet(Crimmy);

    //Beskar Helms
    class MRC_Beskar_Helmet: 3as_ATRT_helmet
    {
        class XtdGearInfo
        {
            model="BeskarCustomhelmets";
            Beskarhelms="Crew";
        };
    };

    #define Macro_MRC_Beskar_Custom_Compat_Helmet(a) class MRC_Beskar_##a##_Helmet: MRC_Beskar_Helmet {\
        class XtdGearInfo\
        {\
            model="BeskarCustomhelmets";\
            Beskarhelms=##a##;\
        };\
    };

    Macro_MRC_Beskar_Custom_Compat_Helmet(Kuro);
    Macro_MRC_Beskar_Custom_Compat_Helmet(Woost);
    Macro_MRC_Beskar_Custom_Compat_Helmet(Weylyn);

    //Arc helms
    class MRC_Roach_Helmet: JLTS_CloneHelmetARC_illum
    {
        class XtdGearInfo
        {
            model="Archelmets";
            Archelms="Roach";
        };
    };

    #define Macro_MRC_ARC_Compat_Helmet(a) class MRC_##a##_ARC_Helmet : MRC_ARC_Helmet {\
        class XtdGearInfo\
        {\
            model="Archelmets";\
            Archelms=##a##;\
        };\
    };

    Macro_MRC_ARC_Compat_Helmet(Cannon);
    Macro_MRC_ARC_Compat_Helmet(Corn);
	Macro_MRC_ARC_Compat_Helmet(Talleyrand);
	Macro_MRC_ARC_Compat_Helmet(Bacon);
	Macro_MRC_ARC_Compat_Helmet(Skittles);
	Macro_MRC_ARC_Compat_Helmet(Scorch);
	Macro_MRC_ARC_Compat_Helmet(Oddball);
	Macro_MRC_ARC_Compat_Helmet(Jericho);
    Macro_MRC_ARC_Compat_Helmet(Trauma);



    //BARC Helms
    class MRC_BARC_Base_Helmet: JLTS_CloneHelmetBARC
    {
        class XtdGearInfo
        {
            model="Barchelmets";
            Barchelms="Base";
        };
    };
    #define Macro_MRC_BARC_Compat_Helmet(a) class MRC_##a##_BARC_Helmet : MRC_BARC_Base_Helmet {\
        class XtdGearInfo\
        {\
            model="Barchelmets";\
            Barchelms=##a##;\
        };\
    };

    Macro_MRC_BARC_Compat_Helmet(Medic);
    Macro_MRC_BARC_Compat_Helmet(Avalanche);
    Macro_MRC_BARC_Compat_Helmet(Binns);
    Macro_MRC_BARC_Compat_Helmet(Fire);
    Macro_MRC_BARC_Compat_Helmet(Shank);
    Macro_MRC_BARC_Compat_Helmet(Gray);
    Macro_MRC_BARC_Compat_Helmet(Mav);
    Macro_MRC_BARC_Compat_Helmet(Merit);
    Macro_MRC_BARC_Compat_Helmet(Trill);
    Macro_MRC_BARC_Compat_Helmet(Snapper);
    Macro_MRC_BARC_Compat_Helmet(Wedge);
    Macro_MRC_BARC_Compat_Helmet(Shogun);
};