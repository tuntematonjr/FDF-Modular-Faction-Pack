class CfgGroups
{
	class WEST
	{
	name = "BLUFOR";
		side = 1;
		class KAR_FIN_FACTION
		{
			name = "Finnish Defence Forces";
			class KAR_FDF_MOT_GROUPS
			{
				name = "Motorized Infantry";
				side = 1;
				class KAR_FDF_PASI_PLT
				{
					name = "Mot. Conscript Squad (Pasi)";
					faction = "KAR_FIN_FACTION";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_C_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_C";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_C_AT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "KAR_FDF_PGB203";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_C_MG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_C_ENG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_C_MG";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "KKAR_FDF_RIF_C_AT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_C_MK";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class KAR_FDF_XA360_PLT
				{
					name = "Mot. Conscript Squad (XA-360)";
					faction = "KAR_FIN_FACTION";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_S_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_S";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_S_AT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "KAR_FDF_PGB360";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_S_MG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_S_ENG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_S_MG";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "KKAR_FDF_RIF_S_AT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_S_MK";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		////ARTILLERY///
			class KAR_FDF_ART_GROUPS
			{
				name = "Artillery";
				side = 1;
				class KAR_FDF_CUP_RKH06_P
				{
					name = "298 RSRAKH 06 Platoon";
					faction = "KAR_FIN_FACTION";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_ART";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0
					{
						side = 1;
						vehicle = "KAR_FDF_CUP_RSRAKH";
						rank = "SERGEANT";
						position[] = {-15,-15,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "KAR_FDF_CUP_RSRAKH";
						rank = "CORPORAL";							
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "KAR_FDF_CUP_RSRAKH";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "KAR_FDF_CUP_RSRAKH";
						rank = "CORPORAL";
						position[] = {30,-15,0};
					};
				};
				class KAR_FDF_CUP_RKH06_S
				{
					name = "298 RSRAKH 06 Section";
					faction = "KAR_FIN_FACTION";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_ART";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0
					{
						side = 1;
						vehicle = "KAR_FDF_CUP_RSRAKH";
						rank = "SERGEANT";
						position[] = {-15,-15,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "KAR_FDF_CUP_RSRAKH";
						rank = "CORPORAL";							
						position[] = {0,0,0};
					};
				};
				class KAR_FDF_CUP_RKH86_P
				{
					name = "122 RSRAKH 89 Platoon";
					faction = "KAR_FIN_FACTION";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_ART";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0
					{
						side = 1;
						vehicle = "KAR_FDF_CUP_RSRAKH89";
						rank = "SERGEANT";
						position[] = {-15,-15,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "KAR_FDF_CUP_RSRAKH89";
						rank = "CORPORAL";							
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "KAR_FDF_CUP_RSRAKH89";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "KAR_FDF_CUP_RSRAKH89";
						rank = "CORPORAL";
						position[] = {30,-15,0};
					};
				};
				class KAR_FDF_CUP_RKH86_S
				{
					name = "122 RSRAKH 89 Section";
					faction = "KAR_FIN_FACTION";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_ART";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0
					{
						side = 1;
						vehicle = "KAR_FDF_CUP_RSRAKH89";
						rank = "SERGEANT";
						position[] = {-15,-15,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "KAR_FDF_CUP_RSRAKH89";
						rank = "CORPORAL";							
						position[] = {0,0,0};
					};
				};
			};
		};
	};
};