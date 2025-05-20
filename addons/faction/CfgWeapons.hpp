class CfgWeapons
{
	class KAR_RIFLE_RK62M2;
	class KAR_FDF_MK: KAR_RIFLE_RK62M2
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_ACOG";
			};
		};
	};
	class KAR_FDF_MK_02: KAR_RIFLE_RK62M2
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_ACOG_RMR";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_wmx_bk";
			};
		};
	};
	class KAR_FDF_M62M2: KAR_RIFLE_RK62M2
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_T1_low";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_wmx_bk";
			};
		};
	};
	///TRG-10 Config///
	class rhs_weap_XM2010;
	class KAR_FDF_TRG10: rhs_weap_XM2010
	{
		author = "Kartsa";
		displayname ="SAKO TRG-10";
		scope = 2;
		baseWeapon = "KAR_FDF_TRG10";
		magazines[] = {"rhs_5Rnd_338lapua_t5000"};
		magazineWell[] = {"CBA_338LM_T5000"};
		descriptionShort = "Sniper Rifle<br />Caliber: .338 Lapua";
	};
	class KAR_FDF_SNI: KAR_FDF_TRG10
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_M8541";
			};
			class LinkedItemsUnder
			{
				slot = "UnderbarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
		};
	};
	class KAR_FDF_SNI_SOF: KAR_FDF_TRG10
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_M8541_mrds";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq15side_bk";
			};
			class LinkedItemsMuzzle 
			{
				slot = "MuzzleSlot";
				item = "rhsusf_acc_M2010S_wd";
			};
			class LinkedItemsUnder
			{
				slot = "UnderbarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
		};
	};
	class KAR_PKM;
	class KAR_PKM_S: KAR_PKM
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "KAR_FDF_LRCO_blk_F";
			};
		};
	};
	class KAR_FDF_SCAR_L_G;
	class KAR_FDF_SOF_SCAR: KAR_FDF_SCAR_L_G
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_T1_high";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq15_bk";
			};
			class LinkedItemsMuzzle 
			{
				slot = "MuzzleSlot";
				item = "rhsusf_acc_rotex5_grey";
			};
		};
	};
	class KAR_FDF_SOF_MK: KAR_FDF_SOF_SCAR
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_ACOG_RMR";
			};
			class LinkedItemsUnder
			{
				slot = "UnderbarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq15_bk";
			};
			class LinkedItemsMuzzle 
			{
				slot = "MuzzleSlot";
				item = "rhsusf_acc_rotex5_grey";
			};
		};
	};
	class rhs_weap_minimi_para_railed;
	class KAR_FDF_MG_SOF: rhs_weap_minimi_para_railed
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "KAR_FDF_LRCO_blk_F";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq15side_bk";
			};
			class LinkedItemsMuzzle 
			{
				slot = "MuzzleSlot";
				item = "rhsusf_acc_rotex5_grey";
			};
			class LinkedItemsUnder
			{
				slot = "UnderbarrelSlot";
				item = "rhsusf_acc_grip4_bipod";
			};
		};
	};
};