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
 * [cursorObject] call wolf_logistik_fnc_addLogistikActions
 *
 * Public: No
 */

params ["_target"];

[

    [
        [QGVAR(openLogistikMenu), "Öffne Logistikmenü", "", {_target call wolf_logistics_ui_fnc_openLogistikMenuOnBox;}, {true}, {}] call ace_interact_menu_fnc_createAction,
        [],
        _target
    ]

]



					
					class ACE_SpawnEqBox {
						displayName = "Spawn Equipment box";
						condition = "";
						statement = "['Box_NATO_Equip_F', true] call wolf_arsenal_point_fnc_spawnEquipBox;";
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
					};
					class ACE_SpawnMedBox {
						displayName = "Spawn Medic box";
						condition = "";
						statement = "['ACE_medicalSupplyCrate_advanced', false] call wolf_arsenal_point_fnc_spawnEquipBox;";
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
					};
					class SpawnPlasticBig : ACE_SpawnMedBox {
						displayName = "Spawn Plastik Groß";
						statement = "['Land_PlasticCase_01_large_F', false] call wolf_arsenal_point_fnc_spawnEquipBox;";
					};
					class SpawnPlasticMedium : ACE_SpawnMedBox {
						displayName = "Spawn Plastik Mittel";
						statement = "['Land_PlasticCase_01_medium_F', false] call wolf_arsenal_point_fnc_spawnEquipBox;";
					};
					class SpawnPlasticSmall : ACE_SpawnMedBox {
						displayName = "Spawn Plastik Klein";
						statement = "['Land_PlasticCase_01_small_F', false] call wolf_arsenal_point_fnc_spawnEquipBox;";
					};

