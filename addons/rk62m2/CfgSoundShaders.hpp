class CfgSoundShaders {
	class KAR_NIA_Close_Shot_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36\close_1.wss),
				1
			},
			 {
				QPATHTOF(snd\G36\close_2.wss),
				1
			},
			 {
				QPATHTOF(snd\G36\close_3.wss),
				1
			},
			 {
				QPATHTOF(snd\G36\close_4.wss),
				1
			}
		};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[]= { {0,1.5}, {20,0}
		};
	};
	class KAR_NIA_CloseDistance_Shot_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36\close_distance.wss),
				1
			}
		};
		volume="1*(1-interior)";
		range=100;
		rangecurve[]= { {0,0}, {18,1}, {100,0}
		};
	};
	class KAR_NIA_MediumDistance_Shot_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36\medium_distance.wss),
				1
			}
		};
		volume=1;
		range=500;
		rangecurve[]= { {0,0}, {15,0}, {100,1}, {500,0}
		};
	};
	class KAR_NIA_FarDistance_Shot_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36\far_distance.wss),
				1
			}
		};
		volume=1;
		range=2500;
		rangecurve[]= { {0,0}, {100,0}, {500,1.25}, {2500,0}
		};
	};
	class KAR_NIA_Interior_Shot_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36\Close_Interior.wss),
				1
			}
		};
		volume="1.5*interior";
		range=20;
		rangecurve[]= { {0,1.5}, {20,0}
		};
	};
	class KAR_NIA_InteriorDistance_Shot_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36\Close_Distance_Interior.wss),
				1
			}
		};
		volume="1*interior";
		range=100;
		rangecurve[]= { {0,0}, {18,1}, {100,0}
		};
	};
	class KAR_NIA_silencerShot_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36_MLI\G36_MLI_Silenced_Close.wss),
				1
			}
		};
		volume=0.80000001;
		range=50;
		rangeCurve[]= { {0,1}, {50,0}
		};
	};
	class KAR_NIA_silencerShot_mid_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36_MLI\G36_MLI_suppressed_mid.wss),
				1
			}
		};
		volume=1;
		range=250;
		rangeCurve[]= { {0,0.2}, {50,1}, {250,0}
		};
	};
	class KAR_NIA_silencerTailForest_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36_MLI\G36_MLI_Silenced_Tail.wss),
				1
			}
		};
		volume="(1-interior/1.4)*Forest/3";
		range=150;
		rangeCurve[]= { {0,1}, {150,0.30000001}
		};
		limitation=1;
	};
	class KAR_NIA_silencerTailHouses_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36_MLI\G36_MLI_Silenced_Tail.wss),
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]= { {0,1}, {150,0}
		};
		limitation=1;
	};
	class KAR_NIA_silencerTailInterior_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36_MLI\G36_MLI_Silenced_Tail_Indoor.wss),
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]= { {0,1}, {50,0.30000001}, {150,0}
		};
		limitation=1;
	};
	class KAR_NIA_silencerTailMeadows_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36_MLI\G36_MLI_Silenced_Tail.wss),
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]= { {0,1}, {150,0.30000001}
		};
		limitation=1;
	};
	class KAR_NIA_silencerTailTrees_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36_MLI\G36_MLI_Silenced_Tail.wss),
				1
			}
		};
		volume=" (1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]= { {0,1}, {150,0.30000001}
		};
		limitation=1;
	};
	class KAR_NIA_tailInterior_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36_MLI\G36_MLI_indoor.wss),
				1
			}
		};
		volume=" 1.4*((interior)*0.65)";
		range=250;
		rangeCurve[]= { {0,1}, {250,0}
		};
		limitation=1;
	};
	class KAR_NIA_tailInterior_mid_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36_MLI\G36_MLI_indoor_mid.wss),
				1
			}
		};
		volume=" 1.4*((interior)*0.65)";
		rangeCurve[]= { {0,0}, {250,0.40000001}, {320,0}
		};
		range=500;
		limitation=1;
	};
	class KAR_NIA_tailTrees_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36_MLI\G36_MLI_trees.wss),
				1
			}
		};
		volume=" 1.4*((1-interior/1.4)*trees/3)";
		range=250;
		rangeCurve[]= { {0,1}, {250,0}
		};
		limitation=1;
	};
	class KAR_NIA_tailTrees_mid_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36_MLI\G36_MLI_trees_mid.wss),
				1
			}
		};
		volume=" 1.4*((1-interior/1.4)*trees/3)";
		rangeCurve[]= { {0,0}, {250,1}, {2000,1}
		};
		range=2000;
		limitation=1;
	};
	class KAR_NIA_tailForest_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36_MLI\G36_MLI_forest.wss),
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=250;
		rangeCurve[]= { {0,1}, {250,0}
		};
		limitation=1;
	};
	class KAR_NIA_tailForest_mid_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36_MLI\G36_MLI_forest_mid.wss),
				1
			}
		};
		volume=" 1.4*((1-interior/1.4)*Forest/3)";
		rangeCurve[]= { {0,0}, {250,1}, {1800,1}
		};
		range=1800;
		limitation=1;
	};
	class KAR_NIA_tailMeadows_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36_MLI\G36_MLI_meadows.wss),
				1
			}
		};
		volume="1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=250;
		rangeCurve[]= { {0,1}, {250,0}
		};
		limitation=1;
	};
	class KAR_NIA_tailMeadows_mid_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36_MLI\G36_MLI_meadows_mid.wss),
				1
			}
		};
		volume=" 1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[]= { {0,0}, {250,1}, {2000,1}
		};
		range=2000;
		limitation=1;
	};
	class KAR_NIA_tailHouses_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36_MLI\G36_MLI_Urban.wss),
				1
			}
		};
		volume="1.4*((1-interior/1.4)*houses/3)";
		range=250;
		rangeCurve[]= { {0,1}, {250,0}
		};
		limitation=1;
	};
	class KAR_NIA_tailHouses_mid_SoundShader {
		samples[]= {
			 {
				QPATHTOF(snd\G36_MLI\G36_MLI_Urban_mid.wss),
				1
			}
		};
		volume="1.4*((1-interior/1.4)*houses/3)";
		rangeCurve[]= { {0,0}, {250,1}, {2000,1}
		};
		range=2000;
		limitation=1;
	};
};