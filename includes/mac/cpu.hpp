#pragma once

#include <cstdint>

//
// Some types have been removed from the project because it's designed to x86_64
//
namespace mac {
	using cpu_type_t = int32_t;
	using cpu_subtype_t = int32_t;

	inline constexpr uint32_t CPU_ARCH_MASK	 = 0xff000000;
	inline constexpr uint32_t CPU_ARCH_ABI64 = 0x01000000;

	inline constexpr cpu_type_t CPU_TYPE_ANY = ( ( cpu_type_t )-1 );

	inline constexpr cpu_type_t CPU_TYPE_I386		  = ( ( cpu_type_t )7 );
	inline constexpr cpu_type_t CPU_TYPE_X86_64		  = ( ( cpu_type_t )0x01000007 );
	inline constexpr cpu_type_t CPU_TYPE_ARM		  = ( ( cpu_type_t )12 );

	inline constexpr uint32_t CPU_SUBTYPE_MASK  = 0xff000000;
	inline constexpr uint32_t CPU_SUBTYPE_LIB64 = 0xff000000;
} // namespace mac