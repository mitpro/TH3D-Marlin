/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Greek (Greece)
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_EL_GR_H
#define LANGUAGE_EL_GR_H

#define MAPPER_CECF
#define DISPLAY_CHARSET_ISO10646_GREEK

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" έτοιμο.")
#define MSG_SD_INSERTED                     _UxGT("Εισαγωγή κά�?τας")
#define MSG_SD_REMOVED                      _UxGT("Αφαί�?εση κά�?τας")
#define MSG_LCD_ENDSTOPS                    _UxGT("Endstops") // Max length 8 characters
#define MSG_MAIN                            _UxGT("Βασική Οθόνη")
#define MSG_AUTOSTART                       _UxGT("Αυτόματη εκκίνηση")
#define MSG_DISABLE_STEPPERS                _UxGT("Απενε�?γοποίηση βηματιστή")
#define MSG_AUTO_HOME                       _UxGT("Αυτομ. επαναφο�?ά στο α�?χικό σημείο")
#define MSG_AUTO_HOME_X                     _UxGT("Α�?χικό σημείο X")
#define MSG_AUTO_HOME_Y                     _UxGT("Α�?χικό σημείο Y")
#define MSG_AUTO_HOME_Z                     _UxGT("Α�?χικό σημείο Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("Επαναφο�?ά στο α�?χικό σημείο ΧΥΖ")
#define MSG_LEVEL_BED_WAITING               _UxGT("Κάντε κλικ για να ξεκινήσετε")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Επόμενο σημείο")
#define MSG_LEVEL_BED_DONE                  _UxGT("Ολοκλή�?ωση επιπεδοποίησης!")
#define MSG_SET_HOME_OFFSETS                _UxGT("Ο�?ισμός βασικών μετατοπίσεων")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Εφα�?μόστηκαν οι μετατοπίσεις")
#define MSG_SET_ORIGIN                      _UxGT("Ο�?ισμός π�?οέλευσης")
#define MSG_PREHEAT_1                       _UxGT("Π�?οθέ�?μανση PLA")
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" όλα")
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" κλίνη")
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" επιβεβαίωση")
#define MSG_PREHEAT_2                       _UxGT("Π�?οθέ�?μανση ABS")
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" όλα")
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" Bed")
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" επιβεβαίωση")
#define MSG_COOLDOWN                        _UxGT("Μειωση θε�?μοκ�?ασιας")
#define MSG_SWITCH_PS_ON                    _UxGT("Ενε�?γοποίηση")
#define MSG_SWITCH_PS_OFF                   _UxGT("Απενε�?γοποίηση")
#define MSG_EXTRUDE                         _UxGT("Εξώθηση")
#define MSG_RETRACT                         _UxGT("Ανάσυ�?ση")
#define MSG_MOVE_AXIS                       _UxGT("Μετακίνηση άξονα")
#define MSG_BED_LEVELING                    _UxGT("Επιπεδοποίηση κλίνης")
#define MSG_LEVEL_BED                       _UxGT("Επιπεδοποίηση κλίνης")
#define MSG_MOVE_X                          _UxGT("Μετακίνηση X")
#define MSG_MOVE_Y                          _UxGT("Μετακίνηση Y")
#define MSG_MOVE_Z                          _UxGT("Μετακίνηση Z")
#define MSG_MOVE_E                          _UxGT("Εξωθητή�?ας")
#define MSG_MOVE_01MM                       _UxGT("Μετακίνηση 0,1 μμ")
#define MSG_MOVE_1MM                        _UxGT("Μετακίνηση 1 μμ")
#define MSG_MOVE_10MM                       _UxGT("Μετακίνηση 10 μμ")
#define MSG_SPEED                           _UxGT("Ταχ�?τητα")
#define MSG_BED_Z                           _UxGT("Κλίνη Z")
#define MSG_NOZZLE                          _UxGT("Ακ�?οφ�?σιο")
#define MSG_BED                             _UxGT("Κλίνη")
#define MSG_FAN_SPEED                       _UxGT("Ταχ�?τητα ανεμιστή�?α")
#define MSG_FLOW                            _UxGT("Ροή")
#define MSG_CONTROL                         _UxGT("Έλεγχος")
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Min")
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Max")
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Fact")
#define MSG_AUTOTEMP                        _UxGT("Αυτομ. �?�?θμιση θε�?μοκ�?ασίας")
#define MSG_ON                              _UxGT("Ενε�?γοποιημένο")
#define MSG_OFF                             _UxGT("Απενε�?γοποιημένο")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_ACC                             _UxGT("Επιτάχυνση")
#define MSG_JERK                            _UxGT("Vαντίδ�?αση")
#define MSG_VX_JERK                         _UxGT("Vαντίδ�?αση x")
#define MSG_VY_JERK                         _UxGT("Vαντίδ�?αση y")
#define MSG_VZ_JERK                         _UxGT("Vαντίδ�?αση z")
#define MSG_VE_JERK                         _UxGT("Vαντίδ�?αση e")
#define MSG_VMAX                            _UxGT("Vμεγ ")
#define MSG_VMIN                            _UxGT("Vελαχ")
#define MSG_VTRAV_MIN                       _UxGT("Vελάχ. μετατόπιση")
#define MSG_ACCELERATION                    MSG_ACC
#define MSG_AMAX                            _UxGT("Aμεγ ")
#define MSG_A_RETRACT                       _UxGT("Α-ανάσυ�?ση")
#define MSG_A_TRAVEL                        _UxGT("Α-μετατόπιση")
#define MSG_STEPS_PER_MM                    _UxGT("Bήματα ανά μμ")
#define MSG_XSTEPS                          _UxGT("Bήματα X ανά μμ")
#define MSG_YSTEPS                          _UxGT("Bήματα Υ ανά μμ")
#define MSG_ZSTEPS                          _UxGT("Bήματα Ζ ανά μμ")
#define MSG_ESTEPS                          _UxGT("Bήματα Ε ανά μμ")
#define MSG_E1STEPS                         _UxGT("Bήματα Ε1 ανά μμ")
#define MSG_E2STEPS                         _UxGT("Bήματα Ε2 ανά μμ")
#define MSG_E3STEPS                         _UxGT("Bήματα Ε3 ανά μμ")
#define MSG_E4STEPS                         _UxGT("Bήματα Ε4 ανά μμ")
#define MSG_E5STEPS                         _UxGT("Bήματα Ε5 ανά μμ")
#define MSG_TEMPERATURE                     _UxGT("Θε�?μοκ�?ασία")
#define MSG_MOTION                          _UxGT("Κίνηση")
#define MSG_FILAMENT                        _UxGT("�?ήμα")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("Ε σε μμ3")
#define MSG_FILAMENT_DIAM                   _UxGT("Διάμετ�?ος νήματος")
#define MSG_CONTRAST                        _UxGT("Κοντ�?άστ LCD")
#define MSG_STORE_EEPROM                    _UxGT("Αποθήκευση")
#define MSG_LOAD_EEPROM                     _UxGT("Φό�?τωση")
#define MSG_RESTORE_FAILSAFE                _UxGT("Επαναφο�?ά ασφαλο�?ς αντιγ�?άφου")
#define MSG_REFRESH                         _UxGT("Ανανέωση")
#define MSG_WATCH                           _UxGT("Οθόνη πλη�?οφό�?ησης")
#define MSG_PREPARE                         _UxGT("Π�?οετοιμασία")
#define MSG_TUNE                            _UxGT("Συντονισμός")
#define MSG_PAUSE_PRINT                     _UxGT("Πα�?ση εκτ�?πωσης")
#define MSG_RESUME_PRINT                    _UxGT("Συνέχιση εκτ�?πωσης")
#define MSG_STOP_PRINT                      _UxGT("Διακοπή εκτ�?πωσης")
#define MSG_CARD_MENU                       _UxGT("Εκτ�?πωση από SD")
#define MSG_NO_CARD                         _UxGT("Δεν β�?έθηκε SD")
#define MSG_DWELL                           _UxGT("Αναστολή λειτου�?γίας...")
#define MSG_USERWAIT                        _UxGT("Αναμονή για χ�?ήστη…")
#define MSG_RESUMING                        _UxGT("Συνεχίζεται η εκτ�?πωση")
#define MSG_PRINT_ABORTED                   _UxGT("Διακόπτεται η εκτ�?πωση")
#define MSG_NO_MOVE                         _UxGT("Καμία κίνηση.")
#define MSG_KILLED                          _UxGT("ΤΕΡΜΑΤΙΣΜΟΣ. ")
#define MSG_STOPPED                         _UxGT("ΔΙΑΚΟΠΗ. ")
#define MSG_CONTROL_RETRACT                 _UxGT("Ανάσυ�?ση μμ")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Εναλλαγή ανάσυ�?σης μμ")
#define MSG_CONTROL_RETRACTF                _UxGT("Ανάσυ�?ση V")
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Μεταπήδηση μμ")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("S UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("UnRet  V")
#define MSG_AUTORETRACT                     _UxGT("Αυτόματη ανάσυ�?ση")
#define MSG_FILAMENTCHANGE                  _UxGT("Αλλαγή νήματος")
#define MSG_INIT_SDCARD                     _UxGT("Π�?οετοιμασία κά�?τας SD")
#define MSG_CNG_SDCARD                      _UxGT("Αλλαγή κά�?τας SD")
#define MSG_ZPROBE_OUT                      _UxGT("Διε�?ε�?νηση Z εκτός κλίνης")
#define MSG_YX_UNHOMED                      _UxGT("Επαναφο�?ά Χ/Υ π�?ιν από Ζ")
#define MSG_XYZ_UNHOMED                     _UxGT("Επαναφο�?ά ΧΥΖ π�?ώτα")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Μετατόπιση Ζ")
#define MSG_BABYSTEP_X                      _UxGT("Μικ�?ό βήμα Χ")
#define MSG_BABYSTEP_Y                      _UxGT("Μικ�?ό βήμα Υ")
#define MSG_BABYSTEP_Z                      _UxGT("Μικ�?ό βήμα Ζ")
#define MSG_ENDSTOP_ABORT                   _UxGT("Ματαίωση endstop ")
#define MSG_HEATING_FAILED_LCD              _UxGT("Ανεπιτυχής θέ�?μανση")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("Λάθος: ΠΛΕΟ�?ΑΖΟΥΣΑ ΘΕΡΜΟΤΗΤΑ")
#define MSG_THERMAL_RUNAWAY                 _UxGT("ΔΙΑΦΥΓΗ ΘΕΡΜΟΤΗΤΑΣ")
#define MSG_ERR_MAXTEMP                     _UxGT("Λάθος: ΜΕΓΙΣΤΗ ΘΕΡΜΟΤΗΤΑ")
#define MSG_ERR_MINTEMP                     _UxGT("Λάθος: ΕΛΑΧΙΣΤΗ ΘΕΡΜΟΤΗΤΑ")
#define MSG_ERR_MAXTEMP_BED                 _UxGT("Λάθος: ΜΕΓΙΣΤΗ ΘΕΡΜΟΤΗΤΑ ΚΛΙ�?ΗΣ")
#define MSG_ERR_MINTEMP_BED                 _UxGT("Λάθος: ΕΛΑΧΙΣΤΗ ΘΕΡΜΟΤΗΤΑ ΚΛΙ�?ΗΣ")
#define MSG_HEATING                         _UxGT("Θε�?μαίνεται…")
#define MSG_HEATING_COMPLETE                _UxGT("Η θέ�?μανση ολοκλη�?ώθηκε.")
#define MSG_BED_HEATING                     _UxGT("Θέ�?μανση κλίνης.")
#define MSG_BED_DONE                        _UxGT("Η κλίνη ολοκλη�?ώθηκε.")
#define MSG_DELTA_CALIBRATE                 _UxGT("Βαθμονόμηση Delta")
#define MSG_DELTA_CALIBRATE_X               _UxGT("Βαθμονόμηση X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Βαθμονόμηση Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Βαθμονόμηση Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Βαθμονόμηση κέντ�?ου")

#endif // LANGUAGE_EL_GR_H
