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

[

    [
        [QGVAR(openLogistikMenu), "Öffne Logistikmenü", "", {_target call wolf_logistics_ui_fnc_openLogistikMenuOnBox;}, {true}, {}] call ace_interact_menu_fnc_createAction,
        [],
        _target
    ],
    [
        [QGVAR(openLogistikMenu), "Spawn Graue Metallbox", "", {['Box_NATO_Equip_F', true] call wolf_arsenal_point_fnc_spawnEquipBox;}, {true}, {}] call ace_interact_menu_fnc_createAction,
        [],
        _target
    ],
    [
        [QGVAR(openLogistikMenu), "Spawn Medicbox", "", {['ACE_medicalSupplyCrate_advanced', true] call wolf_arsenal_point_fnc_spawnEquipBox;}, {true}, {}] call ace_interact_menu_fnc_createAction,
        [],
        _target
    ],
    [
        [QGVAR(openLogistikMenu), "Spawn Plastik Groß", "", {['Land_PlasticCase_01_large_F', true] call wolf_arsenal_point_fnc_spawnEquipBox;}, {true}, {}] call ace_interact_menu_fnc_createAction,
        [],
        _target
    ],
    [
        [QGVAR(openLogistikMenu), "Spawn Plastik Mittel", "", {['Land_PlasticCase_01_medium_F', true] call wolf_arsenal_point_fnc_spawnEquipBox;}, {true}, {}] call ace_interact_menu_fnc_createAction,
        [],
        _target
    ],
    [
        [QGVAR(openLogistikMenu), "Spawn Plastik Klein", "", {['Land_PlasticCase_01_small_F', true] call wolf_arsenal_point_fnc_spawnEquipBox;}, {true}, {}] call ace_interact_menu_fnc_createAction,
        [],
        _target
    ],
]