class CfgPatches
{
	class USP_GPNVG18_TI
	{
		units[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"USP_Gear_NVG",
			"ace_nightvision"
		};
		author="kilodot";
	};
};

class CfgWeapons
{
	class NVGoggles;
	class USP_GPNVG18 : NVGoggles
	{
		ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=4;
		modelOptics="";
	};
	class USP_GPNVG18_TAN : NVGoggles
	{
		ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=4;
		modelOptics="";
	};

	// Black, Only Thermal Enabled
	class USP_GPNVG18_TIO_0 : USP_GPNVG18
	{
		displayName="[USP] L3 GPNVG-18 TI Only (0)";
		author="UnderSiege Productions, kilodot";
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"TI"
		};
	};
	class USP_GPNVG18_TIO_1 : USP_GPNVG18
	{
		displayName="[USP] L3 GPNVG-18 TI Only (1)";
		author="UnderSiege Productions, kilodot";
		/* ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=4;
		modelOptics=""; */
		thermalMode[]={1};
		visionMode[]=
		{
			"Normal",
			"TI"
		};
	};

	// Tan, Only Thermal Enabled
	class USP_GPNVG18_TAN_TIO_0 : USP_GPNVG18_TAN
	{
		displayName="[USP] L3 GPNVG-18 TAN TI Only (0)";
		author="UnderSiege Productions, kilodot";
		/* ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=4;
		modelOptics=""; */
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"TI"
		};
	};
	class USP_GPNVG18_TAN_TIO_1 : USP_GPNVG18_TAN
	{
		displayName="[USP] L3 GPNVG-18 TAN TI Only (1)";
		author="UnderSiege Productions, kilodot";
		/* ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=4;
		modelOptics=""; */
		thermalMode[]={1};
		visionMode[]=
		{
			"Normal",
			"TI"
		};
	};

	// Black, NV and Thermal Enabled
	class USP_GPNVG18_TI_0 : USP_GPNVG18
	{
		displayName="[USP] L3 GPNVG-18 TI (0)";
		author="UnderSiege Productions, kilodot";
		/* ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=4;
		modelOptics=""; */
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class USP_GPNVG18_TI_1 : USP_GPNVG18
	{
		displayName="[USP] L3 GPNVG-18 TI (1)";
		author="UnderSiege Productions, kilodot";
		/* ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=4;
		modelOptics=""; */
		thermalMode[]={1};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};

	// Tan, NV and Thermal Enabled
	class USP_GPNVG18_TAN_TI_0 : USP_GPNVG18_TAN
	{
		displayName="[USP] L3 GPNVG-18 TAN TI (0)";
		author="UnderSiege Productions, kilodot";
		/* ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=4;
		modelOptics=""; */
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class USP_GPNVG18_TAN_TI_1 : USP_GPNVG18_TAN
	{
		displayName="[USP] L3 GPNVG-18 TAN TI (1)";
		author="UnderSiege Productions, kilodot";
		/* ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=4;
		modelOptics=""; */
		thermalMode[]={1};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};

	/*--------------------PVS-31--------------------*/

	class USP_PVS31: NVGoggles
	{		
		ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=4;
		modelOptics="";
	};
	class USP_PVS31_COMPACT: NVGoggles
	{		
		ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=4;
		modelOptics="";
	};
	class USP_PVS31_HIGH: NVGoggles
	{		
		ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=4;
		modelOptics="";
	};
	class USP_PVS31_LOW: NVGoggles
	{		
		ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=4;
		modelOptics="";
	};

	//Standard, Only Thermal Enabled
	class USP_PVS31_TIO_0: USP_PVS31
	{
		displayName="[USP] L3 PVS31 TI Only (0)";
		author="UnderSiege Productions, kilodot";
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"TI"
		};
	};
	class USP_PVS31_TIO_1: USP_PVS31
	{
		displayName="[USP] L3 PVS31 TI Only (1)";
		author="UnderSiege Productions, kilodot";
		thermalMode[]={1};
		visionMode[]=
		{
			"Normal",
			"TI"
		};
	};

	// Compact, Only Thermal Enabled
	class USP_PVS31_COMPACT_TIO_0: USP_PVS31_COMPACT
	{
		displayName="[USP] L3 PVS31 Compact TI Only (0)";
		author="UnderSiege Productions, kilodot";
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"TI"
		};
	};
	class USP_PVS31_COMPACT_TIO_1: USP_PVS31_COMPACT
	{
		displayName="[USP] L3 PVS31 Compact TI Only (1)";
		author="UnderSiege Productions, kilodot";
		thermalMode[]={1};
		visionMode[]=
		{
			"Normal",
			"TI"
		};
	};

	// High, Only Thermal Enabled
	class USP_PVS31_HIGH_TIO_0: USP_PVS31_HIGH
	{
		displayName="[USP] L3 PVS31 High TI Only (0)";
		author="UnderSiege Productions, kilodot";
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"TI"
		};
	};
	class USP_PVS31_HIGH_TIO_1: USP_PVS31_HIGH
	{
		displayName="[USP] L3 PVS31 High TI Only (1)";
		author="UnderSiege Productions, kilodot";
		thermalMode[]={1};
		visionMode[]=
		{
			"Normal",
			"TI"
		};
	};

	// LOW, Only Thermal Enabled
	class USP_PVS31_LOW_TIO_0: USP_PVS31_LOW
	{
		displayName="[USP] L3 PVS31 Low TI Only (0)";
		author="UnderSiege Productions, kilodot";
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"TI"
		};
	};
	class USP_PVS31_LOW_TIO_1: USP_PVS31_LOW
	{
		displayName="[USP] L3 PVS31 Low TI Only (1)";
		author="UnderSiege Productions, kilodot";
		thermalMode[]={1};
		visionMode[]=
		{
			"Normal",
			"TI"
		};
	};

	//Standard, NV and Thermal Enabled
	class USP_PVS31_TI_0: USP_PVS31
	{
		displayName="[USP] L3 PVS31 TI (0)";
		author="UnderSiege Productions, kilodot";
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class USP_PVS31_TI_1: USP_PVS31
	{
		displayName="[USP] L3 PVS31 TI (1)";
		author="UnderSiege Productions, kilodot";
		thermalMode[]={1};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};

	// Compact, NV and Thermal Enabled
	class USP_PVS31_COMPACT_TI_0: USP_PVS31_COMPACT
	{
		displayName="[USP] L3 PVS31 Compact TI (0)";
		author="UnderSiege Productions, kilodot";
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class USP_PVS31_COMPACT_TI_1: USP_PVS31_COMPACT
	{
		displayName="[USP] L3 PVS31 Compact TI (1)";
		author="UnderSiege Productions, kilodot";
		thermalMode[]={1};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};

	// High, NV and Thermal Enabled
	class USP_PVS31_HIGH_TI_0: USP_PVS31_HIGH
	{
		displayName="[USP] L3 PVS31 High TI (0)";
		author="UnderSiege Productions, kilodot";
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class USP_PVS31_HIGH_TI_1: USP_PVS31_HIGH
	{
		displayName="[USP] L3 PVS31 High TI (1)";
		author="UnderSiege Productions, kilodot";
		thermalMode[]={1};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};

	// LOW, NV and Thermal Enabled
	class USP_PVS31_LOW_TI_0: USP_PVS31_LOW
	{
		displayName="[USP] L3 PVS31 Low TI (0)";
		author="UnderSiege Productions, kilodot";
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class USP_PVS31_LOW_TI_1: USP_PVS31_LOW
	{
		displayName="[USP] L3 PVS31 Low TI (1)";
		author="UnderSiege Productions, kilodot";
		thermalMode[]={1};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
};
