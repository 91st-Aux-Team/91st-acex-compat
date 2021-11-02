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
                    "Baron",
                    "Barr",
                    "Banana",
                    "Binns",
                    "Blanks",
                    "Charred",
                    "Chop",
                    "Cookie",
                    "Con",
                    "Corpse",
                    "Courtney",
                    "Crash",
                    "Cross",
                    "Crossout",
                    "Demo",
                    "Dev",
                    "Dex",
                    "Dino",
                    "Dumajin",
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
                    "Lesk",
                    "Lich",
                    "Magic",
                    "Marf",
                    "Mav",
                    "Max",
                    "Muddy",
                    "Myrola",
                    "Opossum",
                    "Oddball",
                    "Penguin",
                    "Postal",
                    "Praetorian",
                    "Predator",
                    "Qal",
                    "Rat",
                    "Raze",
                    "Ricochet",
                    "Saga",
                    "Saint",
                    "Sapphire",
                    "Shields",
                    "Shoto",
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
                    "Zerda",
                    "Zoozle"
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
                    "Delta",
                    "Bensen",
                    "Pole",
                    "Squids"
                };
                class Frog
                {
                    label="Frog";
                };
                class Hex
                {
                    label="Hex";
                };
                class Chopper
                {
                    label="Chopper";
                };
                class Delta
                {
                    label="Delta";
                };
                class Bensen
                {
                    label="Bensen";
                };
                class Pole
                {
                    label="Pole";
                };
                class Squids
                {
                    label="Squids";
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
                    "Caber",
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
                class Tallyrand
                {
                    label="Tallyrand";
                };
                class Caber
                {
                    label="Caber";
                };
                class Corn
                {
                    label="Corn";
                };
                class Roach
                {
                    label="Roach";
                };
                class Bacon
                {
                    label="Bacon";
                };
                class Skittles
                {
                    label="Skittles";
                };
                class Arcanist
                {
                    label="Arcanist";
                };
                class Nova
                {
                    label="Nova";
                };
                class Galahad
                {
                    label="Galahad";
                };
                class Loken
                {
                    label="Loken";
                };
                class Scorch
                {
                    label="Scorch";
                };
                
            };
        
        };
    };
};
class CfgWeapons
{
	class 212th_AB_Helmet;
	class 212th_Pilot_Helmet_91st;
	class Uniform_Base;
	class H_HelmetSpecB;
	class JLTS_CloneHelmetP2;
	class JLTS_CloneHelmetP2_illum;
	class JLTS_CloneHelmetARC;
	class JLTS_CloneHelmetBARC;
	class 212th_ATRT_helmet;
    class JLTS_CloneHelmetARC_illum;
    
    //Infantry Custom Helmets
    class 91st_Axer_Helmet_JLTS: JLTS_CloneHelmetP2_illum
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Axer";
        };
    };
    class 91st_Baron_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Baron";
        };
    };
    class 91st_Barr_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Barr";
        };
    };
    class 91st_Banana_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Banana";
        };
    };
    class 91st_Binns_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Binns";
        };
    };
    class 91st_Blanks_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Blanks";
        };
    };
    class 91st_Charred_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Charred";
        };
    };
    class 91st_Chop_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Chop";
        };
    };
    class 91st_Cookie_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Cookie";
        };
    };
    class 91st_Con_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Con";
        };
    };
    class 91st_Corpse_Helmet_JLTS: JLTS_CloneHelmetP2_illum
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Corpse";
        };
    };
    class 91st_Courtney_Helmet_JLTS: JLTS_CloneHelmetP2_illum
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Courtney";
        };
    };
    class 91st_Crash_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Crash";
        };
    };
    class 91st_Cross_Helmet_JLTS: JLTS_CloneHelmetP2_illum
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Cross";
        };
    };
    class 91st_Crossout_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Crossout";
        };
    };
    class 91st_Demo_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Demo";
        };
    };
    class 91st_Dev_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Dev";
        };
    };
    class 91st_Dex_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Dex";
        };
    };
    class 91st_Dino_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Dino";
        };
    };
    class 91st_Dumajin_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Dumajin";
        };
    };
    class 91st_Edge_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Edge";
        };
    };
    class 91st_Falcon_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Falcon";
        };
    };
    class 91st_Fallon_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Fallon";
        };
    };
    class 91st_Foxtrot_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Foxtrot";
        };
    };
    class 91st_Fraeyr_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Fraeyr";
        };
    };
    class 91st_Fraiser_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Fraiser";
        };
    };
    class 91st_Freq_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Freq";
        };
    };
    class 91st_Golden_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Golden";
        };
    };
    class 91st_Ishi_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Ishi";
        };
    };
    class 91st_Jughead_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Jughead";
        };
    };
    class 91st_Jericho_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Jericho";
        };
    };
    class 91st_Lesk_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Lesk";
        };
    };
    class 91st_Lich_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Lich";
        };
    };
    class 91st_Magic_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Magic";
        };
    };
    class 91st_Marf_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Marf";
        };
    };
    class 91st_Mav_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Mav";
        };
    };
    class 91st_Max_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Max";
        };
    };
    class 91st_Muddy_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Muddy";
        };
    };
    class 91st_Myrola_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Myrola";
        };
    };
    class 91st_Opossum_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Opossum";
        };
    };
    class 91st_Oddball_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Oddball";
        };
    };
    class 91st_Penguin_Helmet_JLTS: JLTS_CloneHelmetP2_illum
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Penguin";
        };
    };
    class 91st_Postal_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Postal";
        };
    };
    class 91st_Praetorian_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Praetorian";
        };
    };
    class 91st_Predator_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Predator";
        };
    };
    class 91st_Qal_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Qal";
        };
    };
    class 91st_Rat_Helmet_JLTS: JLTS_CloneHelmetP2_illum
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Rat";
        };
    };
    class 91st_Raze_Helmet_JLTS: JLTS_CloneHelmetP2_illum
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Raze";
        };
    };
    class 91st_Ricochet_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Ricochet";
        };
    };
    class 91st_Saga_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Saga";
        };
    };
    class 91st_Saint_Helmet_JLTS: JLTS_CloneHelmetP2_illum
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Saint";
        };
    };
    class 91st_Sapphire_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Sapphire";
        };
    };
    class 91st_Shields_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Shields";
        };
    };
    class 91st_Shoto_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Shoto";
        };
    };
    class 91st_Skit_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Skit";
        };
    };
    class 91st_Smig_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Smig";
        };
    };
    class 91st_Steak_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Steak";
        };
    };
    class 91st_Steve_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Steve";
        };
    };
    class 91st_Strike_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Strike";
        };
    };
    class 91st_Tarz_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Tarz";
        };
    };
    class 91st_Tig_Helmet_JTLS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Tig";
        };
    };
    class 91st_Trauma_Helmet_JTLS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Trauma";
        };
    };
    class 91st_Trill_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Trill";
        };
    };
    class 91st_Volx_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Volx";
        };
    };
    class 91st_Viper_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Viper";
        };
    };
    class 91st_Widget_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Widget";
        };
    };
    class 91st_Xenophon_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Xenophon";
        };
    };
    class 91st_Xero_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Xero";
        };
    };
    class 91st_Zerda_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Zerda";
        };
    };
    class 91st_Zoozle_Helmet_JLTS: JLTS_CloneHelmetP2
    {
        class XtdGearInfo
        {
            model="InfantryCustomHelms";
            InfantryCustoms="Zoozle";
        };
    };
    
    //Pilot customs
    class 91st_Frog_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="PilotCustomshelmets";
            PilotCustoms="Frog";
        };
    };
    class 91st_Hex_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="PilotCustomshelmets";
            PilotCustoms="Hex";
        };
    };
    class 91st_Chopper_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="PilotCustomshelmets";
            PilotCustoms="Chopper";
        };
    };
    class 91st_Delta_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="PilotCustomshelmets";
            PilotCustoms="Delta";
        };
    };
    class 91st_Bensen_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="PilotCustomshelmets";
            PilotCustoms="Bensen";
        };
    };
    class 91st_Pole_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="PilotCustomshelmets";
            PilotCustoms="Pole";
        };
    };
    class 91st_Squids_Helmet: 212th_Pilot_Helmet_91st
    {
        class XtdGearInfo
        {
            model="PilotCustomshelmets";
            PilotCustoms="Squids";
        };
    };

    //Arc helms
    class 91st_Talleyrand_Helmet: JLTS_CloneHelmetARC
    {
        class XtdGearInfo
        {
            model="Archelmets";
            Archelms="Tallyrand";
        };
    };
    class 91st_Corn_Helmet: JLTS_CloneHelmetARC
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
    class 91st_Bacon_Helmet: JLTS_CloneHelmetARC
    {
        class XtdGearInfo
        {
            model="Archelmets";
            Archelms="Bacon";
        };
    };
    class 91st_Cabur_Helmet: JLTS_CloneHelmetARC
    {
        class XtdGearInfo
        {
            model="Archelmets";
            Archelms="Caber";
        };
    };
    class 91st_Skittles_Helmet: JLTS_CloneHelmetARC
    {
        class XtdGearInfo
        {
            model="Archelmets";
            Archelms="Skittles";
        };
    };
    class 91st_Arcanist_Helmet: JLTS_CloneHelmetARC
    {
        class XtdGearInfo
        {
            model="Archelmets";
            Archelms="Arcanist";
        };
    };
    class 91st_Nova_Helmet: JLTS_CloneHelmetARC
    {
        class XtdGearInfo
        {
            model="Archelmets";
            Archelms="Nova";
        };
    };
    class 91st_Galahad_Helmet: JLTS_CloneHelmetARC
    {
        class XtdGearInfo
        {
            model="Archelmets";
            Archelms="Galahad";
        };
    };
    class 91st_Loken_Helmet: JLTS_CloneHelmetARC
    {
        class XtdGearInfo
        {
            model="Archelmets";
            Archelms="Loken";
        };
    };
    class 91st_Scorch_Helmet: JLTS_CloneHelmetARC
    {
        class XtdGearInfo
        {
            model="Archelmets";
            Archelms="Scorch";
        };
    };
};