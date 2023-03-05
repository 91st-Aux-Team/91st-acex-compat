<<<<<<< Updated upstream
// class CfgPatches
// {
// 	class MRC_ACEAX_compat_helmcustom
// 	{
// 		addonRootClass="MRC_ACEAX_compat"
// 		units[]={};
// 		weapons[]={};
// 		requiredVersion=1.88;
// 		requiredAddons[]=
// 		{
// 			"aceax_gearinfo"
// 		};
// 		author="91st aux";
// 		version="0.1";
// 	};
// };
// class XtdGearModels
// {
//     class CfgWeapons 
//     {
//         class CustomVests
//         {
//             label="Custom Vests";
//             author="91st Aux Team";
//             options[]={"CustomVest"};
//             class CustomVest
//             {
//                 labels="Infantry Custom Vests";
//                 values[]=
//                 {
//                     "Mav",
//                     "Doc",
//                     "Corn",
//                     "Kuro",
//                     "Predator",
//                     "Frasier",
//                     "Charred",
//                     "Hex",
//                     "Trill",
//                     "Leer",
//                     //ARC
//                     "Scorch",
//                     "Main",
//                     "Skit",
//                     "Mauser",
//                     "Roach"
//                 };
//             };
//         };
//     };
// };
// class CfgWeapons
// {
//     class V_RebreatherB;
//     class MRC_Officer_Vest_Gray;
//     class MRC_Reverse_Officer_Gray;
//     class MRC_Vest_ARC_Base;
//     class MRC_Sergeant_Vest;
//     //Officer Vests
=======
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
		version="0.1";
	};
};
class XtdGearModels
{
    class CfgWeapons 
    {
        class CustomVests
        {
            label="Custom Vests";
            author="91st Aux Team";
            options[]={"CustomVest"};
            class CustomVest
            {
                labels="Infantry Custom Vests";
                values[]=
                {
                    "Mav",
                    "Doc",
                    "Corn",
                    "Kuro",
                    "Predator",
                    "Frasier",
                    "Charred",
                    "Hex",
                    "Trill",
                    "Weyln",
                    //ARC
                    "Scorch",
                    "Main",
                    "Skit",
                    "Mauser",
                    "Cannon"
                };
            };
        };
    };
};
class CfgWeapons
{
    class V_RebreatherB;
    class MRC_Officer_Vest_Gray;
    class MRC_Reverse_Officer_Gray;
    class MRC_Vest_ARC_Base;
    class MRC_Sergeant_Vest;
    //Officer Vests
>>>>>>> Stashed changes

//     #define Macro_MRC_off_Vest_Compat(a) class MRC_Officer_Vest_##a## : MRC_Officer_Vest_Gray  {\
//         class XtdGearInfo\
//         {\
//             model="CustomVests";\
//             CustomVest=##a##;\
//         };\
//     };

<<<<<<< Updated upstream
//     Macro_MRC_off_Vest_Compat(Mav);
//     Macro_MRC_off_Vest_Compat(Doc);
//     Macro_MRC_off_Vest_Compat(Corn);
//     Macro_MRC_off_Vest_Compat(Kuro);
//     Macro_MRC_off_Vest_Compat(Predator);
//     Macro_MRC_off_Vest_Compat(Charred);
//     Macro_MRC_off_Vest_Compat(Frasier);
//     Macro_MRC_off_Vest_Compat(Hex);
//     Macro_MRC_off_Vest_Compat(Mauser);
//     Macro_MRC_off_Vest_Compat(Main);
//     Macro_MRC_off_Vest_Compat(Trill);
//     Macro_MRC_off_Vest_Compat(Leer);

//     //ARC
//     class MRC_Vest_ARC_Scorch: MRC_Vest_ARC_Base
//     {
//         class XtdGearInfo
//         {
//             model="CustomVests";
//             CustomVest="Scorch";
//         };
//     };
//     class MRC_Skit_Vest: MRC_Sergeant_Vest
//     {
//         class XtdGearInfo
//         {
//             model="CustomVests";
//             CustomVest="Skit"
//         };
//     };
//         class MRC_Vest_ARC_Roach: MRC_Vest_ARC_Base
//     {
//         class XtdGearInfo
//         {
//             model="CustomVests";
//             CustomVest="Roach";
//         };
//     };
    
// };
=======
    Macro_MRC_off_Vest_Compat(Mav);
    Macro_MRC_off_Vest_Compat(Doc);
    Macro_MRC_off_Vest_Compat(Corn);
    Macro_MRC_off_Vest_Compat(Kuro);
    Macro_MRC_off_Vest_Compat(Predator);
    Macro_MRC_off_Vest_Compat(Charred);
    Macro_MRC_off_Vest_Compat(Frasier);
    Macro_MRC_off_Vest_Compat(Hex);
    Macro_MRC_off_Vest_Compat(Mauser);
    Macro_MRC_off_Vest_Compat(Main);
    Macro_MRC_off_Vest_Compat(Trill);
    Macro_MRC_off_Vest_Compat(Weyln);

    //ARC
    class MRC_Vest_ARC_Scorch: MRC_Vest_ARC_Base
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Scorch";
        };
    };
    class MRC_Skit_Vest: MRC_Sergeant_Vest
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Skit"
        };
    };
    class MRC_Vest_ARC_Scorch: MRC_Vest_ARC_Base
    {
        class XtdGearInfo
        {
            model="CustomVests";
            CustomVest="Cannon";
        };
    }; 
};
>>>>>>> Stashed changes
