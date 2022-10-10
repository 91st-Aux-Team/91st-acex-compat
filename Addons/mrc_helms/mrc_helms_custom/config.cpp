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
                    "Barr",
                    "Bart",
                    "Bardok",
                    "Blanks",
                    "Charred",
                    "Chop",
                    "Con",
                    "Cross",
                    "Cryptic",
                    "Dante",
                    "Dev",
                    "Dumajin",
                    "Fallon",
                    "Fraiser",
                    "Freq",
                    "Hallowed",
                    "Jughead",
                    "Laser",
                    "Larkkit",
                    "Leer",
                    "Loki",
                    "Magic",
                    "Main",
                    "Marf",
                    "Misery",
                    "Nuclear",
                    "Odin",
                    "Opossum",
                    "Ozzy",
                    "Perry",
                    "Praetorian",
                    "Predator",
                    "Romeo",
                    "Saga",
                    "Sappheron",
                    "Scorch",
                    "Silver",
                    "Skit",
                    "Snapper",
                    "Sound",
                    "Steak",
                    "Tarz",
                    "Volx",
                    "Wagner",
                    "Wedge",
                    "Widget",
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
                    "Grady",
                    "Grizzly",
                    "Delta",
                    "Bensen",
                    "Oxide",
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
                    "Crit",
                    "Woost"
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
                    "Trill",
                    "Avalanche",
                    "Fire",
                    "Qal"
                };
            };
        };
    };
};
class CfgWeapons
{
	class 212th_AB_Helmet;
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
    
    Macro_MRC_Inf_Custom_Compat_Helmet(Barr);
	Macro_MRC_Inf_Custom_Compat_Helmet(Bart);
	Macro_MRC_Inf_Custom_Compat_Helmet(Banana);
	Macro_MRC_Inf_Custom_Compat_Helmet(Bardok);
	Macro_MRC_Inf_Custom_Compat_Helmet(Blanks);

	Macro_MRC_Inf_Custom_Compat_Helmet(Charred);
	Macro_MRC_Inf_Custom_Compat_Helmet(Chop);
	Macro_MRC_Inf_Custom_Compat_Helmet(Con);
	Macro_MRC_Inf_Custom_Compat_Helmet(Cryptic);

	Macro_MRC_Inf_Custom_Compat_Helmet(Dante);
	Macro_MRC_Inf_Custom_Compat_Helmet(Dark);
	Macro_MRC_Inf_Custom_Compat_Helmet(Dev);
	Macro_MRC_Inf_Custom_Compat_Helmet(Dumajin);

	Macro_MRC_Inf_Custom_Compat_Helmet(Fallon);
	Macro_MRC_Inf_Custom_Compat_Helmet(Fraiser);
	Macro_MRC_Inf_Custom_Compat_Helmet(Freq);

    Macro_MRC_Inf_Custom_Compat_Helmet(Hallowed);

	Macro_MRC_Inf_Custom_Compat_Helmet(Jughead);
	
	Macro_MRC_Inf_Custom_Compat_Helmet(Laser);
	Macro_MRC_Inf_Custom_Compat_Helmet(Larkkit);
	Macro_MRC_Inf_Custom_Compat_Helmet(Leer);
	Macro_MRC_Inf_Custom_Compat_Helmet(Loki);

	Macro_MRC_Inf_Custom_Compat_Helmet(Magic);
	Macro_MRC_Inf_Custom_Compat_Helmet(Main);
	Macro_MRC_Inf_Custom_Compat_Helmet(Marf);
    Macro_MRC_Inf_Custom_Compat_Helmet(Misery);
    
    Macro_MRC_Inf_Custom_Compat_Helmet(Nuclear);

    Macro_MRC_Inf_Custom_Compat_Helmet(Odin);
	Macro_MRC_Inf_Custom_Compat_Helmet(Opossum);
    Macro_MRC_Inf_Custom_Compat_Helmet(Ozzy);

	Macro_MRC_Inf_Custom_Compat_Helmet(Perry);
	Macro_MRC_Inf_Custom_Compat_Helmet(Praetorian);
	Macro_MRC_Inf_Custom_Compat_Helmet(Predator);

	Macro_MRC_Inf_Custom_Compat_Helmet(Romeo);
	
	Macro_MRC_Inf_Custom_Compat_Helmet(Saga);
	Macro_MRC_Inf_Custom_Compat_Helmet(Sappheron);
	Macro_MRC_Inf_Custom_Compat_Helmet(Scorch);
	Macro_MRC_Inf_Custom_Compat_Helmet(Silver);
	Macro_MRC_Inf_Custom_Compat_Helmet(Skit);
    Macro_MRC_Inf_Custom_Compat_Helmet(Snapper);
	Macro_MRC_Inf_Custom_Compat_Helmet(Sound);
	Macro_MRC_Inf_Custom_Compat_Helmet(Steak);

	Macro_MRC_Inf_Custom_Compat_Helmet(Tarz);

	Macro_MRC_Inf_Custom_Compat_Helmet(Volx);

	Macro_MRC_Inf_Custom_Compat_Helmet(Wagner);
	Macro_MRC_Inf_Custom_Compat_Helmet(Wedge);
	Macro_MRC_Inf_Custom_Compat_Helmet(Widget);

	Macro_MRC_Inf_Custom_Compat_Helmet(Xetor);
	Macro_MRC_Inf_Custom_Compat_Helmet(Xero);


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

    Macro_MRC_Pilot_Custom_Compat_Helmet(Bensen);
	Macro_MRC_Pilot_Custom_Compat_Helmet(Delta);
	Macro_MRC_Pilot_Custom_Compat_Helmet(Frog);
	Macro_MRC_Pilot_Custom_Compat_Helmet(Grady);
	Macro_MRC_Pilot_Custom_Compat_Helmet(Grizzly);
	Macro_MRC_Pilot_Custom_Compat_Helmet(Hex);
	Macro_MRC_Pilot_Custom_Compat_Helmet(Oxide);

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
	Macro_MRC_Beskar_Custom_Compat_Helmet(Crit);
    Macro_MRC_Beskar_Custom_Compat_Helmet(Woost);

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

    Macro_MRC_ARC_Compat_Helmet(Corn);
	Macro_MRC_ARC_Compat_Helmet(Talleyrand);
	Macro_MRC_ARC_Compat_Helmet(Bacon);
	Macro_MRC_ARC_Compat_Helmet(Skittles);
	Macro_MRC_ARC_Compat_Helmet(Scorch);
	Macro_MRC_ARC_Compat_Helmet(Arcanist);
	Macro_MRC_ARC_Compat_Helmet(Loken);
	Macro_MRC_ARC_Compat_Helmet(Oddball);
	Macro_MRC_ARC_Compat_Helmet(Trauma);
	Macro_MRC_ARC_Compat_Helmet(Jericho);


    //ARF
    class 327th_ARF;
    class MRC_ARF: 327th_ARF
    {
        class XtdGearInfo
        {
            model="ARFHelmets";
            ARFhelms="ARF";
        };
    };

    #define Macro_MRC_ARF_Compat_Helmet(a) class MRC_##a##_ARF : MRC_ARF {\
        class XtdGearInfo\
        {\
            model="ARFHelmets";\
            ARFhelms=##a##;\
        };\
    };

    Macro_MRC_ARF_Compat_Helmet(Edge);
	Macro_MRC_ARF_Compat_Helmet(Shoto);
	Macro_MRC_ARF_Compat_Helmet(Kappa);


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
    Macro_MRC_BARC_Compat_Helmet(Mav);
    Macro_MRC_BARC_Compat_Helmet(Trill);
    Macro_MRC_BARC_Compat_Helmet(Binns);
    Macro_MRC_BARC_Compat_Helmet(Avalanche);
    Macro_MRC_BARC_Compat_Helmet(Fire);
    Macro_MRC_BARC_Compat_Helmet(Qal);
};