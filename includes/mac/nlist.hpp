#pragma once

#include <cstdint>

namespace mac {
	struct nlist_t {
		union {
			char*    n_name;
			uint32_t n_strx;
		} n_un;
		uint8_t      n_type;
		uint8_t      n_sect;
		int16_t      n_desc;
		uint32_t     n_value;
	};

	struct nlist_64_t {
		union {
			uint32_t n_strx;
		} n_un;
		uint8_t      n_type;
		uint8_t      n_sect;
		uint16_t     n_desc;
		uint64_t     n_value;
	};

	inline constexpr uint32_t N_STAB = 0xe0;
	inline constexpr uint32_t N_PEXT = 0x10;
	inline constexpr uint32_t N_TYPE = 0x0e;
	inline constexpr uint32_t N_EXT  = 0x01;

	inline constexpr uint32_t N_UNDF = 0x0;
	inline constexpr uint32_t N_ABS  = 0x2;
	inline constexpr uint32_t N_SECT = 0xe;
	inline constexpr uint32_t N_PBUD = 0xc;
	inline constexpr uint32_t N_INDR = 0xa;

	inline constexpr uint32_t NO_SECT  = 0;
	inline constexpr uint32_t MAX_SECT = 255;

	inline constexpr uint32_t REFERENCE_TYPE = 0x7;

	inline constexpr uint32_t REFERENCE_FLAG_UNDEFINED_NON_LAZY         = 0;
	inline constexpr uint32_t REFERENCE_FLAG_UNDEFINED_LAZY             = 1;
	inline constexpr uint32_t REFERENCE_FLAG_DEFINED                    = 2;
	inline constexpr uint32_t REFERENCE_FLAG_PRIVATE_DEFINED            = 3;
	inline constexpr uint32_t REFERENCE_FLAG_PRIVATE_UNDEFINED_NON_LAZY = 4;
	inline constexpr uint32_t REFERENCE_FLAG_PRIVATE_UNDEFINED_LAZY     = 5;

	inline constexpr uint32_t REFERENCED_DYNAMICALLY = 0x0010;

	inline constexpr uint32_t SELF_LIBRARY_ORDINAL   = 0x0;
	inline constexpr uint32_t MAX_LIBRARY_ORDINAL    = 0xfd;
	inline constexpr uint32_t DYNAMIC_LOOKUP_ORDINAL = 0xfe;
	inline constexpr uint32_t EXECUTABLE_ORDINAL     = 0xff;

	inline constexpr uint32_t N_NO_DEAD_STRIP   = 0x0020;
	inline constexpr uint32_t N_DESC_DISCARDED  = 0x0020;
	inline constexpr uint32_t N_WEAK_REF        = 0x0040;
	inline constexpr uint32_t N_WEAK_DEF        = 0x0080;
	inline constexpr uint32_t N_REF_TO_WEAK     = 0x0080;
	inline constexpr uint32_t N_ARM_THUMB_DEF   = 0x0008;
	inline constexpr uint32_t N_SYMBOL_RESOLVER = 0x0100;
	inline constexpr uint32_t N_ALT_ENTRY       = 0x0200;
	inline constexpr uint32_t N_COLD_FUNC       = 0x0400;
} // namespace mac

#ifndef GET_COMM_ALIGN
#define GET_COMM_ALIGN( n_desc ) ( ( ( n_desc ) >> 8) & 0x0f )
#endif // GET_COMM_ALIGN

#ifndef SET_COMM_ALIGN
#define SET_COMM_ALIGN( n_desc, align ) \
    ( n_desc ) = ( ( ( n_desc ) & 0xf0ff ) | ( ( ( align ) & 0x0f ) << 8 ) )
#endif // SET_COMM_ALIGN

#ifndef GET_LIBRARY_ORDINAL
#define GET_LIBRARY_ORDINAL( n_desc ) ( ( ( n_desc ) >> 8 ) & 0xff )
#endif // GET_LIBRARY_ORDINAL

#ifndef SET_LIBRARY_ORDINAL
#define SET_LIBRARY_ORDINAL( n_desc, ordinal ) \
	( n_desc ) = ( ( ( n_desc ) & 0x00ff ) | ( ( ( ordinal ) & 0xff ) << 8 ) )
#endif // SET_LIBRARY_ORDINAL