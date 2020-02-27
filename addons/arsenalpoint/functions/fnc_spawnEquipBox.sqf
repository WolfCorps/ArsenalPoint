params ["_boxname", "_empty"];

private _box = createVehicle [_boxname, getPos player vectorAdd [0,0,-50], [], 0, "CAN_COLLIDE"];
_box setPosASL (getPosASL player vectorAdd (vectorDir player));
 
 
if (_empty) then {
    clearWeaponCargoGlobal _box;
    clearItemCargoGlobal _box;
    clearMagazineCargoGlobal _box;
};

_box setVariable ["ace_dragging_ignoreWeightCarry", true, true];
_box setVariable ["ace_dragging_ignoreWeightDrag", true, true];

[player, _box] call ace_dragging_fnc_carryObject;