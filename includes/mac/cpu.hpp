#pragma once

#include <cstdint>

namespace mac {
	using cpu_type_t = int32_t;
	using cpu_subtype_t = int32_t;

	inline constexpr uint32_t CPU_ARCH_MASK	 = 0xff000000;
	inline constexpr uint32_t CPU_ARCH_ABI64 = 0x01000000;

	inline constexpr cpu_type_t CPU_TYPE_ANY = ( ( cpu_type_t )-1 );

	inline constexpr cpu_type_t CPU_TYPE_VAX		  = ( ( cpu_type_t )1 );
	inline constexpr cpu_type_t CPU_TYPE_ROMP		  = ( ( cpu_type_t )2 );
	inline constexpr cpu_type_t CPU_TYPE_NS32032	  = ( ( cpu_type_t )4 );
	inline constexpr cpu_type_t CPU_TYPE_NS32332	  = ( ( cpu_type_t )5 );
	inline constexpr cpu_type_t CPU_TYPE_MC680x0	  = ( ( cpu_type_t )6 );
	inline constexpr cpu_type_t CPU_TYPE_I386		  = ( ( cpu_type_t )7 );
	inline constexpr cpu_type_t CPU_TYPE_X86_64		  = ( ( cpu_type_t )( CPU_TYPE_I386 | CPU_ARCH_ABI64 ) );
	inline constexpr cpu_type_t CPU_TYPE_MIPS		  = ( ( cpu_type_t )8 );
	inline constexpr cpu_type_t CPU_TYPE_NS32532	  = ( ( cpu_type_t )9 );
	inline constexpr cpu_type_t CPU_TYPE_HPPA		  = ( ( cpu_type_t )11 );
	inline constexpr cpu_type_t CPU_TYPE_ARM		  = ( ( cpu_type_t )12 );
	inline constexpr cpu_type_t CPU_TYPE_MC88000	  = ( ( cpu_type_t )13 );
	inline constexpr cpu_type_t CPU_TYPE_SPARC		  = ( ( cpu_type_t )14 );
	inline constexpr cpu_type_t CPU_TYPE_I860		  = ( ( cpu_type_t )15 );
	inline constexpr cpu_type_t CPU_TYPE__I860_LITTLE = ( ( cpu_type_t )16 );
	inline constexpr cpu_type_t CPU_TYPE_RS6000		  = ( ( cpu_type_t )17 );
	inline constexpr cpu_type_t CPU_TYPE_MC98000	  = ( ( cpu_type_t )18 );
	inline constexpr cpu_type_t CPU_TYPE_POWERPC	  = ( ( cpu_type_t )18 );
	inline constexpr cpu_type_t CPU_TYPE_POWERPC64	  = ( ( cpu_type_t )( CPU_TYPE_POWERPC | CPU_ARCH_ABI64 ) );

	inline constexpr uint32_t CPU_SUBTYPE_MASK  = 0xff000000;
	inline constexpr uint32_t CPU_SUBTYPE_LIB64 = 0xff000000;

	inline constexpr cpu_subtype_t CPU_SUBTYPE_MULTIPLE = ( ( cpu_subtype_t )-1 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_VAX_ALL = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VAX780  = ( ( cpu_subtype_t )1 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VAX785  = ( ( cpu_subtype_t )2 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VAX750  = ( ( cpu_subtype_t )3 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VAX730  = ( ( cpu_subtype_t )4 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_UVAXI   = ( ( cpu_subtype_t )5 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_UVAXII  = ( ( cpu_subtype_t )6 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VAX8200 = ( ( cpu_subtype_t )7 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VAX8500 = ( ( cpu_subtype_t )8 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VAX8600 = ( ( cpu_subtype_t )9 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VAX8650 = ( ( cpu_subtype_t )10 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VAX8800 = ( ( cpu_subtype_t )11 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_UVAXIII = ( ( cpu_subtype_t )12 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_RT_ALL = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_RT_PC  = ( ( cpu_subtype_t )1 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_RT_APC = ( ( cpu_subtype_t )2 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_RT_135 = ( ( cpu_subtype_t )3 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_MMAX_ALL     = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MMAX_DPC	    = ( ( cpu_subtype_t )1 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_SQT		    = ( ( cpu_subtype_t )2 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MMAX_APC_FPU = ( ( cpu_subtype_t )3 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MMAX_APC_FPA = ( ( cpu_subtype_t )4 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MMAX_XPC     = ( ( cpu_subtype_t )5 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_INTEL_FAMILY_MAX = 15;
	inline constexpr cpu_subtype_t CPU_SUBTYPE_INTEL_MODEL_ALL  = 0;

	inline constexpr cpu_subtype_t CPU_SUBTYPE_MIPS_ALL    = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MIPS_R2300  = ( ( cpu_subtype_t )1 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MIPS_R2600  = ( ( cpu_subtype_t )2 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MIPS_R2800  = ( ( cpu_subtype_t )3 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MIPS_R2000a = ( ( cpu_subtype_t )4 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_MC680x0_ALL  = ( ( cpu_subtype_t )1 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MC68030      = ( ( cpu_subtype_t )1 ); 
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MC68040	    = ( ( cpu_subtype_t )2 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MC68030_ONLY = ( ( cpu_subtype_t )3 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_HPPA_ALL    = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_HPPA_7100   = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_HPPA_7100LC = ( ( cpu_subtype_t )1 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_ARM_ALL		 = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_ARM_A500_ARCH = ( ( cpu_subtype_t )1 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_ARM_A500		 = ( ( cpu_subtype_t )2 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_ARM_A440		 = ( ( cpu_subtype_t )3 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_ARM_M4		 = ( ( cpu_subtype_t )4 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_ARM_V4T		 = ( ( cpu_subtype_t )5 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_ARM_V6		 = ( ( cpu_subtype_t )6 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_ARM_V5TEJ	 = ( ( cpu_subtype_t )7 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_ARM_XSCALE	 = ( ( cpu_subtype_t )8 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_MC88000_ALL = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MMAX_JPC	   = ( ( cpu_subtype_t )1 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MC88100     = ( ( cpu_subtype_t )1 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MC88110     = ( ( cpu_subtype_t )2 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_MC98000_ALL = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MC98601	   = ( ( cpu_subtype_t )1 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_I860_ALL = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_I860_860 = ( ( cpu_subtype_t )1 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_LITTLE_ENDIAN = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_BIG_ENDIAN	 = ( ( cpu_subtype_t )1 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_I860_LITTLE_ALL = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_I860_LITTLE	   = ( ( cpu_subtype_t )1 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_RS6000_ALL = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_RS6000	  = ( ( cpu_subtype_t )1 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_SUN4_ALL = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_SUN4_260 = ( ( cpu_subtype_t )1 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_SUN4_110 = ( ( cpu_subtype_t )2 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_SPARC_ALL = ( ( cpu_subtype_t )0 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_ALL	 = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_601	 = ( ( cpu_subtype_t )1 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_602	 = ( ( cpu_subtype_t )2 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_603	 = ( ( cpu_subtype_t )3 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_603e	 = ( ( cpu_subtype_t )4 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_603ev = ( ( cpu_subtype_t )5 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_604	 = ( ( cpu_subtype_t )6 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_604e	 = ( ( cpu_subtype_t )7 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_620	 = ( ( cpu_subtype_t )8 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_750	 = ( ( cpu_subtype_t )9 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_7400	 = ( ( cpu_subtype_t )10 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_7450	 = ( ( cpu_subtype_t )11 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_970	 = ( ( cpu_subtype_t )100 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_VEO_1   = ( ( cpu_subtype_t )1 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VEO_2   = ( ( cpu_subtype_t )2 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VEO_3   = ( ( cpu_subtype_t )3 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VEO_4   = ( ( cpu_subtype_t )4 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VEO_ALL = CPU_SUBTYPE_VEO_2;

	inline constexpr cpu_subtype_t CPU_SUBTYPE_MULTIPLE		 = ( ( cpu_subtype_t )-1 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_LITTLE_ENDIAN = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_BIG_ENDIAN	 = ( ( cpu_subtype_t )1 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_VAX_ALL = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VAX780  = ( ( cpu_subtype_t )1 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VAX785  = ( ( cpu_subtype_t )2;
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VAX750  = ( ( cpu_subtype_t )3 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VAX730  = ( ( cpu_subtype_t )4 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_UVAXI   = ( ( cpu_subtype_t )5 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_UVAXII  = ( ( cpu_subtype_t )6 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VAX8200 = ( ( cpu_subtype_t )7 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VAX8500 = ( ( cpu_subtype_t )8 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VAX8600 = ( ( cpu_subtype_t )9 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VAX8650 = ( ( cpu_subtype_t )10 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_VAX8800 = ( ( cpu_subtype_t )11 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_UVAXIII = ( ( cpu_subtype_t )12 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_MC680x0_ALL  = ( ( cpu_subtype_t )1 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MC68030      = ( ( cpu_subtype_t )1 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MC68040      = ( ( cpu_subtype_t )2 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MC68030_ONLY = ( ( cpu_subtype_t )3 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_I386_ALL		  = ( ( cpu_subtype_t )( 3 ) + ( ( 0 ) << 4 ) );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_386			  = ( ( cpu_subtype_t )( 3 ) + ( ( 0 ) << 4 ) );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_486			  = ( ( cpu_subtype_t )( 4 ) + ( ( 0 ) << 4 ) );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_486SX		  = ( ( cpu_subtype_t )( 4 ) + ( ( 8 ) << 4 ) );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_586			  = ( ( cpu_subtype_t )( 5 ) + ( ( 0 ) << 4 ) );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_PENT			  = ( ( cpu_subtype_t )( 5 ) + ( ( 0 ) << 4 ) );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_PENTPRO		  = ( ( cpu_subtype_t )( 6 ) + ( ( 1 ) << 4 ) );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_PENTII_M3	  = ( ( cpu_subtype_t )( 6 ) + ( ( 3 ) << 4 ) );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_PENTII_M5	  = ( ( cpu_subtype_t )( 6 ) + ( ( 5 ) << 4 ) );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_CELERON		  = ( ( cpu_subtype_t )( 7 ) + ( ( 6 ) << 4 ) );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_CELERON_MOBILE = ( ( cpu_subtype_t )( 7 ) + ( ( 7 ) << 4 ) );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_PENTIUM_3	  = ( ( cpu_subtype_t )( 8 ) + ( ( 0 ) << 4 ) );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_PENTIUM_3_M	  = ( ( cpu_subtype_t )( 8 ) + ( ( 1 ) << 4 ) );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_PENTIUM_3_XEON = ( ( cpu_subtype_t )( 8 ) + ( ( 2 ) << 4 ) );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_PENTIUM_M	  = ( ( cpu_subtype_t )( 9 ) + ( ( 0 ) << 4 ) );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_PENTIUM_4	  = ( ( cpu_subtype_t )( 10 ) + ( ( 0 ) << 4 ) );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_PENTIUM_4_M	  = ( ( cpu_subtype_t )( 10 ) + ( ( 1 ) << 4 ) );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_ITANIUM		  = ( ( cpu_subtype_t )( 11 ) + ( ( 0 ) << 4 ) );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_ITANIUM_2	  = ( ( cpu_subtype_t )( 11 ) + ( ( 1 ) << 4 ) );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_XEON			  = ( ( cpu_subtype_t )( 12 ) + ( ( 0 ) << 4 ) );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_XEON_MP		  = ( ( cpu_subtype_t )( 12 ) + ( ( 1 ) << 4 ) );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_X86_ALL	  = ( ( cpu_subtype_t )3 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_X86_64_ALL = ( ( cpu_subtype_t )3 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_X86_ARCH1  = ( ( cpu_subtype_t )4 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_MIPS_ALL    = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MIPS_R2300  = ( ( cpu_subtype_t )1 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MIPS_R2600  = ( ( cpu_subtype_t )2 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MIPS_R2800  = ( ( cpu_subtype_t )3 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MIPS_R2000a = ( ( cpu_subtype_t )4 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MIPS_R2000  = ( ( cpu_subtype_t )5 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MIPS_R3000a = ( ( cpu_subtype_t )6 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MIPS_R3000  = ( ( cpu_subtype_t )7 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_MC98000_ALL = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MC98601     = ( ( cpu_subtype_t )1 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_HPPA_ALL    = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_HPPA_7100   = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_HPPA_7100LC = ( ( cpu_subtype_t )1 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_MC88000_ALL = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MC88100     = ( ( cpu_subtype_t )1 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_MC88110     = ( ( cpu_subtype_t )2 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_SPARC_ALL = ( ( cpu_subtype_t )0 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_I860_ALL = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_I860_860 = ( ( cpu_subtype_t )1 );

	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_ALL   = ( ( cpu_subtype_t )0 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_601   = ( ( cpu_subtype_t )1 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_602   = ( ( cpu_subtype_t )2 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_603   = ( ( cpu_subtype_t )3 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_603e  = ( ( cpu_subtype_t )4 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_603ev = ( ( cpu_subtype_t )5 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_604   = ( ( cpu_subtype_t )6 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_604e  = ( ( cpu_subtype_t )7 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_620   = ( ( cpu_subtype_t )8 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_750   = ( ( cpu_subtype_t )9 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_7400  = ( ( cpu_subtype_t )10 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_7450  = ( ( cpu_subtype_t )11 );
	inline constexpr cpu_subtype_t CPU_SUBTYPE_POWERPC_970   = ( ( cpu_subtype_t )100 );

	inline constexpr uint32_t CPUFAMILY_UNKNOWN    = 0;
	inline constexpr uint32_t CPUFAMILY_POWERPC_G3 = 0xcee41549;
	inline constexpr uint32_t CPUFAMILY_POWERPC_G4 = 0x77c184ae;
	inline constexpr uint32_t CPUFAMILY_POWERPC_G5 = 0xed76d8aa;
	inline constexpr uint32_t CPUFAMILY_INTEL_6_14 = 0x73d67300;
	inline constexpr uint32_t CPUFAMILY_INTEL_6_15 = 0x426f69ef;
} // namespace mac