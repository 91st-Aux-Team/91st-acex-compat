class CfgPatches
{
	class 91st_ACEAX_compat_helmcustom
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
                    "Axer",
                    "Barr",
                    "Bart",
                    "Banana",
                    "Blanks",
                    "Charred",
                    "Chop",
                    "Con",
                    "Corpse",
                    "Cross",
                    "Cryptic",
                    "Dante",
                    "Dark",
                    "Dev",
                    "Dex",
                    "Dumajin",
                    "Fallon",
                    "Foxtrot",
                    "Fraeyr",
                    "Fraiser",
                    "Freq",
                    "Golden",
                    "Jughead",
                    "Laser",
                    "Leer",
                    "Loki",
                    "Magic",
                    "Main",
                    "Marf",
                    "Mauser",
                    "Mav",
                    "Misery",
                    "Oni",
                    "Opossum",
                    "Perry",
                    "Praetorian",
                    "Predator",
                    "Qal",
                    "Romeo",
                    "Saga",
                    "Sappheron",
                    "Scorch",
                    "Shields",
                    "Silver",
                    "Skit",
                    "Sound",
                    "Steak",
                    "Strike",
                    "Sytha",
                    "Tarz",
                    "Tig",
                    "Volx",
                    "Wagner",
                    "Widget",
                    "Xenophon",
                    "Xero",
                    "Xetor",
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
                    "Hex",
                    "Chopper",
                    "Grady",
                    "Grizzly",
                    "Delta",
                    "Bensen",
                    "Squids",
                    "Oxide",
                    "Winter"
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
                    "Toxic",
                    "Sentinel",
                    "Samael",
                    "Crit"
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
                    "Talleyrand",
                    "Cabur",
                    "Corn",
                    "Roach",
                    "Bacon",
                    "Skittles",
                    "Arcanist",
                    "Loken",
                    "Scorch",
                    "Trauma",
                    "Jericho",
                    "Oddball"
                };                
            };        
        };
        class ARFHelmets
        {
            label="ARF Helmets";
            author="91st Aux Team";
            options[]={"ARFhelms"};
            class ARFhelms
            {
                labels="ARF Helmets";
                values[]=
                {
                    "ARF",
                    "Edge",
                    "Kappa",
                    "Shoto",
                    "Sponks",
                    "Postal"
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
                    "Binns",
                    "Mav",
                    "Trill"
                };
            };
        };
    };
};
class CfgWeapons
{
	class 212th_AB_Helmet;
	class 91st_Pilot_Helmet;
    class 3as_ATRT_helmet;
    class 91st_Base_Helmet;
	class Uniform_Base;
	class H_HelmetSpecB;
	class JLTS_CloneHelmetP2_illum;
	class 91st_ARC_Helmet;
	class JLTS_CloneHelmetBARC;
    class JLTS_CloneHelmetARC_illum;
    
    //Infantry Custom Helmets
    #define Macro_91st_Inf_Custom_Compat_Helmet(a) class 91st_##a##_Helmet : 91st_Base_Helmet {\
        class XtdGearInfo\
        {\
            model="InfantryCustomHelms";\
            InfantryCustoms=##a##;\
        };\
    };
    
    Macro_91st_Inf_Custom_Compat_Helmet(Barr);
	Macro_91st_Inf_Custom_Compat_Helmet(Bart);
	Macro_91st_Inf_Custom_Compat_Helmet(Banana);
	Macro_91st_Inf_Custom_Compat_Helmet(Blanks);

	Macro_91st_Inf_Custom_Compat_Helmet(Charred);
	Macro_91st_Inf_Custom_Compat_Helmet(Chop);
	Macro_91st_Inf_Custom_Compat_Helmet(Con);
	Macro_91st_Inf_Custom_Compat_Helmet(Cryptic);

	Macro_91st_Inf_Custom_Compat_Helmet(Dante);
	Macro_91st_Inf_Custom_Compat_Helmet(Dark);
	Macro_91st_Inf_Custom_Compat_Helmet(Dev);
	Macro_91st_Inf_Custom_Compat_Helmet(Dex);
	Macro_91st_Inf_Custom_Compat_Helmet(Dumajin);

	Macro_91st_Inf_Custom_Compat_Helmet(Fallon);
	Macro_91st_Inf_Custom_Compat_Helmet(Foxtrot);
	Macro_91st_Inf_Custom_Compat_Helmet(Fraeyr);
	Macro_91st_Inf_Custom_Compat_Helmet(Fraiser);
	Macro_91st_Inf_Custom_Compat_Helmet(Freq);

	Macro_91st_Inf_Custom_Compat_Helmet(Golden);


	Macro_91st_Inf_Custom_Compat_Helmet(Jughead);
	
	Macro_91st_Inf_Custom_Compat_Helmet(Laser);
	Macro_91st_Inf_Custom_Compat_Helmet(Leer);
	Macro_91st_Inf_Custom_Compat_Helmet(Loki);

	Macro_91st_Inf_Custom_Compat_Helmet(Magic);
	Macro_91st_Inf_Custom_Compat_Helmet(Main);
	Macro_91st_Inf_Custom_Compat_Helmet(Marf);
	Macro_91st_Inf_Custom_Compat_Helmet(Mauser);
	Macro_91st_Inf_Custom_Compat_Helmet(Mav);
    Macro_91st_Inf_Custom_Compat_Helmet(Misery);

	Macro_91st_Inf_Custom_Compat_Helmet(Opossum);
	Macro_91st_Inf_Custom_Compat_Helmet(Oni);

	Macro_91st_Inf_Custom_Compat_Helmet(Perry);
	Macro_91st_Inf_Custom_Compat_Helmet(Praetorian);
	Macro_91st_Inf_Custom_Compat_Helmet(Predator);

	Macro_91st_Inf_Custom_Compat_Helmet(Qal);

	Macro_91st_Inf_Custom_Compat_Helmet(Romeo);
	
	Macro_91st_Inf_Custom_Compat_Helmet(Saga);
	Macro_91st_Inf_Custom_Compat_Helmet(Sappheron);
	Macro_91st_Inf_Custom_Compat_Helmet(Scorch);
	Macro_91st_Inf_Custom_Compat_Helmet(Shields);
	Macro_91st_Inf_Custom_Compat_Helmet(Silver);
	Macro_91st_Inf_Custom_Compat_Helmet(Skit);
	Macro_91st_Inf_Custom_Compat_Helmet(Sound);
	Macro_91st_Inf_Custom_Compat_Helmet(Steak);
	Macro_91st_Inf_Custom_Compat_Helmet(Strike);
	Macro_91st_Inf_Custom_Compat_Helmet(Sytha);

	Macro_91st_Inf_Custom_Compat_Helmet(Tarz);
	Macro_91st_Inf_Custom_Compat_Helmet(Tig);
	// Macro_91st_Inf_Custom_Compat_Helmet(Trill);

	Macro_91st_Inf_Custom_Compat_Helmet(Volx);

	Macro_91st_Inf_Custom_Compat_Helmet(Wagner);
	Macro_91st_Inf_Custom_Compat_Helmet(Widget);

	Macro_91st_Inf_Custom_Compat_Helmet(Xenophon);
	Macro_91st_Inf_Custom_Compat_Helmet(Xetor);
	Macro_91st_Inf_Custom_Compat_Helmet(Xero);


    class 91st_Axer_Helmet: JLTS_CloneHelmetP2_illum
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Axer";
        };
    };
    class 91st_Corpse_Helmet: JLTS_CloneHelmetP2_illum
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Corpse";
        };
    };
    class 91st_Cross_Helmet: JLTS_CloneHelmetP2_illum
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Cross";
        };
    };
    
    
    //Pilot customs
    #define Macro_91st_Pilot_Custom_Compat_Helmet(a) class 91st_##a##_Helmet : 91st_Pilot_Helmet  {\
        class XtdGearInfo\
        {\
            model="PilotCustomshelmets";\
            PilotCustoms=##a##;\
        };\
    };

    Macro_91st_Pilot_Custom_Compat_Helmet(Bensen);
	// Macro_91st_Pilot_Custom_Compat_Helmet(Chopper);
	Macro_91st_Pilot_Custom_Compat_Helmet(Delta);
	Macro_91st_Pilot_Custom_Compat_Helmet(Frog);
	Macro_91st_Pilot_Custom_Compat_Helmet(Grady);
	Macro_91st_Pilot_Custom_Compat_Helmet(Grizzly);
	Macro_91st_Pilot_Custom_Compat_Helmet(Hex);
	Macro_91st_Pilot_Custom_Compat_Helmet(Oxide);
	Macro_91st_Pilot_Custom_Compat_Helmet(Squids);
    Macro_91st_Pilot_Custom_Compat_Helmet(Winter);

    //Beskar Helms
    class 91st_Beskar_Helmet: 3as_ATRT_helmet
    {
        class XtdGearInfo
        {
            model="BeskarCustomhelmets";
            Beskarhelms="Crew";
        };
    };

    #define Macro_91st_Beskar_Custom_Compat_Helmet(a) class 91st_Beskar_##a##_Helmet: 91st_Beskar_Helmet {\
        class XtdGearInfo\
        {\
            model="BeskarCustomhelmets";\
            Beskarhelms=##a##;\
        };\
    };

    Macro_91st_Beskar_Custom_Compat_Helmet(Kuro);
	Macro_91st_Beskar_Custom_Compat_Helmet(Samael);
	Macro_91st_Beskar_Custom_Compat_Helmet(Sentinel);
	Macro_91st_Beskar_Custom_Compat_Helmet(Toxic);
	Macro_91st_Beskar_Custom_Compat_Helmet(Crit);


    //Arc helms
    class 91st_Roach_Helmet: JLTS_CloneHelmetARC_illum
    {
        class XtdGearInfo
        {
            model="Archelmets";
            Archelms="Roach";
        };
    };

    #define Macro_91st_ARC_Compat_Helmet(a) class 91st_##a##_ARC_Helmet : 91st_ARC_Helmet {\
        class XtdGearInfo\
        {\
            model="Archelmets";\
            Archelms=##a##;\
        };\
    };

    Macro_91st_ARC_Compat_Helmet(Corn);
	Macro_91st_ARC_Compat_Helmet(Talleyrand);
	Macro_91st_ARC_Compat_Helmet(Bacon);
	Macro_91st_ARC_Compat_Helmet(Cabur);
	Macro_91st_ARC_Compat_Helmet(Skittles);
	Macro_91st_ARC_Compat_Helmet(Scorch);
	Macro_91st_ARC_Compat_Helmet(Arcanist);
	Macro_91st_ARC_Compat_Helmet(Loken);
	Macro_91st_ARC_Compat_Helmet(Oddball);
	Macro_91st_ARC_Compat_Helmet(Trauma);
	Macro_91st_ARC_Compat_Helmet(Jericho);


    //ARF
    class 327th_ARF;
    class 91st_ARF: 327th_ARF
    {
        class XtdGearInfo
        {
            model="ARFHelmets";
            ARFhelms="ARF";
        };
    };

    #define Macro_91st_ARF_Compat_Helmet(a) class 91st_##a##_ARF : 91st_ARF {\
        class XtdGearInfo\
        {\
            model="ARFHelmets";\
            ARFhelms=##a##;\
        };\
    };

    Macro_91st_ARF_Compat_Helmet(Edge);
	Macro_91st_ARF_Compat_Helmet(Shoto);
	Macro_91st_ARF_Compat_Helmet(Sponks);
	Macro_91st_ARF_Compat_Helmet(Kappa);
	Macro_91st_ARF_Compat_Helmet(Postal);


    //BARC Helms
        class 91st_BARC_Base_Helmet: JLTS_CloneHelmetBARC
        {
            class XtdGearInfo
            {
                model="Barchelmets";
                Barchelms="Base";
            };
        };
        #define Macro_91st_BARC_Compat_Helmet(a) class 91st_##a##_ARF : 91st_ARF {\
        class XtdGearInfo\
        {\
            model="ARFHelmets";\
            ARFhelms=##a##;\
        };\
    };

    Macro_91st_BARC_Compat_Helmet(Medic);
    Macro_91st_BARC_Compat_Helmet(Mav);
    Macro_91st_BARC_Compat_Helmet(Trill);
    Macro_91st_BARC_Compat_Helmet(Binns);
};