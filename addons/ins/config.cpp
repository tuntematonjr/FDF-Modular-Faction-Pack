#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
		units[]={};
		weapons[]={};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[]={"kar_fdf_main","KAR_FDF_Faction"};
        authors[] = {"Kartsa"};
        VERSION_CONFIG;
    };
};


class CfgUnitInsignia {
	class FDF_KAR_I_KRH {
		displayName = "Mortar";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\KRH_INS_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
    class FDF_KAR_I_HUO {
		displayName = "Mechanic";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\HUO_INS_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
    class FDF_KAR_I_ART {
		displayName = "Artillery Observer";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\ART_INS_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	}; 
    class FDF_KAR_I_COA {
		displayName = "Coastal Jaeger";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\COAST_INS_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
    class FDF_KAR_I_CRIMPB {
		displayName = "MP Crisis Management (BROWN)";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\CRIMPB_INS_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	}; 
    class FDF_KAR_I_CRIMP {
		displayName = "MP Crisis Management (BLACK)";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\CRIMP_INS_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
    class FDF_KAR_I_EOD {
		displayName = "EOD";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\EOD_INS_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
    class FDF_KAR_I_IEDD {
		displayName = "IEDD";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\IEDD_INS_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
    class FDF_KAR_I_FL {
		displayName = "Insignia Patch";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\FL_INS_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
    class FDF_KAR_I_JAEGER {
		displayName = "Jaeger";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\JAA_INS_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	}; 
    class FDF_KAR_I_MEDIC {
		displayName = "Medic";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\MED_INS_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
    class FDF_KAR_I_SISSI {
		displayName = "Sissi";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\SISSI_INS_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
    class FDF_KAR_I_PIONEER {
		displayName = "Pioneer";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\PIO_INS_ca.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class FDF_KAR_I_VIESTI {
		displayName = "Signals";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\VIE_INS_CA.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class FDF_KAR_I_NBC {
		displayName = "NBC";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\NBC_INS_CA.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class FDF_KAR_I_TYK {
		displayName = "Artillery";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\TYK_INS_CA.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class FDF_KAR_I_PST {
		displayName = "Anti-Tank";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\PST_INS_CA.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class FDF_KAR_I_PST_J {
		displayName = "AT Jaeger";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\PSTJ_INS_CA.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class FDF_KAR_I_PSVM {
		displayName = "Tanker";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\PSVM_INS_CA.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class FDF_KAR_I_VENE {
		displayName = "Boatman";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\VENE_INS_CA.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class FDF_KAR_I_TUTKA {
		displayName = "Radarman";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\TUTKA_INS_CA.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class FDF_KAR_I_DOG {
		displayName = "Dog Handler";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\DOG_INS_CA.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class FDF_KAR_I_SPOL {
		displayName = "Military Police";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\SPOL_INS_CA.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class FDF_KAR_I_AAOHJ {
		displayName = "AA-Missile";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\AAOHJ_INS_CA.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class FDF_KAR_I_RPIO {
		displayName = "EOD Pioneer";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\RPIO_INS_CA.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class FDF_KAR_I_AAM {
		displayName = "Anti-Air";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\AAM_INS_CA.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class FDF_KAR_I_FLAG {
		displayName = "Finnish Flag";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\FLAG_INS_CA.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class FDF_KAR_I_SP {
		displayName = "Military Police (Patch)";
		author = "Kartsa";
		texture = "\KAR_FDF_INS\data\SP_INS_CA.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
};