/**
* **************How to use this firmware - READ THIS*********************************
*
* Uncomment means removing the 2 // in front of #define.
* 
* If you have EZABL uncomment #define EZABL_ENABLE and then uncommend the mount
* you are using with the printer. 
* 
* If you have a custom/unsupported mount uncomment #define CUSTOM_MOUNT
* and enter your offsets below in the CUSTOM MOUNT section.
* 
* There are other features in the TH3D Extras section so look there for V6 Hotend,
* Bootscreen settings, Titan Extruder and more. You only need to edit this file.
* 
* For the Tornado, TAZ5, and CR-10S select Tools > Board > Arduino Mega 2560
* For the Ender 2 and CR-10 select Tools > Board > Sanguino(1284P Boards)
* For the Anet Printers select Tools > Board > Anet V1.0
* 
* Then select the COM port your printer is on from the Tools menu.
* 
* Once you have your settings click the arrow in the upper left to upload to the board.
* 
* Thats it! 
* 
* !!!!!!!CAUTION!!!!!!!
* After updating be sure to either send M502 then M500 to reset your EEPROM or on the printer
* LCD go to Control > Initialize EEPROM to clear out the EEPROM to defaults.
* 
* ONLY UNCOMMENT ONE PRINTER TYPE. IF YOU UNCOMMENT MORE THAN ONE YOU WILL GET ERRORS.
* If you get errors flashing READ the message it gives you and double check that you selected
* the correct board from the Tools menu in Arduino.
*/

#ifndef CONFIGURATION_H
#define CONFIGURATION_H
#define CONFIGURATION_H_VERSION 010110

//===========================================================================
//============================ TH3D Configuration ===========================
//===========================================================================

// ONLY UNCOMMENT THINGS IN ONE PRINTER SECTION!!! IF YOU DO NOT FOLLOW THIS THEN YOU WILL GET ERRORS.

//===========================================================================
// Creality CR-10 Options - Select Sanguino(1284P) from Tools > Board
//===========================================================================
//#define CR10
//#define CR10_MINI
//#define CR10_S4
//#define CR10_S5

// If you are using our EZOut filament sensor kit please follow the install guide
// and then uncomment the #define EZOUT_ENABLE line below.
//#define EZOUT_ENABLE

// EZABL Settings - Uncomment #define EZABL_ENABLE and uncomment your mount 
// type you are using to enable EZABL Bed Leveing features
//#define EZABL_ENABLE

// Probe Mounts
//#define CR10_VOLCANO
//#define CR10_V6HEAVYDUTY
//#define CR10_OEM
//#define CR10_FANG
//#define CUSTOM_PROBE

//===========================================================================
// Creality CR-10S Options - Select Arduino Mega 2560 from Tools > Board
//===========================================================================
//#define CR10S
//#define CR10S_MINI
//#define CR10S_S4
//#define CR10S_S5

// If you are having issues with your stock CR-10S filament sensor uncomment 
// the below line to disable it in the firmware. We sell EZOUT kits to replace this.
// DO NOT ENABLE THIS IF YOU ARE REPLACING OR ADDING THE EZOUT.
//#define CR10S_NOFILAMENTSENSOR

// If you want to use the CR-10 LCD with the CR-10S board uncomment the below line
// then connect the LCD cable to EXP1 on the CR-10S board but rotate it 180 degrees.
// You will have to force it in but it will fit and work. If you also have an EZOUT
// this makes rotating the cable painless since the EZOut is not keyed.
//#define CR10LCD_CR10S

// If you are using our EZOut filament sensor kit please follow the install guide
// and then uncomment the #define EZOUT_ENABLE line below. Connect to the EXP1 LCD
// connection on the CR-10S board. This will override the stock Creality sensor if you have one
// DO NOT EVER PLUG THE EZOUT SENSOR INTO THE ENDSTOP CONNECTIONS ON THE CR-10S BOARD
// THE EZOUT SENSOR MUST ALWAYS CONNECT TO THE EZOUT BOARD. SEE INSTALL GUIDE FOR DETAILS.
//#define EZOUT_ENABLE

// EZABL Settings - Uncomment #define EZABL_ENABLE and uncomment your mount 
// type you are using to enable EZABL Bed Leveing features
//#define EZABL_ENABLE

// Probe Mounts
//#define CR10_VOLCANO
//#define CR10_V6HEAVYDUTY
//#define CR10_OEM
//#define CR10_FANG
//#define CUSTOM_PROBE

//===========================================================================
// Creality Ender 2 Options - Select Sanguino(1284P) from Tools > Board
//===========================================================================
//#define ENDER2

// EZABL Settings - Uncomment #define EZABL_ENABLE and uncomment your mount 
// type you are using to enable EZABL Bed Leveing features
//#define EZABL_ENABLE

// Probe Mounts
//#define ENDER2_OEM
//#define ENDER2_V6
//#define ENDER2_V6HEAVYDUTY
//#define CUSTOM_PROBE


//===========================================================================
// TEVO Tornado Options - Select Arduino Mega 2560 from Tools > Board
//===========================================================================
//#define TORNADO

// EZABL Settings - Uncomment #define EZABL_ENABLE and uncomment your mount 
// type you are using to enable EZABL Bed Leveing features
//#define EZABL_ENABLE

// Probe Mounts
//#define TORNADO_OEM
//#define TORNADO_VOLCANO
//#define TORNADO_V6HEAVYDUTY
//#define CUSTOM_PROBE

// Use Tornado Bootscreen instead of TH3D
//#define TORNADO_BOOT

//===========================================================================
// Lulzbot TAZ5 Options - Select Arduino Mega 2560 from Tools > Board
//===========================================================================
//#define TAZ5

// EZABL Settings - Uncomment #define EZABL_ENABLE and uncomment your mount 
// type you are using to enable EZABL Bed Leveing features
//#define EZABL_ENABLE

// Probe Mounts
//#define TAZ5_OEM
//#define CUSTOM_PROBE

//===========================================================================
// Anet Printers Options - Select Anet 1.0 from Tools > Board
//===========================================================================

// Uncomment the Anet Model you are using
//#define Anet_A2 //** please see option below to choose bed size for the A2 only!!
//#define Anet_A6
//#define Anet_A8
//#define Anet_E10
//#define Anet_E12

// Choose bed size for A2 only
// IGNORE THESE OPTIONS FOR MACHINES OTHER THAN THE A2
//#define A2_Small_Bed //(220x220)
//#define A2_Large_Bed //(220x270)

// Choose which type of lcd you have (Select One option)
//#define Anet_Lcd12864 //This is the larger lcd with the rotary controller found on most Anet machines
//#define Anet_Lcd2004 //This is the lcd with the 5 button keypad usually found on A8 and some A2 machines

// EZABL Settings - Uncomment #define EZABL_ENABLE and uncomment your mount 
// type you are using to enable EZABL Bed Leveing features
//#define EZABL_ENABLE

// Probe Mounts
//#define OEM_MOUNT
//#define CUSTOM_PROBE

//===========================================================================
// TH3D EXTRAS
//===========================================================================

// If you want more or less EZABL probe points change the number below
// Default is 4 which gives you 4x4 grid. Do not go over 10 here.
// Ender 2 will be best with a 3x3 grid, change to a 3 for Ender 2
// DO NOT DISABLE THIS. LEAVE UNCOMMENTED EVEN IF NOT USING EZABL.
#define EZABL_POINTS 4

// If you are having leveling issues with the EZABL try uncommenting the below
// line. This will change the leveling type from bilinear to linear. Some printers
// do better with linear leveling instead of bilinear.
//#define LINEAR_LEVELING

// If you are using a V6 Hotend with the V6 Thermistor 
// uncomment the below line  to set the correct thermistor settings
//#define V6_HOTEND

// If you are using an AC bed with a standalone controller (like the Keenovo heaters) 
// uncomment the below line to disable the heated bed control in the firmware
//#define AC_BED

// If you are using the Keenovo bed with a SSR and the Keenovo temperature sensor uncomment
// the below line to enable the changes to use the Keenovo thermistor
//#define KEENOVO_TEMPSENSOR

// If you are using an E3D or TH3D Titan Extruder uncomment the below line 
// to setup the firmware to the correct steps and direction
//#define TITAN_EXTRUDER
// If your titan uses steps/mm other than 463 change it below, this works for most Titans
// DO NOT DISABLE THIS. ONLY USED IF YOU ENABLE TITAN_EXTRUDER.
#define TITAN_EXTRUDER_STEPS 463

// Use TinyMachines Bootscreen instead of TH3D
//#define TM3D_BOOT

// Use your own printer name
//#define USER_PRINTER_NAME "Change Me" 

// If you want to keep your heaters ON during probing uncomment the below line. We do NOT recommend doing this on AC beds.
//#define HEATERS_ON_DURING_PROBING

// If your bed pulsing from PID is causing your lights to dim (mainly with AC beds)or you want slightly quicker bed 
// heat up times uncomment below to switch back to the old "bang-bang" method that cycles it on and off slower.
//#define PIDBED_DISABLE

// Allow bed to stay pause probing to recover hear during probing - will slow down probing but make it more accurate
//#define HEATER_RECOVERY

//===========================================================================
// IF YOU HAVE A CUSTOM PROBE MOUNT OR ONE THAT IS NOT PRE-SUPPORTED
// UNCOMMENT THE CUSTOM_PROBE OPTION AND ENTER YOUR PROBE LOCATION BELOW
//===========================================================================
#if ENABLED(CUSTOM_PROBE)
  /**
  *   Z Probe to nozzle (X,Y) offset, relative to (0, 0).
  *   X and Y offsets must be integers.
  *
  *   In the following example the X and Y offsets are both positive:
  *   #define X_PROBE_OFFSET_FROM_EXTRUDER 10
  *   #define Y_PROBE_OFFSET_FROM_EXTRUDER 10
  *
  *      +-- BACK ---+
  *      |           |
  *    L |    (+) P  | R <-- probe (10,10)
  *    E |           | I
  *    F | (-) N (+) | G <-- nozzle (0,0)
  *    T |           | H
  *      |    (-)    | T
  *      |           |
  *      O-- FRONT --+
  *    (0,0)
  */
  #define X_PROBE_OFFSET_FROM_EXTRUDER 10  // X offset: -left  +right  [of the nozzle]
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 10  // Y offset: -front +behind [the nozzle]1
#endif

/**
 * LCD LANGUAGE
 *
 * Select the language to display on the LCD. These languages are available:
 *
 *    en, an, bg, ca, cn, cz, cz_utf8, de, el, el-gr, es, eu, fi, fr, fr_utf8, gl,
 *    hr, it, kana, kana_utf8, nl, pl, pt, pt_utf8, pt-br, pt-br_utf8, ru, sk_utf8,
 *    tr, uk, zh_CN, zh_TW, test
 *
 * :{ 'en':'English', 'an':'Aragonese', 'bg':'Bulgarian', 'ca':'Catalan', 'cn':'Chinese', 
 * 'cz':'Czech', 'cz_utf8':'Czech (UTF8)', 'de':'German', 'el':'Greek', 'el-gr':'Greek (Greece)', 
 * 'es':'Spanish', 'eu':'Basque-Euskera', 'fi':'Finnish', 'fr':'French', 'fr_utf8':'French (UTF8)', 
 * 'gl':'Galician', 'hr':'Croatian', 'it':'Italian', 'kana':'Japanese', 'kana_utf8':'Japanese (UTF8)', 
 * 'nl':'Dutch', 'pl':'Polish', 'pt':'Portuguese', 'pt-br':'Portuguese (Brazilian)', 
 * 'pt-br_utf8':'Portuguese (Brazilian UTF8)', 'pt_utf8':'Portuguese (UTF8)', 'ru':'Russian', 
 * 'sk_utf8':'Slovak (UTF8)', 'tr':'Turkish', 'uk':'Ukrainian', 'zh_CN':'Chinese (Simplified)', 
 * 'zh_TW':'Chinese (Taiwan)', test':'TEST' }
 */
#define LCD_LANGUAGE en

/**
 * Bed Skew Compensation
 *
 * This feature corrects for misalignment in the XYZ axes.
 *
 * Take the following steps to get the bed skew in the XY plane:
 *  1. Print a test square (e.g., https://www.thingiverse.com/thing:2563185)
 *  2. For XY_DIAG_AC measure the diagonal A to C
 *  3. For XY_DIAG_BD measure the diagonal B to D
 *  4. For XY_SIDE_AD measure the edge A to D
 *
 * Marlin automatically computes skew factors from these measurements.
 * Skew factors may also be computed and set manually:
 *
 *  - Compute AB     : SQRT(2*AC*AC+2*BD*BD-4*AD*AD)/2
 *  - XY_SKEW_FACTOR : TAN(PI/2-ACOS((AC*AC-AB*AB-AD*AD)/(2*AB*AD)))
 *
 * If desired, follow the same procedure for XZ and YZ.
 * Use these diagrams for reference:
 *
 *    Y                     Z                     Z
 *    ^     B-------C       ^     B-------C       ^     B-------C
 *    |    /       /        |    /       /        |    /       /
 *    |   /       /         |   /       /         |   /       /
 *    |  A-------D          |  A-------D          |  A-------D
 *    +-------------->X     +-------------->X     +-------------->Y
 *     XY_SKEW_FACTOR        XZ_SKEW_FACTOR        YZ_SKEW_FACTOR
 */
//#define SKEW_CORRECTION

#if ENABLED(SKEW_CORRECTION)
  // Input all length measurements here:
  #define XY_DIAG_AC 282.8427124746
  #define XY_DIAG_BD 282.8427124746
  #define XY_SIDE_AD 200

  // Or, set the default skew factors directly here
  // to override the above measurements:
  //#define XY_SKEW_FACTOR 0.0

  //#define SKEW_CORRECTION_FOR_Z
  #if ENABLED(SKEW_CORRECTION_FOR_Z)
    #define XZ_DIAG_AC 282.8427124746
    #define XZ_DIAG_BD 282.8427124746
    #define YZ_DIAG_AC 282.8427124746
    #define YZ_DIAG_BD 282.8427124746
    #define YZ_SIDE_AD 200
    #define XZ_SKEW_FACTOR 0.0
    #define YZ_SKEW_FACTOR 0.0
  #endif

  // Enable this option for M852 to set skew at runtime
  #define SKEW_CORRECTION_GCODE
#endif

#include "Configuration_backend.h"

#endif // CONFIGURATION_H
