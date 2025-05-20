class CfgGroups {
	class WEST {
	name = "BLUFOR";
		side = 1;
		class KAR_FIN_FACTION {
			name = "Finnish Defence Forces";
		////INFANTRY///
			class KAR_FDF_C_GROUPS {
				name = "Jaegers (Conscripts)";
				class KAR_FDF_C_S_2AT {
						faction = "KAR_FIN_FACTION";
						name = "Section (2x LAT)";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FDF_INF_C";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_SL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_AT";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_MEDIC";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_MG";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
						class Unit4 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_AT";
							rank = "CORPORAL";
							position[] = {-10,-10,0};
						};
						class Unit5 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_HAT";
							rank = "PRIVATE";
							position[] = {15,-15,0};
						};
						class Unit6 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_MK";
							rank = "CORPORAL";
							position[] = {-15,-15,0};
						};
						class Unit7 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_ENG";
							rank = "PRIVATE";
							position[] = {20,-20,0};
						};
				};
				class KAR_FDF_C_S_SNI {
						faction = "KAR_FIN_FACTION";
						name = "Section (Sniper)";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FDF_INF_C";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_SL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_AT";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_MEDIC";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_MG";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
						class Unit4 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_SNI";
							rank = "CORPORAL";
							position[] = {-10,-10,0};
						};
						class Unit5 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_HAT";
							rank = "PRIVATE";
							position[] = {15,-15,0};
						};
						class Unit6 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_MK";
							rank = "CORPORAL";
							position[] = {-15,-15,0};
						};
						class Unit7 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_ENG";
							rank = "PRIVATE";
							position[] = {20,-20,0};
						};
				};
				class KAR_FDF_C_S_2MG {
						faction = "KAR_FIN_FACTION";
						name = "Section (2xMG)";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FIN_INF_C";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_SL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_AT";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_MEDIC";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_MG";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
						class Unit4 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_MG";
							rank = "CORPORAL";
							position[] = {-10,-10,0};
						};
						class Unit5 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_HAT";
							rank = "PRIVATE";
							position[] = {15,-15,0};
						};
						class Unit6 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_MK";
							rank = "CORPORAL";
							position[] = {-15,-15,0};
						};
						class Unit7 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_ENG";
							rank = "PRIVATE";
							position[] = {20,-20,0};
						};
				};
				class KAR_FDF_C_T_AT {
						faction = "KAR_FIN_FACTION";
						name = "Fireteam (AT)";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FIN_INF_C";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_SL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_MEDIC";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_HAT";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
				};
				class KAR_FDF_C_T_MG {
						faction = "KAR_FIN_FACTION";
						name = "Fireteam (MG)";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FIN_INF_C";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_SL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_MG";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_MEDIC";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_MG";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
				};
				class KAR_FDF_C_T_SNI {
						faction = "KAR_FIN_FACTION";
						name = "Fireteam (SNI)";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FIN_INF_C";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_SL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_MK";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_MEDIC";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_RIF_C_SNI";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
				};
				class KAR_FDF_C_ST_AT {
					faction = "KAR_FIN_FACTION";
					name = "Team (AT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FIN_INF_C";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_HAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class KAR_FDF_C_ST_MG {
					faction = "KAR_FIN_FACTION";
					name = "Team (MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FIN_INF_C";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class KAR_FDF_C_ST_SNI {
					faction = "KAR_FIN_FACTION";
					name = "Team (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FIN_INF_C";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_SNI";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class KAR_FDF_S_GROUPS {
				name = "Jaegers";
				class KAR_FDF_S_S_2AT {
						faction = "KAR_FIN_FACTION";
						name = "Section (2x LAT)";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FDF_INF_S";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_SL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_AT";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_MEDIC";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_MG";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
						class Unit4 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_AT";
							rank = "CORPORAL";
							position[] = {-10,-10,0};
						};
						class Unit5 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_HAT";
							rank = "PRIVATE";
							position[] = {15,-15,0};
						};
						class Unit6 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_MK";
							rank = "CORPORAL";
							position[] = {-15,-15,0};
						};
						class Unit7 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_ENG";
							rank = "PRIVATE";
							position[] = {20,-20,0};
						};
				};
				class KAR_FDF_S_S_SNI {
						faction = "KAR_FIN_FACTION";
						name = "Section (Sniper)";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FDF_INF_S";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_SL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_AT";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_MEDIC";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_MG";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
						class Unit4 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_SNI";
							rank = "CORPORAL";
							position[] = {-10,-10,0};
						};
						class Unit5 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_HAT";
							rank = "PRIVATE";
							position[] = {15,-15,0};
						};
						class Unit6 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_MK";
							rank = "CORPORAL";
							position[] = {-15,-15,0};
						};
						class Unit7 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_ENG";
							rank = "PRIVATE";
							position[] = {20,-20,0};
						};
				};
				class KAR_FDF_S_S_2MG {
						faction = "KAR_FIN_FACTION";
						name = "Section (2xMG)";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FIN_INF_S";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_SL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_AT";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_MEDIC";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_MG";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
						class Unit4 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_MG";
							rank = "CORPORAL";
							position[] = {-10,-10,0};
						};
						class Unit5 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_HAT";
							rank = "PRIVATE";
							position[] = {15,-15,0};
						};
						class Unit6 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_MK";
							rank = "CORPORAL";
							position[] = {-15,-15,0};
						};
						class Unit7 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_ENG";
							rank = "PRIVATE";
							position[] = {20,-20,0};
						};
				};
				class KAR_FDF_S_T_AT {
						faction = "KAR_FIN_FACTION";
						name = "Fireteam (AT)";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FIN_INF_S";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_SL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_MEDIC";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_HAT";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
				};
				class KAR_FDF_S_T_MG {
						faction = "KAR_FIN_FACTION";
						name = "Fireteam (MG)";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FIN_INF_S";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_SL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_MG";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_MEDIC";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_MG";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
				};
				class KAR_FDF_S_T_SNI {
						faction = "KAR_FIN_FACTION";
						name = "Fireteam (SNI)";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FIN_INF_S";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_SL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_MK";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_MEDIC";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_RIF_S_SNI";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
				};
				class KAR_FDF_S_ST_AT {
					faction = "KAR_FIN_FACTION";
					name = "Team (AT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FIN_INF_S";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_HAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class KAR_FDF_S_ST_MG {
					faction = "KAR_FIN_FACTION";
					name = "Team (MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FIN_INF_S";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class KAR_FDF_S_ST_SNI {
					faction = "KAR_FIN_FACTION";
					name = "Team (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FIN_INF_S";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_SNI";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class KAR_FDF_SOF_GROUPS {
				name = "Special Jaegers";
				class KAR_FDF_SOF_S_2AT {
						faction = "KAR_FIN_FACTION";
						name = "Section (2x LAT)";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FDF_INF_SOF";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_SL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_AT";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_MEDIC";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_MG";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
						class Unit4 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_AT";
							rank = "CORPORAL";
							position[] = {-10,-10,0};
						};
						class Unit5 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_HAT";
							rank = "PRIVATE";
							position[] = {15,-15,0};
						};
						class Unit6 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_MK";
							rank = "CORPORAL";
							position[] = {-15,-15,0};
						};
						class Unit7 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_ENG";
							rank = "PRIVATE";
							position[] = {20,-20,0};
						};
				};
				class KAR_FDF_SOF_S_SNI {
						faction = "KAR_FIN_FACTION";
						name = "Section (Sniper)";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FDF_INF_SOF";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_SL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_AT";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_MEDIC";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_MG";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
						class Unit4 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_SNI";
							rank = "CORPORAL";
							position[] = {-10,-10,0};
						};
						class Unit5 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_HAT";
							rank = "PRIVATE";
							position[] = {15,-15,0};
						};
						class Unit6 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_MK";
							rank = "CORPORAL";
							position[] = {-15,-15,0};
						};
						class Unit7 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_ENG";
							rank = "PRIVATE";
							position[] = {20,-20,0};
						};
				};
				class KAR_FDF_SOF_S_2MG {
						faction = "KAR_FIN_FACTION";
						name = "Section (2xMG)";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FIN_INF_SOF";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_SL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_AT";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_MEDIC";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_MG";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
						class Unit4 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_MG";
							rank = "CORPORAL";
							position[] = {-10,-10,0};
						};
						class Unit5 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_HAT";
							rank = "PRIVATE";
							position[] = {15,-15,0};
						};
						class Unit6 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_MK";
							rank = "CORPORAL";
							position[] = {-15,-15,0};
						};
						class Unit7 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_ENG";
							rank = "PRIVATE";
							position[] = {20,-20,0};
						};
				};
				class KAR_FDF_SOF_T_AT {
						faction = "KAR_FIN_FACTION";
						name = "Fireteam (AT)";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FIN_INF_SOF";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_SL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_MEDIC";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_HAT";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
				};
				class KAR_FDF_SOF_T_MG {
						faction = "KAR_FIN_FACTION";
						name = "Fireteam (MG)";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FIN_INF_SOF";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_SL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_MG";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_MEDIC";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_MG";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
				};
				class KAR_FDF_SOF_T_SNI {
						faction = "KAR_FIN_FACTION";
						name = "Fireteam (SNI)";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FIN_INF_SOF";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_SL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_MK";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_MEDIC";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_RIF_SOF_SNI";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
				};
				class KAR_FDF_SOF_ST_AT {
					faction = "KAR_FIN_FACTION";
					name = "Team (AT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FIN_INF_SOF";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_RIF_SOF_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_RIF_SOF_HAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class KAR_FDF_SOF_ST_MG {
					faction = "KAR_FIN_FACTION";
					name = "Team (MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FIN_INF_SOF";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_RIF_SOF_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_RIF_SOF_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class KAR_FDF_SOF_ST_SNI {
					faction = "KAR_FIN_FACTION";
					name = "Team (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FIN_INF_SOF";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_RIF_SOF_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_RIF_SOF_SNI";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class KAR_FDF_SIS_GROUPS {
				name = "Sissi (Recons)";
				side = 1;
				class KAR_FDF_SIS_S {
						faction = "KAR_FIN_FACTION";
						name = "Sissi Group";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FDF_SIS";
						icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_SIS_TL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_SIS_RIF";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_SIS_MED";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_SIS_RIF";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
						class Unit4 {
							side = 1;
							vehicle = "KAR_FDF_SIS_AT";
							rank = "CORPORAL";
							position[] = {-10,-10,0};
						};
						class Unit5 {
							side = 1;
							vehicle = "KAR_FDF_SIS_RIF";
							rank = "PRIVATE";
							position[] = {15,-15,0};
						};
						class Unit6 {
							side = 1;
							vehicle = "KAR_FDF_SIS_MK";
							rank = "CORPORAL";
							position[] = {-15,-15,0};
						};
						class Unit7 {
							side = 1;
							vehicle = "KAR_FDF_SIS_AT";
							rank = "PRIVATE";
							position[] = {20,-20,0};
						};
						class Unit8 {
							side = 1;
							vehicle = "KAR_FDF_SIS_AT";
							rank = "PRIVATE";
							position[] = {-20,-20,0};
						};
						class Unit9 {
							side = 1;
							vehicle = "KAR_FDF_SIS_RIF";
							rank = "PRIVATE";
							position[] = {-25,-25,0};
						};
						class Unit10 {
							side = 1;
							vehicle = "KAR_FDF_SIS_RIF";
							rank = "PRIVATE";
							position[] = {25,-25,0};
						};
						class Unit11 {
							side = 1;
							vehicle = "KAR_FDF_SIS_RIF";
							rank = "PRIVATE";
							position[] = {-30,-30,0};
						};
						class Unit12 {
							side = 1;
							vehicle = "KAR_FDF_SIS_AT";
							rank = "PRIVATE";
							position[] = {-30,-30,0};
						};
				};
				class KAR_FDF_SIS_AT_T {
						faction = "KAR_FIN_FACTION";
						name = "Fireteam (AT)";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FDF_SIS";
						icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_SIS_TL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_SIS_RIF";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_SIS_MED";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_SIS_AT";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
				};
				class KAR_FDF_SIS_SNI_T {
						faction = "KAR_FIN_FACTION";
						name = "Fireteam (Marksman)";
						side = 1;
						scope = 2;
						scopeCurator = 2;
						editorCategory = "KAR_FDF_TOP";
						editorSubcategory = "KAR_FDF_SIS";
						icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
						class Unit0 {
							side = 1;
							vehicle = "KAR_FDF_SIS_TL";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1 {
							side = 1;
							vehicle = "KAR_FDF_SIS_MK";
							rank = "PRIVATE";
							position[] = {5,-5,0};
						};
						class Unit2 {
							side = 1;
							vehicle = "KAR_FDF_SIS_MED";
							rank = "CORPORAL";
							position[] = {-5,-5,0};
						};
						class Unit3 {
							side = 1;
							vehicle = "KAR_FDF_SIS_AT";
							rank = "PRIVATE";
							position[] = {10,-10,0};
						};
				};
				class KAR_FDF_SIS_AT_D {
					faction = "KAR_FIN_FACTION";
					name = "Team (AT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_SIS";
						icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_SIS_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_SIS_AT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class KAR_FDF_SIS_RIF_D {
					faction = "KAR_FIN_FACTION";
					name = "Team (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_SIS";
						icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_SIS_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_SIS_MK";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
		///TANKS////
			class KAR_FDF_TANK_GROUPS {
				name = "Tanks";
				side = 1;
				class KAR_FDF_TANK_PLT {
					name = "T-72 Platoon";
					faction = "KAR_FIN_FACTION";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_T72";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_T72";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2 {
						side = 1;
						vehicle = "KAR_FDF_T72";
						rank = "SERGEANT";
						position[] = {-20.1,-30,3};
					};
					class Unit3 {
						side = 1;
						vehicle = "KAR_FDF_T72";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class KAR_FDF_TANK_SEC {
					name = "T-72 Section";
					side = 1;
					scope = 2;
					scopecurator = 2;
					faction = "KAR_FIN_FACTION";
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_T72";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_T72";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
			};
		////MECHANIZED////
			class KAR_FDF_MECH_GROUPS {
				name = "Mechanized Infantry";
				side = 1;
				class KAR_FDF_BTR60_PLT {
					name = "Mech. Conscript Squad (BTR-60)";
					faction = "KAR_FIN_FACTION";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_AT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "KAR_FDF_BTR";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit4 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_MG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_ENG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_MG";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_AT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_MK";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class KAR_FDF_BMP2_PLT {
					name = "Mech. Conscript Squad (BMP-2)";
					faction = "KAR_FIN_FACTION";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_SL";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_AT";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "KAR_FDF_BMP2MD";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
					class Unit4 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_MG";
						rank = "PRIVATE";
						position[] = {-10,-11,0};
					};
					class Unit5 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_ENG";
						rank = "PRIVATE";
						position[] = {31,-39,0};
					};
					class Unit6 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_MG";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C";
						rank = "PRIVATE";
						position[] = {37,-44,0};
					};
					class Unit8 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_MK";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class KAR_FDF_BMP2_S_PLT {
					name = "Mech. Rifle Squad (BMP-2)";
					faction = "KAR_FIN_FACTION";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_SL";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_AT";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "KAR_FDF_BMP2MD";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
					class Unit4 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_MG";
						rank = "PRIVATE";
						position[] = {-10,-11,0};
					};
					class Unit5 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_ENG";
						rank = "PRIVATE";
						position[] = {31,-39,0};
					};
					class Unit6 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_MG";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S";
						rank = "PRIVATE";
						position[] = {37,-44,0};
					};
					class Unit8 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_MK";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
			};
		/////MOTORIZED////
			class KAR_FDF_MOT_GROUPS {
				name = "Motorized Infantry";
				side = 1;
				class KAR_FDF_MOT_C_AT_TEAM {
					name = "Mot. Conscript AT Team";
					faction = "KAR_FIN_FACTION";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_SL";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "KAR_FDF_SISU";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit4 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_HAT";
						rank = "PRIVATE";
						position[] = {-10,-11,0};
					};
					class Unit5 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_AT";
						rank = "PRIVATE";
						position[] = {-20,-21,0};
					};
					class Unit6 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_MEDIC";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
				};
				class KAR_FDF_MOT_C_TEAM {
					name = "Mot. Conscript Section";
					faction = "KAR_FIN_FACTION";
					side = 1;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_SL";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "KAR_FDF_SISU";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit4 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_AT";
						rank = "PRIVATE";
						position[] = {-10,-11,0};
					};
					class Unit5 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_MEDIC";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_ENG";
						rank = "PRIVATE";
						position[] = {-20,-15,0};
					};
					class Unit8 {
						side = 1;
						vehicle = "KAR_FDF_RIF_C_MK";
						rank = "PRIVATE";
						position[] = {20,-15,0};
					};
				};
				class KAR_FDF_MOT_S_AT_TEAM {
					name = "Motorized AT Team";
					faction = "KAR_FIN_FACTION";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_SL";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "KAR_FDF_SISU";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit4 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_HAT";
						rank = "PRIVATE";
						position[] = {-10,-11,0};
					};
					class Unit5 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_AT";
						rank = "PRIVATE";
						position[] = {-20,-21,0};
					};
					class Unit6 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_MEDIC";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
				};
				class KAR_FDF_MOT_S_AA_TEAM {
					name = "Motorized AA Team";
					faction = "KAR_FIN_FACTION";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_SL";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "KAR_FDF_SISU";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit4 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_AA";
						rank = "PRIVATE";
						position[] = {-10,-11,0};
					};
					class Unit5 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_AA";
						rank = "PRIVATE";
						position[] = {-20,-21,0};
					};
					class Unit6 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_MEDIC";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
				};
				class KAR_FDF_MOT_S_TEAM {
					name = "Motorized Infantry Section";
					faction = "KAR_FIN_FACTION";
					side = 1;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_SL";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "KAR_FDF_SISU";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit4 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_HAT";
						rank = "PRIVATE";
						position[] = {-10,-11,0};
					};
					class Unit5 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_MEDIC";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_ENG";
						rank = "PRIVATE";
						position[] = {-20,-15,0};
					};
					class Unit8 {
						side = 1;
						vehicle = "KAR_FDF_RIF_S_MK";
						rank = "PRIVATE";
						position[] = {20,-15,0};
					};
				};
				class KAR_FDF_RGM2_SOF_TEAM {
					name = "Special Jaeger Mot. Team (HM)";
					faction = "KAR_FIN_FACTION";
					side = 1;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_MRAPs";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_RIF_SOF_SL";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "KAR_FDF_RG32_M2";
						rank = "CORPORAL";							
						position[] = {0,0,0};
					};
					class Unit4 {
						side = 1;
						vehicle = "KAR_FDF_RIF_SOF";
						rank = "CORPORAL";
						position[] = {-10,-11,0};
					};
				};
				class KAR_FDF_RGKRKK_SOF_TEAM {
					name = "Special Jaeger Team";
					faction = "KAR_FIN_FACTION";
					side = 1;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_RIF_SOF_SL";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "KAR_FDF_RG32_KRKK";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit4 {
						side = 1;
						vehicle = "KAR_FDF_RIF_SOF_ENG";
						rank = "CORPORAL";
						position[] = {-10,-11,0};
					};
				};
			};
		////ARTILLERY///
			class KAR_FDF_ART_GROUPS {
				name = "Artillery";
				side = 1;
				class KAR_FDF_K9_P {
					name = "K9 Platoon";
					faction = "KAR_FIN_FACTION";
					side = 1;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_ART";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_K9";
						rank = "SERGEANT";
						position[] = {-15,-15,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_K9";
						rank = "CORPORAL";							
						position[] = {0,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "KAR_FDF_K9";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "KAR_FDF_K9";
						rank = "CORPORAL";
						position[] = {30,-15,0};
					};
				};
				class KAR_FDF_K9_S {
					name = "K9 Section";
					faction = "KAR_FIN_FACTION";
					side = 1;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_ART";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_K9";
						rank = "SERGEANT";
						position[] = {-15,-15,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_K9";
						rank = "CORPORAL";							
						position[] = {0,0,0};
					};
				};
				class KAR_FDF_PSH74_P {
					name = "122 PSH 74 Platoon";
					faction = "KAR_FIN_FACTION";
					side = 1;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_ART";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_122PSH";
						rank = "SERGEANT";
						position[] = {-15,-15,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_122PSH";
						rank = "CORPORAL";							
						position[] = {0,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "KAR_FDF_122PSH";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "KAR_FDF_122PSH";
						rank = "CORPORAL";
						position[] = {30,-15,0};
					};
				};
				class KAR_FDF_PSH74_S {
					name = "122 PSH74 Section";
					faction = "KAR_FIN_FACTION";
					side = 1;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_ART";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_122PSH";
						rank = "SERGEANT";
						position[] = {-15,-15,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_122PSH";
						rank = "CORPORAL";							
						position[] = {0,0,0};
					};
				};
				class KAR_FDF_RKH76_P {
					name = "122 RKH 76 Platoon";
					faction = "KAR_FIN_FACTION";
					side = 1;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_ART";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_BM21";
						rank = "SERGEANT";
						position[] = {-15,-15,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_BM21";
						rank = "CORPORAL";							
						position[] = {0,0,0};
					};
					class Unit2 {
						side = 1;
						vehicle = "KAR_FDF_BM21";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit3 {
						side = 1;
						vehicle = "KAR_FDF_BM21";
						rank = "CORPORAL";
						position[] = {30,-15,0};
					};
				};
				class KAR_FDF_RKH76_S {
					name = "122 RKH 76 Section";
					faction = "KAR_FIN_FACTION";
					side = 1;
					editorCategory = "KAR_FDF_TOP";
					editorSubcategory = "KAR_FDF_ART";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0 {
						side = 1;
						vehicle = "KAR_FDF_BM21";
						rank = "SERGEANT";
						position[] = {-15,-15,0};
					};
					class Unit1 {
						side = 1;
						vehicle = "KAR_FDF_BM21";
						rank = "CORPORAL";							
						position[] = {0,0,0};
					};
				};
			};
		};
	};
};