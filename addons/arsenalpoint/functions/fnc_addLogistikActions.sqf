#include "script_component.hpp"
/*
 * Author: Dedmen
 * Returns logistik child actions
 *
 * Arguments:
 * 0: Target <OBJECT>
 *
 * Return Value:
 * Child actions <ARRAY>
 *
 * Example:
 * [cursorObject] call wolf_arsenalpoint_fnc_addLogistikActions
 *
 * Public: No
 */

params ["_target"];


#define SPAWNBOX(text, classname) \
    [ \
        [QGVAR(__COUNTER__), text, "", {[classname, true] call wolf_arsenalpoint_fnc_spawnEquipBox;}, {true}, {}] call ace_interact_menu_fnc_createAction, [], _target \
    ]

#define SPAWNBOX_SEL1TEX(text, classname, texture) \
    [ \
        [QGVAR(openLogistikMenu), text, "", {[classname, true, [1, texture]] call wolf_arsenalpoint_fnc_spawnEquipBox;}, {true}, {}] call ace_interact_menu_fnc_createAction, [], _target \
    ]

[
    [
        [QGVAR(openLogistikMenu), "Öffne Logistikmenü", "", {_target call wolf_logistics_ui_fnc_openLogistikMenuOnBox;}, {true}, {}] call ace_interact_menu_fnc_createAction,
        [],
        _target
    ],

    SPAWNBOX("Spawn Medicbox", 'ACE_medicalSupplyCrate_advanced'),
    SPAWNBOX("Spawn Holzkiste", 'Land_WoodenCrate_01_F'),
    [
        [QGVAR(__COUNTER__), "Spawn Graue Metallbox...", "", {}, {true}, {
            params ["_target"];
            [
                SPAWNBOX("Groß", 'Land_MetalCase_01_large_F'),
                SPAWNBOX("Mittel", 'Land_MetalCase_01_medium_F'),
                SPAWNBOX("Klein", 'Land_MetalCase_01_small_F')
            ]
        }] call ace_interact_menu_fnc_createAction, [], _target
    ],
    [
        [QGVAR(__COUNTER__), "Spawn Metallbox...", "", {}, {true}, {
            params ["_target"];
            [
                SPAWNBOX("Weiß", 'Box_IDAP_Equip_F'),
                SPAWNBOX("Hellgrün", 'Box_CSAT_Equip_F'),
                SPAWNBOX("Nato", 'Box_NATO_Equip_F'),
                SPAWNBOX("Schwarz", 'Box_EAF_Equip_F'),
                SPAWNBOX("Dunkelblau", 'Box_GEN_Equip_F')
            ]
        }] call ace_interact_menu_fnc_createAction, [], _target
    ],
    [
        [QGVAR(__COUNTER__), "Spawn Plastik...", "", {}, {true}, {
            params ["_target"];
            [
                [
                    [QGVAR(__COUNTER__), "Groß...", "", {}, {true}, {
                        params ["_target"];
                        [
                            SPAWNBOX("Standard", 'Land_PlasticCase_01_large_F'),
                            SPAWNBOX("Standard CBRN", 'Land_PlasticCase_01_large_CBRN_F'),
                            SPAWNBOX("Schwarz", 'Land_PlasticCase_01_large_black_F'),
                            SPAWNBOX("Schwarz CBRN", 'Land_PlasticCase_01_large_black_CBRN_F'),
                            SPAWNBOX("Oliv", 'Land_PlasticCase_01_large_olive_F'),
                            SPAWNBOX("Oliv CBRN", 'Land_PlasticCase_01_large_olive_CBRN_F'),
                            SPAWNBOX("Grau", 'Land_PlasticCase_01_large_gray_F'),
                            SPAWNBOX("Weiß IDAP", 'Land_PlasticCase_01_large_idap_F')
                        ]
                    }] call ace_interact_menu_fnc_createAction, [], _target
                ],
                [
                    [QGVAR(__COUNTER__), "Mittel...", "", {}, {true}, {
                        params ["_target"];
                        [
                            SPAWNBOX("Standard", 'Land_PlasticCase_01_medium_F'),
                            SPAWNBOX("Standard CBRN", 'Land_PlasticCase_01_medium_CBRN_F'),
                            SPAWNBOX("Schwarz", 'Land_PlasticCase_01_medium_black_F'),
                            SPAWNBOX("Schwarz CBRN", 'Land_PlasticCase_01_medium_black_CBRN_F'),
                            SPAWNBOX("Oliv", 'Land_PlasticCase_01_medium_olive_F'),
                            SPAWNBOX("Oliv CBRN", 'Land_PlasticCase_01_medium_olive_CBRN_F'),
                            SPAWNBOX("Grau", 'Land_PlasticCase_01_medium_gray_F'),
                            SPAWNBOX("Weiß IDAP", 'Land_PlasticCase_01_medium_idap_F')
                        ]
                    }] call ace_interact_menu_fnc_createAction, [], _target
                ],
                [
                    [QGVAR(__COUNTER__), "Klein...", "", {}, {true}, {
                        params ["_target"];
                        [
                            SPAWNBOX("Standard", 'Land_PlasticCase_01_small_F'),
                            SPAWNBOX("Standard CBRN", 'Land_PlasticCase_01_small_CBRN_F'),
                            SPAWNBOX("Schwarz", 'Land_PlasticCase_01_small_black_F'),
                            SPAWNBOX("Schwarz CBRN", 'Land_PlasticCase_01_small_black_CBRN_F'),
                            SPAWNBOX("Oliv", 'Land_PlasticCase_01_small_olive_F'),
                            SPAWNBOX("Oliv CBRN", 'Land_PlasticCase_01_small_olive_CBRN_F'),
                            SPAWNBOX("Grau", 'Land_PlasticCase_01_small_gray_F'),
                            SPAWNBOX("Weiß IDAP", 'Land_PlasticCase_01_small_idap_F')
                        ]
                    }] call ace_interact_menu_fnc_createAction, [], _target
                ],
                [
                    [QGVAR(__COUNTER__), "Ammo...", "", {}, {true}, {
                        params ["_target"];
                        [
                            SPAWNBOX("Weiß", 'Box_IND_Ammo_F'),
                            SPAWNBOX("Braun", 'Box_T_East_Ammo_F'),
                            SPAWNBOX("Hellgrün", 'Box_East_Ammo_F'),
                            SPAWNBOX("Schwarz", 'Box_EAF_Ammo_F'),
                            SPAWNBOX("NATO", 'Box_NATO_Ammo_F')
                        ]
                    }] call ace_interact_menu_fnc_createAction, [], _target
                ],
                [
                    [QGVAR(__COUNTER__), "Weapon...", "", {}, {true}, {
                        params ["_target"];
                        [
                            SPAWNBOX("Weiß", 'Box_IND_Wps_F'),
                            SPAWNBOX("Braun", 'Box_T_East_Wps_F'),
                            SPAWNBOX("Hellgrün", 'Box_East_Wps_F'),
                            SPAWNBOX("Schwarz", 'Box_EAF_Wps_F'),
                            SPAWNBOX("NATO Dschungel-Grün", 'Box_T_NATO_Wps_F'),
                            SPAWNBOX("NATO", 'Box_NATO_Wps_F')
                        ]
                    }] call ace_interact_menu_fnc_createAction, [], _target
                ],
                [
                    [QGVAR(__COUNTER__), "Launcher...", "", {}, {true}, {
                        params ["_target"];
                        [
                            SPAWNBOX("Weiß", 'Box_IND_WpsLaunch_F'),
                            SPAWNBOX("Hellgrün", 'Box_East_WpsLaunch_F'),
                            SPAWNBOX("Schwarz", 'Box_EAF_WpsLaunch_F'),
                            SPAWNBOX("NATO", 'Box_NATO_WpsLaunch_F')
                        ]
                    }] call ace_interact_menu_fnc_createAction, [], _target
                ]
            ]
        }] call ace_interact_menu_fnc_createAction, [], _target
    ],
    SPAWNBOX("Spawn Transportnetz", 'CargoNet_01_box_F'),
    [
        [QGVAR(__COUNTER__), "Spawn UAV Box...", "", {}, {true}, {
            params ["_target"];
            [
                SPAWNBOX("Schwarz", 'Box_C_UAV_06_F'),
                SPAWNBOX("Medical Gelb", 'Box_C_UAV_06_medical_F'),
                SPAWNBOX("Medical Rot", 'Box_C_IDAP_UAV_06_medical_F'),
                SPAWNBOX("Blau", 'Box_C_UAV_06_Swifd_F'),
                SPAWNBOX("Weiß", 'Box_C_IDAP_UAV_06_F')
            ]
        }] call ace_interact_menu_fnc_createAction, [], _target
    ],
    [
        [QGVAR(__COUNTER__), "Spawn ACE...", "", {}, {true}, {
            params ["_target"];
           [
                SPAWNBOX("Spare Wheel", 'ACE_Wheel'),
                SPAWNBOX("Spare Track", 'ACE_Track'),
                SPAWNBOX("Jerrycan 20L", 'Land_CanisterFuel_F'),
                SPAWNBOX("Jerrycan 20L RHS", 'rhsusf_props_ScepterMFC_OD'),
                SPAWNBOX("Flextank 300L Forest", 'FlexibleTank_01_forest_F'),
                SPAWNBOX("Flextank 300L Sand", 'FlexibleTank_01_sand_F')
           ]
        }] call ace_interact_menu_fnc_createAction, [], _target
    ]
]