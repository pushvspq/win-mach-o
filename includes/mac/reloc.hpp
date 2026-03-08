#pragma once

#include <cstdint>

namespace mac {
	struct relocation_info_t {
		int32_t	 r_address;
		uint32_t r_symbolnum : 24,
			     r_pcrel     : 1,
			     r_length    : 2,
			     r_extern    : 1,
			     r_type      : 4;
	};

	inline constexpr uint32_t R_ABS       = 0;
	inline constexpr uint32_t R_SCATTERED = 0x80000000;

	struct scattered_relocation_info_t {
		uint32_t r_address : 24,
			     r_type : 4,
			     r_length : 2,
			     r_pcrel : 1,
			     r_scattered : 1;
		int32_t	 r_value;
	};

	enum e_reloc_type_generic {
		GENERIC_RELOC_VANILLA,
		GENERIC_RELOC_PAIR,
		GENERIC_RELOC_SECTDIFF,
		GENERIC_RELOC_PB_LA_PTR,
		GENERIC_RELOC_LOCAL_SECTDIFF,
		GENERIC_RELOC_TLV
	};

	enum e_reloc_type_arm {
		ARM_RELOC_VANILLA,
		ARM_RELOC_PAIR,
		ARM_RELOC_SECTDIFF,
		ARM_RELOC_LOCAL_SECTDIFF,
		ARM_RELOC_PB_LA_PTR,
		ARM_RELOC_BR24,
		ARM_THUMB_RELOC_BR22,
		ARM_THUMB_32BIT_BRANCH,
		ARM_RELOC_HALF,
		ARM_RELOC_HALF_SECTDIFF
	};

	enum e_reloc_type_arm64 {
		ARM64_RELOC_UNSIGNED,
		ARM64_RELOC_SUBTRACTOR,
		ARM64_RELOC_BRANCH26,
		ARM64_RELOC_PAGE21,
		ARM64_RELOC_PAGEOFF12,
		ARM64_RELOC_GOT_LOAD_PAGE21,
		ARM64_RELOC_GOT_LOAD_PAGEOFF12,
		ARM64_RELOC_POINTER_TO_GOT,
		ARM64_RELOC_TLVP_LOAD_PAGE21,
		ARM64_RELOC_TLVP_LOAD_PAGEOFF12,
		ARM64_RELOC_ADDEND,
		ARM64_RELOC_AUTHENTICATED_POINTER,
	};

	enum e_reloc_type_x86_64 {
		X86_64_RELOC_UNSIGNED,
		X86_64_RELOC_SIGNED,
		X86_64_RELOC_BRANCH,
		X86_64_RELOC_GOT_LOAD,
		X86_64_RELOC_GOT,
		X86_64_RELOC_SUBTRACTOR,
		X86_64_RELOC_SIGNED_1,
		X86_64_RELOC_SIGNED_2,
		X86_64_RELOC_SIGNED_4,
		X86_64_RELOC_TLV,
	};
} // namespace mac