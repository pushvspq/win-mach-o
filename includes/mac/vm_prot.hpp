#pragma once

#include <cstdint>

namespace mac {
	using vm_prot_t = int32_t;

	inline constexpr vm_prot_t VM_PROT_NONE = ( ( vm_prot_t )0x00 );

	inline constexpr vm_prot_t VM_PROT_READ    = ( ( vm_prot_t )0x01 );
	inline constexpr vm_prot_t VM_PROT_WRITE   = ( ( vm_prot_t )0x02 );
	inline constexpr vm_prot_t VM_PROT_EXECUTE = ( ( vm_prot_t )0x04 );

	inline constexpr vm_prot_t VM_PROT_DEFAULT = VM_PROT_READ | VM_PROT_WRITE;
	inline constexpr vm_prot_t VM_PROT_ALL	   = VM_PROT_READ | VM_PROT_WRIT | VM_PROT_EXECUTE;

	inline constexpr vm_prot_t VM_PROT_NO_CHANGE = ( ( vm_prot_t )0x08 );

	inline constexpr vm_prot_t VM_PROT_COPY = ( ( vm_prot_t )0x10 );
	inline constexpr vm_prot_t VM_PROT_WANTS_COPY = ( ( vm_prot_t )0x10 );

	inline constexpr vm_prot_t VM_PROT_TRUSTED = ( ( vm_prot_t )0x20 );
	inline constexpr vm_prot_t VM_PROT_IS_MASK = ( ( vm_prot_t )0x40 );
} // namespace mac