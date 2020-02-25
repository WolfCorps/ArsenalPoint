#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {"wolf_arsenal_point","wolf_arsenal_point2","wolf_foxenal_point","wolf_foxenal_point_sit","wolf_foxenal_point_small","wolf_foxenal_point_sit_small","wolf_suitcase_arsenal","wolf_trophy_arsenal","wolf_ammobox_arsenal","wolf_fdr_arsenal","wolf_bacon_arsenal","wolf_microwave_arsenal","wolf_pctower_arsenal","wolf_helipadlight_arsenal"};
        weapons[] = {};
        requiredAddons[] = {"rhs_main","ace_common","A3_Data_F_Tank_Loadorder","cba_main"};
        requiredVersion = REQUIRED_VERSION;
        author = "";
        authors[] = {"Wolf Corps"};
        authorUrl = "https://wolfcorps.de";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

class CfgEditorCategories {
    class wolfCorps {
        displayName = "Wolf Corps";
    };
};
class CfgVehicleClasses {
    class Arsenal {
        displayName = "Arsenal";
    };
};
class CfgEditorSubcategories {
    class Arsenal {
        displayName = "Arsenal";
    };
};

class CfgVehicles {
    class Thing;
    class wolf_arsenal_point: Thing {
        _generalMacro = "wolf_arsenal_point";
        scope = 2;
        scopeCurator = 2;
        displayName = "Arsenal Point";
        model = "\z\wolf\addons\arsenalpoint\arsenalpoint.p3d";
        editorCategory = "wolfCorps";
        editorSubcategory = "Arsenal";
        vehicleClass = "Arsenal";
        armor = 5000;
        maximumLoad = 9999;
        supplyRadius = 1.4;
        transportMaxBackpacks = 1;
        transportMaxMagazines = 20000;
        transportMaxWeapons = 5000;

        class ACE_Actions {
            class ACE_MainActions {
                displayName = "$STR_ACE_Interaction_MainAction";
                distance = 5;
                condition = "true";
                statement = "";
                icon = "\a3\ui_f\data\IGUI\Cfg\Actions\eject_ca.paa";
                class ACE_OpenArsenal {
                    displayName = "Arsenal";
                    condition = "";
                    statement = "[player, player, true] call ace_arsenal_fnc_openBox;";
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                };
                class Wolf_Logistik {
                    displayName = "Wolf Logistik";
                    condition = "";
                    statement = "";
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    
                    insertChildren = QUOTE(_this call DFUNC(addLogistikActions));
                };
            };
        };
        class UserActions {
            class arsenal {
                displayName = "Arsenal";
                priority = 3;
                radius = 20;
                position = "camera";
                showWindow = 0;
                hideOnUse = 1;
                onlyForPlayer = 1;
                condition = "true";
                statement = "[player, player, true] call ace_arsenal_fnc_openBox;";
            };
        };
    };
    class wolf_arsenal_point2: wolf_arsenal_point {
        displayName = "Arsenal Point CUP";
        model = "\z\wolf\addons\arsenalpoint\arsenalpoint2_cup.p3d";
    };
    class wolf_foxenal_point: wolf_arsenal_point {
        displayName = "Foxenal Point";
        model = "\z\wolf\addons\arsenalpoint\fox.p3d";
    };
    class wolf_foxenal_point_sit: wolf_arsenal_point {
        displayName = "Foxenal Point Sitting";
        model = "\z\wolf\addons\arsenalpoint\fox_sit.p3d";
    };
    class wolf_foxenal_point_small: wolf_arsenal_point {
        displayName = "Foxenal Point Small";
        model = "\z\wolf\addons\arsenalpoint\fox_small.p3d";
    };
    class wolf_foxenal_point_sit_small: wolf_arsenal_point {
        displayName = "Foxenal Point Small Sitting";
        model = "\z\wolf\addons\arsenalpoint\fox_sit_small.p3d";
    };
    class Land_Suitcase_F;
    class wolf_suitcase_arsenal: Land_Suitcase_F {
        displayName = "Arsenal Suitcase";
        editorCategory = "wolfCorps";
        editorSubcategory = "Arsenal";
        vehicleClass = "Arsenal";
        maximumLoad = 9999;
        supplyRadius = 1.4;
        transportMaxBackpacks = 1;
        transportMaxMagazines = 20000;
        transportMaxWeapons = 5000;
        class ACE_Actions {
            class ACE_MainActions {
                displayName = "$STR_ACE_Interaction_MainAction";
                distance = 5;
                condition = "true";
                statement = "";
                icon = "\a3\ui_f\data\IGUI\Cfg\Actions\eject_ca.paa";
                class ACE_OpenArsenal {
                    displayName = "Arsenal";
                    condition = "";
                    statement = "[player, player, true] call ace_arsenal_fnc_openBox;";
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                };
                class Wolf_Logistik {
                    displayName = "Wolf Logistik";
                    condition = "";
                    statement = "";
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    
                    insertChildren = QUOTE(_this call DFUNC(addLogistikActions));
                };
            };
        };
    };
    class Land_Trophy_01_gold_F;
    class wolf_trophy_arsenal: Land_Trophy_01_gold_F {
        displayName = "Arsenal Trophy";
        editorCategory = "wolfCorps";
        editorSubcategory = "Arsenal";
        vehicleClass = "Arsenal";
        maximumLoad = 9999;
        supplyRadius = 1.4;
        transportMaxBackpacks = 1;
        transportMaxMagazines = 20000;
        transportMaxWeapons = 5000;
        class ACE_Actions {
            class ACE_MainActions {
                displayName = "$STR_ACE_Interaction_MainAction";
                distance = 5;
                condition = "true";
                statement = "";
                icon = "\a3\ui_f\data\IGUI\Cfg\Actions\eject_ca.paa";
                class ACE_OpenArsenal {
                    displayName = "Arsenal";
                    condition = "";
                    statement = "[player, player, true] call ace_arsenal_fnc_openBox;";
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                };
                class Wolf_Logistik {
                    displayName = "Wolf Logistik";
                    condition = "";
                    statement = "";
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    
                    insertChildren = QUOTE(_this call DFUNC(addLogistikActions));
                };
            };
        };
    };
    class Land_Ammobox_rounds_F;
    class wolf_ammobox_arsenal: Land_Ammobox_rounds_F {
        displayName = "Arsenal Ammobox";
        editorCategory = "wolfCorps";
        editorSubcategory = "Arsenal";
        vehicleClass = "Arsenal";
        maximumLoad = 9999;
        supplyRadius = 1.4;
        transportMaxBackpacks = 1;
        transportMaxMagazines = 20000;
        transportMaxWeapons = 5000;
        class ACE_Actions {
            class ACE_MainActions {
                displayName = "$STR_ACE_Interaction_MainAction";
                distance = 5;
                condition = "true";
                statement = "";
                icon = "\a3\ui_f\data\IGUI\Cfg\Actions\eject_ca.paa";
                class ACE_OpenArsenal {
                    displayName = "Arsenal";
                    condition = "";
                    statement = "[player, player, true] call ace_arsenal_fnc_openBox;";
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                };
                class Wolf_Logistik {
                    displayName = "Wolf Logistik";
                    condition = "";
                    statement = "";
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    
                    insertChildren = QUOTE(_this call DFUNC(addLogistikActions));
                };
            };
        };
    };
    class rhs_flightrecorder_assembled;
    class wolf_fdr_arsenal: rhs_flightrecorder_assembled {
        displayName = "Arsenal FDR";
        editorCategory = "wolfCorps";
        editorSubcategory = "Arsenal";
        vehicleClass = "Arsenal";
        maximumLoad = 9999;
        supplyRadius = 1.4;
        transportMaxBackpacks = 1;
        transportMaxMagazines = 20000;
        transportMaxWeapons = 5000;
        class ACE_Actions {
            class ACE_MainActions {
                displayName = "$STR_ACE_Interaction_MainAction";
                distance = 5;
                condition = "true";
                statement = "";
                icon = "\a3\ui_f\data\IGUI\Cfg\Actions\eject_ca.paa";
                class ACE_OpenArsenal {
                    displayName = "Arsenal";
                    condition = "";
                    statement = "[player, player, true] call ace_arsenal_fnc_openBox;";
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                };
                class Wolf_Logistik {
                    displayName = "Wolf Logistik";
                    condition = "";
                    statement = "";
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    
                    insertChildren = QUOTE(_this call DFUNC(addLogistikActions));
                };
            };
        };
    };
    class Land_TacticalBacon_F;
    class wolf_bacon_arsenal: Land_TacticalBacon_F {
        displayName = "Arsenal Bacon";
        editorCategory = "wolfCorps";
        editorSubcategory = "Arsenal";
        vehicleClass = "Arsenal";
        maximumLoad = 9999;
        supplyRadius = 1.4;
        transportMaxBackpacks = 1;
        transportMaxMagazines = 20000;
        transportMaxWeapons = 5000;
        class ACE_Actions {
            class ACE_MainActions {
                displayName = "$STR_ACE_Interaction_MainAction";
                distance = 5;
                condition = "true";
                statement = "";
                icon = "\a3\ui_f\data\IGUI\Cfg\Actions\eject_ca.paa";
                class ACE_OpenArsenal {
                    displayName = "Arsenal";
                    condition = "";
                    statement = "[player, player, true] call ace_arsenal_fnc_openBox;";
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                };
                class Wolf_Logistik {
                    displayName = "Wolf Logistik";
                    condition = "";
                    statement = "";
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    
                    insertChildren = QUOTE(_this call DFUNC(addLogistikActions));
                };
            };
        };
    };
    class Land_Microwave_01_F;
    class wolf_microwave_arsenal: Land_Microwave_01_F {
        displayName = "Arsenal Microwave";
        editorCategory = "wolfCorps";
        editorSubcategory = "Arsenal";
        vehicleClass = "Arsenal";
        maximumLoad = 9999;
        supplyRadius = 1.4;
        transportMaxBackpacks = 1;
        transportMaxMagazines = 20000;
        transportMaxWeapons = 5000;
        class ACE_Actions {
            class ACE_MainActions {
                displayName = "$STR_ACE_Interaction_MainAction";
                distance = 5;
                condition = "true";
                statement = "";
                icon = "\a3\ui_f\data\IGUI\Cfg\Actions\eject_ca.paa";
                class ACE_OpenArsenal {
                    displayName = "Arsenal";
                    condition = "";
                    statement = "[player, player, true] call ace_arsenal_fnc_openBox;";
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                };
                class Wolf_Logistik {
                    displayName = "Wolf Logistik";
                    condition = "";
                    statement = "";
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    
                    insertChildren = QUOTE(_this call DFUNC(addLogistikActions));
                };
            };
        };
    };
    class Land_PCSet_01_case_F;
    class wolf_pctower_arsenal: Land_PCSet_01_case_F {
        displayName = "Arsenal PC Tower";
        editorCategory = "wolfCorps";
        editorSubcategory = "Arsenal";
        vehicleClass = "Arsenal";
        maximumLoad = 9999;
        supplyRadius = 1.4;
        transportMaxBackpacks = 1;
        transportMaxMagazines = 20000;
        transportMaxWeapons = 5000;
        class ACE_Actions {
            class ACE_MainActions {
                displayName = "$STR_ACE_Interaction_MainAction";
                distance = 5;
                condition = "true";
                statement = "";
                icon = "\a3\ui_f\data\IGUI\Cfg\Actions\eject_ca.paa";
                class ACE_OpenArsenal {
                    displayName = "Arsenal";
                    condition = "";
                    statement = "[player, player, true] call ace_arsenal_fnc_openBox;";
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                };
                class Wolf_Logistik {
                    displayName = "Wolf Logistik";
                    condition = "";
                    statement = "";
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    
                    insertChildren = QUOTE(_this call DFUNC(addLogistikActions));
                };
            };
        };
    };
    class Land_PortableHelipadLight_01_F;
    class wolf_helipadlight_arsenal: Land_PortableHelipadLight_01_F {
        displayName = "Arsenal Helipad Light";
        editorCategory = "wolfCorps";
        editorSubcategory = "Arsenal";
        vehicleClass = "Arsenal";
        maximumLoad = 9999;
        supplyRadius = 1.4;
        transportMaxBackpacks = 1;
        transportMaxMagazines = 20000;
        transportMaxWeapons = 5000;

        class ACE_Actions {
            class ACE_MainActions {
                displayName = "$STR_ACE_Interaction_MainAction";
                distance = 5;
                condition = "true";
                statement = "";
                icon = "\a3\ui_f\data\IGUI\Cfg\Actions\eject_ca.paa";
                class ACE_OpenArsenal {
                    displayName = "Arsenal";
                    condition = "";
                    statement = "[player, player, true] call ace_arsenal_fnc_openBox;";
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                };
                class Wolf_Logistik {
                    displayName = "Wolf Logistik";
                    condition = "";
                    statement = "";
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    
                    insertChildren = QUOTE(_this call DFUNC(addLogistikActions));
                };
            };
        };
    };
};
