class CfgGroups
{
	class WEST
	{
	name = "BLUFOR";
		side = 1;
		class KAR_FIN_FACTION
		{
			name = "Finnish Defence Forces";
		///TANKS////
			class KAR_FDF_TANK_GROUPS
			{
				name = "Tanks";
				side = 1;
				class KAR_FDF_LEO2A4_PLT
				{
					name = "Leopard 2A4 Platoon";
					faction = "KAR_FIN_FACTION";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_LEO2A4";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_LEO2A4";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_LEO2A4";
						rank = "SERGEANT";
						position[] = {-20.1,-30,3};
					};
					class Unit3
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_LEO2A4";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class KAR_FDF_LEO2A4_SEC
				{
					name = "Leopard 2A4 Section";
					side = 1;
					scope = 2;
					scopecurator = 2;
					faction = "KAR_FIN_FACTION";
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

					class Unit0
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_LEO2A4";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_LEO2A4";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
				class KAR_FDF_LEO2A6_PLT
				{
					name = "Leopard 2A6 Platoon";
					faction = "KAR_FIN_FACTION";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_LEO2A6";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_LEO2A6";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_LEO2A6";
						rank = "SERGEANT";
						position[] = {-20.1,-30,3};
					};
					class Unit3
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_LEO2A6";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class KAR_FDF_LEO2A6_SEC
				{
					name = "Leopard 2A6 Section";
					side = 1;
					scope = 2;
					scopecurator = 2;
					faction = "KAR_FIN_FACTION";
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

					class Unit0
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_LEO2A6";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_LEO2A6";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
			};
		////MECHANIZED////
			class KAR_FDF_MECH_GROUPS
			{
				name = "Mechanized Infantry";
				side = 1;
				class KAR_FDF_FFP_BMP2_PLT
				{
					name = "Mech. Conscript Squad (BMP-2)";
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
						position[] = {5,-5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_C_AT";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_C";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_BMP2";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_C_MG";
						rank = "PRIVATE";
						position[] = {-10,-11,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_C_ENG";
						rank = "PRIVATE";
						position[] = {31,-39,0};
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
						vehicle = "KAR_FDF_RIF_C";
						rank = "PRIVATE";
						position[] = {37,-44,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_C_MK";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class KAR_FDF_FFP_BMP2_S_PLT
				{
					name = "Mech. Rifle Squad (BMP-2)";
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
						position[] = {5,-5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_S";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_S_AT";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_BMP2";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_S_MG";
						rank = "PRIVATE";
						position[] = {-10,-11,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_S_ENG";
						rank = "PRIVATE";
						position[] = {31,-39,0};
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
						vehicle = "KAR_FDF_RIF_S_";
						rank = "PRIVATE";
						position[] = {37,-44,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_S_MK";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class KAR_FDF_FFP_BMP2_AT_PLT
				{
					name = "Mech. Conscript Squad (BMP-2 ATGM)";
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
						position[] = {5,-5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_C_AT";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_C";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_BMP2_ATGM";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_C_MG";
						rank = "PRIVATE";
						position[] = {-10,-11,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_C_ENG";
						rank = "PRIVATE";
						position[] = {31,-39,0};
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
						vehicle = "KAR_FDF_RIF_C";
						rank = "PRIVATE";
						position[] = {37,-44,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_C_MK";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class KAR_FDF_FFP_BMP2_AT_S_PLT
				{
					name = "Mech. Rifle Squad (BMP-2 ATGM)";
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
						position[] = {5,-5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_S";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_S_AT";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_BMP2_ATGM";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_S_MG";
						rank = "PRIVATE";
						position[] = {-10,-11,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_S_ENG";
						rank = "PRIVATE";
						position[] = {31,-39,0};
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
						vehicle = "KAR_FDF_RIF_S_";
						rank = "PRIVATE";
						position[] = {37,-44,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "KAR_FDF_RIF_S_MK";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
			};
		/////MOTORIZED////
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
						vehicle = "KAR_FDF_RIF_C_AT";
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
				class KAR_FDF_RKH06_P
				{
					name = "298 RSRAKH 06 Platoon";
					faction = "KAR_FIN_FACTION";
					side = 1;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_ART";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_RSRAKH06";
						rank = "SERGEANT";
						position[] = {-15,-15,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_RSRAKH06";
						rank = "CORPORAL";							
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_RSRAKH06";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_RSRAKH06";
						rank = "CORPORAL";
						position[] = {30,-15,0};
					};
				};
				class KAR_FDF_RKH06_S
				{
					name = "298 RSRAKH 06 Section";
					faction = "KAR_FIN_FACTION";
					side = 1;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_ART";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_RSRAKH06";
						rank = "SERGEANT";
						position[] = {-15,-15,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "KAR_FDF_FFP_RSRAKH06";
						rank = "CORPORAL";							
						position[] = {0,0,0};
					};
				};
			};
		};
	};
};