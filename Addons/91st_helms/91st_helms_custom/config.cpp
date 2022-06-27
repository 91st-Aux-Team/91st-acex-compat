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
                    "Falcon",
                    "Fallon",
                    "Foxtrot",
                    "Fraeyr",
                    "Fraiser",
                    "Freq",
                    "Golden",
                    "Happy",
                    "Jughead",
                    "Jericho",
                    "Kitsune",
                    "Laser",
                    "Leer",
                    "Lich",
                    "Loki",
                    "Magic",
                    "Main",
                    "Marf",
                    "Mauser",
                    "Mav",
                    "Max",
                    "Oni",
                    "Opossum",
                    "Perry",
                    "Praetorian",
                    "Predator",
                    "Qal",
                    "Rat",
                    "Ricochet",
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
                    // "Trill",
                    "Volx",
                    "Wagner",
                    "Widget",
                    "Xenophon",
                    "Xero",
                    "Xetor",
                    "Zerda"
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
                    "Fly",
                    "Sentinel",
                    "Samael",
                    "Crit"
                };
                class Kuro
                {
                    label="Kuro";
                };
                class Toxic
                {
                    label="Toxic";
                };
                class Fly
                {
                    label="Fly";
                };
                class Sentinel
                {
                    label="Sentinel";
                };
                class Samael
                {
                    label="Samael";
                };
                class Crit
                {
                    label="Crit";
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
                    "Tallyrand",
                    "Cabur",
                    "Corn",
                    "Roach",
                    "Bacon",
                    "Skittles",
                    "Arcanist",
                    "Nova",
                    "Galahad",
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
                class ARF
                {
                    label="ARF";
                };
                class Edge
                {
                    label="Edge";
                };
                class Kappa
                {
                    label="Kappa";
                };
                class Shoto
                {
                    label="Shoto";
                };
                class Sponks
                {
                    label="Sponks";
                };
                class Postal
                {
                    label="Postal";
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
        class 91st_Axer_Helmet: JLTS_CloneHelmetP2_illum
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Axer";
            };
        };
        class 91st_Barr_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Barr";
            };
        };
        class 91st_Bart_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Bart";
            };
        };
        class 91st_Banana_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Banana";
            };
        };
        class 91st_Blanks_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Blanks";
            };
        };
        class 91st_Charred_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Charred";
            };
        };
        class 91st_Chop_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Chop";
            };
        };
        class 91st_Con_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Con";
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
        class 91st_Cryptic_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Cryptic";
            };
        };
        class 91st_Dante_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Dante";
            };
        };
        class 91st_Dark_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Dark";
            };
        };
        class 91st_Dev_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Dev";
            };
        };
        class 91st_Dex_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Dex";
            };
        };
        class 91st_Dumajin_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Dumajin";
            };
        };
        class 91st_Falcon_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Falcon";
            };
        };
        class 91st_Fallon_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Fallon";
            };
        };
        class 91st_Foxtrot_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Foxtrot";
            };
        };
        class 91st_Fraeyr_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Fraeyr";
            };
        };
        class 91st_Fraiser_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Fraiser";
            };
        };
        class 91st_Freq_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Freq";
            };
        };
        class 91st_Golden_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Golden";
            };
        };
        class 91st_Happy_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Happy";
            };
        };
        class 91st_Jughead_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Jughead";
            };
        };
        class 91st_Jericho_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Jericho";
            };
        };
        class 91st_Kitsune_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Kitsune";
            };
        };
        class 91st_Laser_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Laser";
            };
        };
        class 91st_Leer_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Leer";
            };
        };
        class 91st_Lich_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Lich";
            };
        };
        class 91st_Loki_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Loki";
            };
        };
        class 91st_Magic_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Magic";
            };
        };        
        class 91st_Main_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Main";
            };
        };
        class 91st_Marf_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Marf";
            };
        };
        class 91st_Mauser_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Mauser";
            };
        };
        class 91st_Mav_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Mav";
            };
        };
        class 91st_Max_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Max";
            };
        };
        
        class 91st_Opossum_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Opossum";
            };
        };
        class 91st_Oni_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Oni";
            };
        };
        class 91st_Perry_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Perry";
            };
        };
        class 91st_Praetorian_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Praetorian";
            };
        };
        class 91st_Predator_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Predator";
            };
        };
        class 91st_Qal_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Qal";
            };
        };
        class 91st_Rat_Helmet: JLTS_CloneHelmetP2_illum
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Rat";
            };
        };
        class 91st_Ricochet_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Ricochet";
            };
        };
        class 91st_Romeo_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Romeo";
            };
        };
        class 91st_Saga_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Saga";
            };
        };
        class 91st_Sappheron_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Sappheron";
            };
        };
        class 91st_Scorch_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Scorch";
            };
        };
        class 91st_Shields_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Shields";
            };
        };
        class 91st_Silver_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Silver";
            };
        };
        class 91st_Skit_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Skit";
            };
        };
        class 91st_Sound_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Sound";
            };
        };
        class 91st_Steak_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Steak";
            };
        };
        class 91st_Strike_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Strike";
            };
        };
        class 91st_Sytha_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Sytha";
            };
        };
        class 91st_Tarz_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Tarz";
            };
        };
        class 91st_Tig_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Tig";
            };
        };
        class 91st_Trill_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Trill";
            };
        };
        class 91st_Volx_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Volx";
            };
        };
        class 91st_Wagner_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Wagner";
            };
        };
        class 91st_Widget_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Widget";
            };
        };
        class 91st_Xetor_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Xetor";
            };
        };
        class 91st_Xenophon_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Xenophon";
            };
        };
        class 91st_Xero_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Xero";
            };
        };
        class 91st_Zerda_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Zerda";
            };
        };
    
    //Pilot customs
        class 91st_Frog_Helmet: 91st_Pilot_Helmet
        {
            class XtdGearInfo
            {
                model="PilotCustomshelmets";
                PilotCustoms="Frog";
            };
        };
        class 91st_Hex_Helmet: 91st_Pilot_Helmet
        {
            class XtdGearInfo
            {
                model="PilotCustomshelmets";
                PilotCustoms="Hex";
            };
        };
        class 91st_Chopper_Helmet: 91st_Pilot_Helmet
        {
            class XtdGearInfo
            {
                model="PilotCustomshelmets";
                PilotCustoms="Chopper";
            };
        };
        class 91st_Grady_Helmet: 91st_Pilot_Helmet
        {
            class XtdGearInfo
            {
                model="PilotCustomshelmets";
                PilotCustoms="Grady";
            };
        };
        class 91st_Grizzly_Helmet: 91st_Pilot_Helmet
        {
            class XtdGearInfo
            {
                model="PilotCustomshelmets";
                PilotCustoms="Grizzly";
            };
        };
        class 91st_Delta_Helmet: 91st_Pilot_Helmet
        {
            class XtdGearInfo
            {
                model="PilotCustomshelmets";
                PilotCustoms="Delta";
            };
        };
        class 91st_Bensen_Helmet: 91st_Pilot_Helmet
        {
            class XtdGearInfo
            {
                model="PilotCustomshelmets";
                PilotCustoms="Bensen";
            };
        };
        class 91st_Squids_Helmet: 91st_Pilot_Helmet
        {
            class XtdGearInfo
            {
                model="PilotCustomshelmets";
                PilotCustoms="Squids";
            };
        };
        class 91st_Oxide_Helmet: 91st_Pilot_Helmet
        {
            class XtdGearInfo
            {
                model="PilotCustomshelmets";
                PilotCustoms="Oxide";
            };
        };

    //Beskar Helms
        class 91st_Beskar_Helmet: 3as_ATRT_helmet
        {
            class XtdGearInfo
            {
                model="BeskarCustomhelmets";
                Beskarhelms="Crew";
            };
        };
        class 91st_Beskar_Kuro_Helmet: 91st_Beskar_Helmet
        {
            class XtdGearInfo
            {
                model="BeskarCustomhelmets";
                Beskarhelms="Kuro";
            };
        };
        class 91st_Beskar_Toxic_Helmet: 91st_Beskar_Helmet
        {
            class XtdGearInfo
            {
                model="BeskarCustomhelmets";
                Beskarhelms="Toxic";
            };
        };
        class 91st_Beskar_Fly_Helmet: 91st_Beskar_Helmet
        {
            class XtdGearInfo
            {
                model="BeskarCustomhelmets";
                Beskarhelms="Fly";
            };
        };
        class 91st_Beskar_Sentinel_Helmet: 91st_Beskar_Helmet
        {
            class XtdGearInfo
            {
                model="BeskarCustomhelmets";
                Beskarhelms="Sentinel";
            };
        };
        class 91st_Beskar_Samael_Helmet: 91st_Beskar_Helmet
        {
            class XtdGearInfo
            {
                model="BeskarCustomhelmets";
                Beskarhelms="Samael";
            };
        };
        class 91st_Beskar_Crit_Helmet: 91st_Beskar_Helmet
        {
            class XtdGearInfo
            {
                model="BeskarCustomhelmets";
                Beskarhelms="Crit";
            };
        };
    //Arc helms
        class 91st_Talleyrand_ARC_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Tallyrand";
            };
        };
        class 91st_Corn_ARC_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Corn";
            };
        };
        class 91st_Roach_Helmet: JLTS_CloneHelmetARC_illum
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Roach";
            };
        };
        class 91st_Bacon_ARC_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Bacon";
            };
        };
        class 91st_Cabur_ARC_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Cabur";
            };
        };
        class 91st_Skittles_ARC_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Skittles";
            };
        };
        class 91st_Arcanist_ARC_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Arcanist";
            };
        };
        class 91st_Nova_ARC_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Nova";
            };
        };
        class 91st_Galahad_ARC_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Galahad";
            };
        };
        class 91st_Loken_ARC_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Loken";
            };
        };
        class 91st_Scorch_ARC_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Scorch";
            };
        };
        class 91st_Trauma_ARC_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Trauma";
            };
        };
        class 91st_Jericho_ARC_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Jericho";
            };
        };
        class 91st_Oddball_ARC_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Oddball";
            };
        };
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
        class 91st_Edge_ARF: 91st_ARF
        {
            class XtdGearInfo
            {
                model="ARFHelmets";
                ARFhelms="Edge";
            };
        };
        class 91st_Kappa_ARF: 91st_ARF
        {
            class XtdGearInfo
            {
                model="ARFHelmets";
                ARFhelms="Kappa";
            };
        };
        class 91st_Shoto_ARF: 91st_ARF
        {
            class XtdGearInfo
            {
                model="ARFHelmets";
                ARFhelms="Shoto";
            };
        };
        class 91st_Sponks_ARF: 91st_ARF
        {
            class XtdGearInfo
            {
                model="ARFHelmets";
                ARFhelms="Sponks";
            };
        };
        class 91st_Postal_ARF: 91st_ARF
        {
            class XtdGearInfo
            {
                model="ARFHelmets";
                ARFhelms="Postal";
            };
        };
    //BARC Helms
        class 91st_BARC_Base_Helmet: JLTS_CloneHelmetBARC
        {
            class XtdGearInfo
            {
                model="Barchelmets";
                Barchelms="Base";
            };
        };
        class 91st_Medic_BARC_Helmet: JLTS_CloneHelmetBARC
        {
            class XtdGearInfo
            {
                model="Barchelmets";
                Barchelms="Medic";
            };
        };
        class 91st_Mav_BARC_Helmet: JLTS_CloneHelmetBARC
        {
            class XtdGearInfo
            {
                model="Barchelmets";
                Barchelms="Mav";
            };
        };
        class 91st_Trill_BARC_Helmet: JLTS_CloneHelmetBARC
        {
            class XtdGearInfo
            {
                model="Barchelmets";
                Barchelms="Trill";
            };
        };
        class 91st_Binns_BARC_Helmet: JLTS_CloneHelmetBARC
        {
            class XtdGearInfo
            {
                model="Barchelmets";
                Barchelms="Binns";
            };
        };
};