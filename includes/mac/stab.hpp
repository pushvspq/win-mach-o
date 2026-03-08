#pragma once

#include <cstdint>

namespace mac {
	inline constexpr uint32_t N_GSYM  = 0x20;
	inline constexpr uint32_t N_FNAME = 0x22;
	inline constexpr uint32_t N_FUN   = 0x24;
	inline constexpr uint32_t N_STSYM = 0x26;
	inline constexpr uint32_t N_LCSYM = 0x28;
	inline constexpr uint32_t N_BNSYM = 0x2e;
	inline constexpr uint32_t N_AST   = 0x32;
	inline constexpr uint32_t N_OPT   = 0x3c;
	inline constexpr uint32_t N_RSYM  = 0x40;
	inline constexpr uint32_t N_SLINE = 0x44;
	inline constexpr uint32_t N_ENSYM = 0x4e;
	inline constexpr uint32_t N_SSYM  = 0x60;
	inline constexpr uint32_t N_SO    = 0x64;
	inline constexpr uint32_t N_OSO   = 0x66;

	inline constexpr uint32_t N_LIB     = 0x68;
	inline constexpr uint32_t N_LSYM    = 0x80;
	inline constexpr uint32_t N_BINCL   = 0x82;
	inline constexpr uint32_t N_SOL     = 0x84;
	inline constexpr uint32_t N_PARAMS  = 0x86;
	inline constexpr uint32_t N_VERSION = 0x88;
	inline constexpr uint32_t N_OLEVEL  = 0x8A;
	inline constexpr uint32_t N_PSYM    = 0xa0;
	inline constexpr uint32_t N_EINCL   = 0xa2;
	inline constexpr uint32_t N_ENTRY   = 0xa4;
	inline constexpr uint32_t N_LBRAC   = 0xc0;
	inline constexpr uint32_t N_EXCL    = 0xc2;
	inline constexpr uint32_t N_RBRAC   = 0xe0;
	inline constexpr uint32_t N_BCOMM   = 0xe2;
	inline constexpr uint32_t N_ECOMM   = 0xe4;
	inline constexpr uint32_t N_ECOML   = 0xe8;
	inline constexpr uint32_t N_LENG    = 0xfe;

	inline constexpr uint32_t N_PC = 0x30;
} // namespace mac