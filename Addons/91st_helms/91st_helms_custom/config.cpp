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
                    "Binns",
                    "Blanks",
                    "Charred",
                    "Chop",
                    "Con",
                    "Corpse",
                    "Crash",
                    "Cross",
                    "Crossout",
                    "Dex",
                    "Edge",
                    "Falcon",
                    "Fallon",
                    "Foxtrot",
                    "Fraeyr",
                    "Fraiser",
                    "Freq",
                    "Golden",
                    "Ishi",
                    "Jughead",
                    "Jericho",
                    "Kitsune",
                    "Laser",
                    "Leeroy",
                    "Lesk",
                    "Lich",
                    "Marf",
                    "Mauser",
                    "Mav",
                    "Max",
                    "Myrola",
                    "Opossum",
                    "Oddball",
                    "Praetorian",
                    "Predator",
                    "Qal",
                    "Quiet",
                    "Rat",
                    "Ricochet",
                    "Saga",
                    "Sappheron",
                    "Sapphire",
                    "Shields",
                    "Silver",
                    "Skit",
                    "Smig",
                    "Steak",
                    "Steve",
                    "Strike",
                    "Tarz",
                    "Tig",
                    "Trauma",
                    "Trill",
                    "Volx",
                    "Viper",
                    "Widget",
                    "Xenophon",
                    "Xero",
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
                    "Squids"
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
                    "Scorch"
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
                    "Raze",
                    "Kappa",
                    "Shoto",
                    "Sponks",
                    "Postal"
                };
                class ARF
                {
                    label="ARF";
                };
                class Raze
                {
                    label="Raze";
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
                    "Mav"
                };
            };
        };
    };
};
class CfgWeapons
{
	class 212th_AB_Helmet;
	class 91st_Pilot_Helmet;
    class 212th_ATRT_helmet;
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
        class 91st_Binns_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Binns";
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
        class 91st_Crash_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Crash";
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
        class 91st_Crossout_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Crossout";
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
        class 91st_Edge_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Edge";
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
        class 91st_Ishi_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Ishi";
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
        class 91st_Leeroy_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Leeroy";
            };
        };
        class 91st_Lesk_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Lesk";
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
        class 91st_Myrola_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Myrola";
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
        class 91st_Oddball_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Oddball";
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
        class 91st_Quiet_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Quiet";
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
        class 91st_Sapphire_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Sapphire";
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
        class 91st_Smig_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Smig";
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
        class 91st_Steve_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Steve";
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
        class 91st_Trauma_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Trauma";
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
        class 91st_Viper_Helmet: 91st_Base_Helmet
        {
            class XtdGearInfo
            {
                model="InfantryCustomHelms";
                InfantryCustoms="Viper";
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

    //Beskar Helms
        class 91st_Beskar_Helmet: 212th_ATRT_helmet
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
        class 91st_Talleyrand_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Tallyrand";
            };
        };
        class 91st_Corn_Helmet: 91st_ARC_Helmet
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
        class 91st_Bacon_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Bacon";
            };
        };
        class 91st_Cabur_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Cabur";
            };
        };
        class 91st_Skittles_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Skittles";
            };
        };
        class 91st_Arcanist_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Arcanist";
            };
        };
        class 91st_Nova_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Nova";
            };
        };
        class 91st_Galahad_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Galahad";
            };
        };
        class 91st_Loken_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Loken";
            };
        };
        class 91st_Scorch_Helmet: 91st_ARC_Helmet
        {
            class XtdGearInfo
            {
                model="Archelmets";
                Archelms="Scorch";
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
        class 91st_Raze_ARF: 91st_ARF
        {
            class XtdGearInfo
            {
                model="ARFHelmets";
                ARFhelms="Raze";
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
};