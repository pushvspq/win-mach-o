#pragma once

#include <cstdint>

namespace mac {
	inline constexpr uint32_t FAT_MAGIC = 0xcafebabe;
	inline constexpr uint32_t FAT_CIGAM = 0xbebafeca;

	struct fat_header_t {
		uint32_t magic;
		uint32_t nfat_arch;
	};

	struct fat_arch_t {
		int32_t	 cputype;
		int32_t	 cpusubtype;
		uint32_t offset;
		uint32_t size;
		uint32_t align;
	};

	inline constexpr uint32_t FAT_MAGIC_64 = 0xcafebabf;
	inline constexpr uint32_t FAT_CIGAM_64 = 0xbfbafeca;

	struct fat_arch_64_t {
		int32_t	 cputype;
		int32_t	 cpusubtype;
		uint64_t offset;
		uint64_t size;
		uint32_t align;
		uint32_t reserved;
	};
} // namespace mac