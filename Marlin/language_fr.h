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
 * French
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_FR_H
#define LANGUAGE_FR_H

#define DISPLAY_CHARSET_ISO10646_1

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" prête.")
#define MSG_BACK                            _UxGT("Retour")
#define MSG_SD_INSERTED                     _UxGT("Carte insérée")
#define MSG_SD_REMOVED                      _UxGT("Carte retirée")
#define MSG_LCD_ENDSTOPS                    _UxGT("Butées") // Max length 8 characters
#define MSG_MAIN                            _UxGT("Menu principal")
#define MSG_AUTOSTART                       _UxGT("Demarrage auto")
#define MSG_DISABLE_STEPPERS                _UxGT("Arrêter moteurs")
#define MSG_DEBUG_MENU                      _UxGT("Menu debug")
#define MSG_PROGRESS_BAR_TEST               _UxGT("Test barre progress.")
#define MSG_AUTO_HOME                       _UxGT("Origine auto.")
#define MSG_AUTO_HOME_X                     _UxGT("Origine X Auto.")
#define MSG_AUTO_HOME_Y                     _UxGT("Origine Y Auto.")
#define MSG_AUTO_HOME_Z                     _UxGT("Origine Z Auto.")
#define MSG_LEVEL_BED_HOMING                _UxGT("Origine XYZ")
#define MSG_LEVEL_BED_WAITING               _UxGT("Clic pour commencer")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Point suivant")
#define MSG_LEVEL_BED_DONE                  _UxGT("Mise à niveau OK!")
#define MSG_Z_FADE_HEIGHT                   _UxGT("Adoucir hauteur")
#define MSG_SET_HOME_OFFSETS                _UxGT("Regl. décal. origine")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Décalages appliqués")
#define MSG_SET_ORIGIN                      _UxGT("Régler origine")
#define MSG_PREHEAT_1                       _UxGT("Préchauffage PLA")
#define MSG_PREHEAT_1_N                     _UxGT("Préchauff. PLA ")
#define MSG_PREHEAT_1_ALL                   _UxGT("Préch. PLA Tout")
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 _UxGT(" fini")
#define MSG_PREHEAT_1_BEDONLY               _UxGT("Préch. PLA lit")
#define MSG_PREHEAT_1_SETTINGS              _UxGT("Regl. prech. PLA")
#define MSG_PREHEAT_2                       _UxGT("Préchauffage ABS")
#define MSG_PREHEAT_2_N                     _UxGT("Préchauff. ABS ")
#define MSG_PREHEAT_2_ALL                   _UxGT("Préch. ABS Tout")
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 _UxGT(" fini")
#define MSG_PREHEAT_2_BEDONLY               _UxGT("Préch. ABS lit")
#define MSG_PREHEAT_2_SETTINGS              _UxGT("Regl. prech. ABS")
#define MSG_COOLDOWN                        _UxGT("Refroidir")
#define MSG_SWITCH_PS_ON                    _UxGT("Allumer alim.")
#define MSG_SWITCH_PS_OFF                   _UxGT("Éteindre alim.")
#define MSG_EXTRUDE                         _UxGT("Éxtrusion")
#define MSG_RETRACT                         _UxGT("Rétraction")
#define MSG_MOVE_AXIS                       _UxGT("Déplacer un axe")
#define MSG_BED_LEVELING                    _UxGT("Règl. Niv. lit")
#define MSG_LEVEL_BED                       _UxGT("Règl. Niv. lit")
#define MSG_EDITING_STOPPED                 _UxGT("Arrêt edit. maillage")
#define MSG_USER_MENU                       _UxGT("Commandes perso")

#define MSG_HALTED                          "IMPR. STOPPEE"
#define MSG_PLEASE_RESET                    "RaZ. SVP"
#define MSG_SHORT_DAY                       "j" // One character only
#define MSG_SHORT_HOUR                      "h" // One character only
#define MSG_SHORT_MINUTE                    "m" // One character only

#define MSG_HEATING                         "En chauffe..."
#define MSG_HEATING_COMPLETE                "Chauffe terminee"
#define MSG_BED_HEATING                     "Plateau en chauffe.."
#define MSG_BED_DONE                        "Chauffe lit terminee"
#define MSG_DELTA_CALIBRATE                 "Calibration Delta"
#define MSG_DELTA_CALIBRATE_X               "Calibrer X"
#define MSG_DELTA_CALIBRATE_Y               "Calibrer Y"
#define MSG_DELTA_CALIBRATE_Z               "Calibrer Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Calibrer centre"

#define MSG_INFO_MENU                       "Infos imprimante"
#define MSG_INFO_PRINTER_MENU               "Infos imprimante"
#define MSG_INFO_STATS_MENU                 "Stats. imprimante"
#define MSG_INFO_BOARD_MENU                 "Infos carte"
#define MSG_INFO_THERMISTOR_MENU            "Thermistors"
#define MSG_INFO_EXTRUDERS                  "Extruders"
#define MSG_INFO_BAUDRATE                   "Baud"
#define MSG_INFO_PROTOCOL                   "Protocole"

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Nbre impressions"
  #define MSG_INFO_COMPLETED_PRINTS         "Terminees"
  #define MSG_INFO_PRINT_TIME               "Tps impr. total"
  #define MSG_INFO_PRINT_LONGEST            "Impr. la + longue"
  #define MSG_INFO_PRINT_FILAMENT           "Total filament"
#else
  #define MSG_INFO_PRINT_COUNT              "Impressions"
  #define MSG_INFO_COMPLETED_PRINTS         "Terminees"
  #define MSG_INFO_PRINT_TIME               "Total"
  #define MSG_INFO_PRINT_LONGEST            "+ long"
  #define MSG_INFO_PRINT_FILAMENT           "Filament"
#endif

#define MSG_INFO_MIN_TEMP                   "Temp Min"
#define MSG_INFO_MAX_TEMP                   "Temp Max"
#define MSG_INFO_PSU                        "Alimentation"
#define MSG_DRIVE_STRENGTH                  "Puiss. moteur "
#define MSG_DAC_PERCENT                     "Driver %"
#define MSG_DAC_EEPROM_WRITE                "DAC EEPROM sauv."

#define MSG_FILAMENT_CHANGE_HEADER          "CHANGER FILAMENT"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "CHANGER OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "+ extrusion"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Reprendre impr."

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Attente Demarrage"
  #define MSG_FILAMENT_CHANGE_INIT_2          "du filament"
  #define MSG_FILAMENT_CHANGE_INIT_3          "changer"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "attente de"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "decharger filament"
  #define MSG_FILAMENT_CHANGE_INSERT_1        "inserer filament"
  #define MSG_FILAMENT_CHANGE_INSERT_2        "et app. bouton"
  #define MSG_FILAMENT_CHANGE_INSERT_3        "pour continuer..."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "attente de"
  #define MSG_FILAMENT_CHANGE_LOAD_2          "charger filament"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "attente de"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "extrusion fil."
  #define MSG_FILAMENT_CHANGE_RESUME_1        "attente impression"
  #define MSG_FILAMENT_CHANGE_RESUME_2        "pour reprendre"
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Patientez..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Ejection..."
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Inserer et click"
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Chargement..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Extrusion..."
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Reprise..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_FR_H
