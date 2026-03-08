#pragma once

#include <cstdint>

namespace mac {
	inline constexpr uint32_t MH_MAGIC = 0xfeedface;
	inline constexpr uint32_t MH_CIGAM = 0xcefaedfe;

	struct mach_header_t {
		uint32_t magic;
		int32_t  cputype;
		int32_t  cpusubtype;
		uint32_t filetype;
		uint32_t ncmds;
		uint32_t sizeofcmds;
		uint32_t flags;
	};

	struct segment_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
		char     segname[ 16 ];
		uint32_t vmaddr;
		uint32_t vmsize;
		uint32_t fileoff;
		uint32_t filesize;
		int32_t  maxprot;
		int32_t  initprot;
		uint32_t nsects;
		uint32_t flags;
	};

	struct section_t {
		char     sectname[ 16 ];
		char     segname[ 16 ];
		uint32_t addr;
		uint32_t size;
		uint32_t offset;
		uint32_t align;
		uint32_t reloff;
		uint32_t nreloc;
		uint32_t flags;
		uint32_t reserved1;
		uint32_t reserved2;
	};

	struct routines_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
		uint32_t init_address;
		uint32_t init_module;
		uint32_t reserved1;
		uint32_t reserved2;
		uint32_t reserved3;
		uint32_t reserved4;
		uint32_t reserved5;
		uint32_t reserved6;
	};

	struct dylib_module_t {
		uint32_t module_name;
		uint32_t iextdefsym;
		uint32_t nextdefsym;
		uint32_t irefsym;
		uint32_t nrefsym;
		uint32_t ilocalsym;
		uint32_t nlocalsym;
		uint32_t iextrel;
		uint32_t nextrel;
		uint32_t iinit_iterm;
		uint32_t ninit_nterm;
		uint32_t objc_module_info_addr;
		uint32_t objc_module_info_size;
	};

	struct encryption_info_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
		uint32_t cryptoff;
		uint32_t cryptsize;
		uint32_t cryptid;
	};

	inline constexpr uint32_t MH_MAGIC_64 = 0xfeedfacf;
	inline constexpr uint32_t MH_CIGAM_64 = 0xcffaedfe;

	struct mach_header_64_t {
		uint32_t magic;
		int32_t  cputype;
		int32_t  cpusubtype;
		uint32_t filetype;
		uint32_t ncmds;
		uint32_t sizeofcmds;
		uint32_t flags;
		uint32_t reserved;
	};

	struct segment_command_64_t {
		uint32_t cmd;
		uint32_t cmdsize;
		char     segname[ 16 ];
		uint64_t vmaddr;
		uint64_t vmsize;
		uint64_t fileoff;
		uint64_t filesize;
		int32_t  maxprot;
		int32_t  initprot;
		uint32_t nsects;
		uint32_t flags;
	};

	struct section_64_t {
		char     sectname[ 16 ];
		char     segname[ 16 ];
		uint64_t addr;
		uint64_t size;
		uint32_t offset;
		uint32_t align;
		uint32_t reloff;
		uint32_t nreloc;
		uint32_t flags;
		uint32_t reserved1;
		uint32_t reserved2;
		uint32_t reserved3;
	};

	struct dylib_module_64_t {
		uint32_t module_name;
		uint32_t iextdefsym;
		uint32_t nextdefsym;
		uint32_t irefsym;
		uint32_t nrefsym;
		uint32_t ilocalsym;
		uint32_t nlocalsym;
		uint32_t iextrel;
		uint32_t nextrel;
		uint32_t iinit_iterm;
		uint32_t ninit_nterm;
		uint32_t objc_module_info_size;
		uint64_t objc_module_info_addr;
	};

	struct encryption_info_command_64_t {
		uint32_t cmd;
		uint32_t cmdsize;
		uint32_t cryptoff;
		uint32_t cryptsize;
		uint32_t cryptid;
		uint32_t pad;
	};

	inline constexpr uint32_t MH_OBJECT      = 0x1;
	inline constexpr uint32_t MH_EXECUTE     = 0x2;
	inline constexpr uint32_t MH_FVMLIB      = 0x3;
	inline constexpr uint32_t MH_CORE        = 0x4;
	inline constexpr uint32_t MH_PRELOAD     = 0x5;
	inline constexpr uint32_t MH_DYLIB       = 0x6;
	inline constexpr uint32_t MH_DYLINKER    = 0x7;
	inline constexpr uint32_t MH_BUNDLE      = 0x8;
	inline constexpr uint32_t MH_DYLIB_STUB  = 0x9;
	inline constexpr uint32_t MH_DSYM        = 0xa;
	inline constexpr uint32_t MH_KEXT_BUNDLE = 0xb;
	inline constexpr uint32_t MH_FILESET     = 0xc;
	inline constexpr uint32_t MH_GPU_EXECUTE = 0xd;
	inline constexpr uint32_t MH_GPU_DYLIB   = 0xe;

	inline constexpr uint32_t MH_NOUNDEFS                = 0x1;
	inline constexpr uint32_t MH_INCRLINK                = 0x2;
	inline constexpr uint32_t MH_DYLDLINK                = 0x4;
	inline constexpr uint32_t MH_BINDATLOAD              = 0x8;
	inline constexpr uint32_t MH_PREBOUND                = 0x10;
	inline constexpr uint32_t MH_SPLIT_SEGS              = 0x20;
	inline constexpr uint32_t MH_LAZY_INIT               = 0x40;
	inline constexpr uint32_t MH_TWOLEVEL                = 0x80;
	inline constexpr uint32_t MH_FORCE_FLAT              = 0x100;
	inline constexpr uint32_t MH_NOMULTIDEFS             = 0x200;
	inline constexpr uint32_t MH_NOFIXPREBINDING         = 0x400;
	inline constexpr uint32_t MH_PREBINDABLE             = 0x800;
	inline constexpr uint32_t MH_ALLMODSBOUND            = 0x1000;
	inline constexpr uint32_t MH_SUBSECTIONS_VIA_SYMBOLS = 0x2000;
	inline constexpr uint32_t MH_CANONICAL               = 0x4000;
	inline constexpr uint32_t MH_WEAK_DEFINES            = 0x8000;
	inline constexpr uint32_t MH_BINDS_TO_WEAK           = 0x10000;

	inline constexpr uint32_t MH_ALLOW_STACK_EXECUTION = 0x20000;
	inline constexpr uint32_t MH_ROOT_SAFE             = 0x40000;
	inline constexpr uint32_t MH_SETUID_SAFE           = 0x80000;

	inline constexpr uint32_t MH_NO_REEXPORTED_DYLIBS  = 0x100000;
	inline constexpr uint32_t MH_PIE                   = 0x200000;
	inline constexpr uint32_t MH_DEAD_STRIPPABLE_DYLIB = 0x400000;
	inline constexpr uint32_t MH_HAS_TLV_DESCRIPTORS   = 0x800000;

	inline constexpr uint32_t MH_NO_HEAP_EXECUTION             = 0x1000000;
	inline constexpr uint32_t MH_APP_EXTENSION_SAFE            = 0x02000000;
	inline constexpr uint32_t MH_NLIST_OUTOFSYNC_WITH_DYLDINFO = 0x04000000;
	inline constexpr uint32_t MH_SIM_SUPPORT                   = 0x08000000;
	inline constexpr uint32_t MH_IMPLICIT_PAGEZERO             = 0x10000000;
	inline constexpr uint32_t MH_DYLIB_IN_CACHE                = 0x80000000;

	struct load_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
	};

	inline constexpr uint32_t LC_REQ_DYLD = 0x80000000;

	inline constexpr uint32_t LC_SEGMENT        = 0x1;
	inline constexpr uint32_t LC_SYMTAB         = 0x2;
	inline constexpr uint32_t LC_SYMSEG         = 0x3;
	inline constexpr uint32_t LC_THREAD         = 0x4;
	inline constexpr uint32_t LC_UNIXTHREAD     = 0x5;
	inline constexpr uint32_t LC_LOADFVMLIB     = 0x6;
	inline constexpr uint32_t LC_IDFVMLIB       = 0x7;
	inline constexpr uint32_t LC_IDENT          = 0x8;
	inline constexpr uint32_t LC_FVMFILE        = 0x9;
	inline constexpr uint32_t LC_PREPAGE        = 0xa;
	inline constexpr uint32_t LC_DYSYMTAB       = 0xb;
	inline constexpr uint32_t LC_LOAD_DYLIB     = 0xc;
	inline constexpr uint32_t LC_ID_DYLIB       = 0xd;
	inline constexpr uint32_t LC_LOAD_DYLINKER  = 0xe;
	inline constexpr uint32_t LC_ID_DYLINKER    = 0xf;
	inline constexpr uint32_t LC_PREBOUND_DYLIB = 0x10;
	inline constexpr uint32_t LC_ROUTINES       = 0x11;
	inline constexpr uint32_t LC_SUB_FRAMEWORK  = 0x12;
	inline constexpr uint32_t LC_SUB_UMBRELLA   = 0x13;
	inline constexpr uint32_t LC_SUB_CLIENT     = 0x14;
	inline constexpr uint32_t LC_SUB_LIBRARY    = 0x15;
	inline constexpr uint32_t LC_TWOLEVEL_HINTS = 0x16;
	inline constexpr uint32_t LC_PREBIND_CKSUM  = 0x17;

	inline constexpr uint32_t LC_LOAD_WEAK_DYLIB = ( 0x18 | LC_REQ_DYLD );

	inline constexpr uint32_t LC_SEGMENT_64         = 0x19;
	inline constexpr uint32_t LC_ROUTINES_64        = 0x1a;
	inline constexpr uint32_t LC_ENCRYPTION_INFO_64 = 0x2C;

	inline constexpr uint32_t LC_UUID                     = 0x1b;
	inline constexpr uint32_t LC_RPATH                    = ( 0x1c | LC_REQ_DYLD );
	inline constexpr uint32_t LC_CODE_SIGNATURE           = 0x1d;
	inline constexpr uint32_t LC_SEGMENT_SPLIT_INFO       = 0x1e;
	inline constexpr uint32_t LC_REEXPORT_DYLIB           = ( 0x1f | LC_REQ_DYLD );
	inline constexpr uint32_t LC_LAZY_LOAD_DYLIB          = 0x20;
	inline constexpr uint32_t LC_ENCRYPTION_INFO          = 0x21;
	inline constexpr uint32_t LC_DYLD_INFO                = 0x22;
	inline constexpr uint32_t LC_DYLD_INFO_ONLY           = ( 0x22 | LC_REQ_DYLD );
	inline constexpr uint32_t LC_LOAD_UPWARD_DYLIB        = ( 0x23 | LC_REQ_DYLD );
	inline constexpr uint32_t LC_VERSION_MIN_MACOSX       = 0x24;
	inline constexpr uint32_t LC_VERSION_MIN_IPHONEOS     = 0x25;
	inline constexpr uint32_t LC_FUNCTION_STARTS          = 0x26;
	inline constexpr uint32_t LC_DYLD_ENVIRONMENT         = 0x27;
	inline constexpr uint32_t LC_MAIN                     = ( 0x28 | LC_REQ_DYLD );
	inline constexpr uint32_t LC_DATA_IN_CODE             = 0x29;
	inline constexpr uint32_t LC_SOURCE_VERSION           = 0x2A;
	inline constexpr uint32_t LC_DYLIB_CODE_SIGN_DRS      = 0x2B;
	inline constexpr uint32_t LC_LINKER_OPTION            = 0x2D;
	inline constexpr uint32_t LC_LINKER_OPTIMIZATION_HINT = 0x2E;
	inline constexpr uint32_t LC_VERSION_MIN_TVOS         = 0x2F;
	inline constexpr uint32_t LC_VERSION_MIN_WATCHOS      = 0x30;
	inline constexpr uint32_t LC_NOTE                     = 0x31;
	inline constexpr uint32_t LC_BUILD_VERSION            = 0x32;
	inline constexpr uint32_t LC_DYLD_EXPORTS_TRIE        = ( 0x33 | LC_REQ_DYLD );
	inline constexpr uint32_t LC_DYLD_CHAINED_FIXUPS      = ( 0x34 | LC_REQ_DYLD );
	inline constexpr uint32_t LC_FILESET_ENTRY            = ( 0x35 | LC_REQ_DYLD );
	inline constexpr uint32_t LC_ATOM_INFO                = 0x36;

	union lc_str {
		uint32_t offset;
		char*    ptr;
	};

	inline constexpr uint32_t SG_HIGHVM              = 0x1;
	inline constexpr uint32_t SG_FVMLIB              = 0x2;
	inline constexpr uint32_t SG_NORELOC             = 0x4;
	inline constexpr uint32_t SG_PROTECTED_VERSION_1 = 0x8;
	inline constexpr uint32_t SG_READ_ONLY           = 0x10;

	inline constexpr uint32_t SECTION_TYPE       = 0x000000ff;
	inline constexpr uint32_t SECTION_ATTRIBUTES = 0xffffff00;

	inline constexpr uint32_t S_REGULAR          = 0x0;
	inline constexpr uint32_t S_ZEROFILL         = 0x1;
	inline constexpr uint32_t S_CSTRING_LITERALS = 0x2;
	inline constexpr uint32_t S_4BYTE_LITERALS   = 0x3;
	inline constexpr uint32_t S_8BYTE_LITERALS   = 0x4;
	inline constexpr uint32_t S_LITERAL_POINTERS = 0x5;

	inline constexpr uint32_t S_NON_LAZY_SYMBOL_POINTERS            = 0x6;
	inline constexpr uint32_t S_LAZY_SYMBOL_POINTERS                = 0x7;
	inline constexpr uint32_t S_SYMBOL_STUBS                        = 0x8;
	inline constexpr uint32_t S_MOD_INIT_FUNC_POINTERS              = 0x9;
	inline constexpr uint32_t S_MOD_TERM_FUNC_POINTERS              = 0xa;
	inline constexpr uint32_t S_COALESCED                           = 0xb;
	inline constexpr uint32_t S_GB_ZEROFILL                         = 0xc;
	inline constexpr uint32_t S_INTERPOSING                         = 0xd;
	inline constexpr uint32_t S_16BYTE_LITERALS                     = 0xe;
	inline constexpr uint32_t S_DTRACE_DOF                          = 0xf;
	inline constexpr uint32_t S_LAZY_DYLIB_SYMBOL_POINTERS          = 0x10;
	inline constexpr uint32_t S_THREAD_LOCAL_REGULAR                = 0x11;
	inline constexpr uint32_t S_THREAD_LOCAL_ZEROFILL               = 0x12;
	inline constexpr uint32_t S_THREAD_LOCAL_VARIABLES              = 0x13;
	inline constexpr uint32_t S_THREAD_LOCAL_VARIABLE_POINTERS      = 0x14;
	inline constexpr uint32_t S_THREAD_LOCAL_INIT_FUNCTION_POINTERS = 0x15;
	inline constexpr uint32_t S_INIT_FUNC_OFFSETS                   = 0x16;

	inline constexpr uint32_t SECTION_ATTRIBUTES_USR     = 0xff000000;
	inline constexpr uint32_t S_ATTR_PURE_INSTRUCTIONS   = 0x80000000;
	inline constexpr uint32_t S_ATTR_NO_TOC              = 0x40000000;
	inline constexpr uint32_t S_ATTR_STRIP_STATIC_SYMS   = 0x20000000;
	inline constexpr uint32_t S_ATTR_NO_DEAD_STRIP       = 0x10000000;
	inline constexpr uint32_t S_ATTR_LIVE_SUPPORT        = 0x08000000;
	inline constexpr uint32_t S_ATTR_SELF_MODIFYING_CODE = 0x04000000;
	inline constexpr uint32_t S_ATTR_DEBUG               = 0x02000000;
	inline constexpr uint32_t SECTION_ATTRIBUTES_SYS     = 0x00ffff00;
	inline constexpr uint32_t S_ATTR_SOME_INSTRUCTIONS   = 0x00000400;
	inline constexpr uint32_t S_ATTR_EXT_RELOC           = 0x00000200;
	inline constexpr uint32_t S_ATTR_LOC_RELOC           = 0x00000100;

	struct fvmlib_t {
		union lc_str name;
		uint32_t     minor_version;
		uint32_t     header_addr;
	};

	struct fvmlib_command_t {
		uint32_t        cmd;
		uint32_t        cmdsize;
		struct fvmlib_t fvmlib;
	};

	struct dylib_t {
		union lc_str name;
		uint32_t     timestamp;
		uint32_t     current_version;
		uint32_t     compatibility_version;
	};

	struct dylib_command_t {
		uint32_t       cmd;
		uint32_t       cmdsize;
		struct dylib_t dylib;
	};

	struct dylib_use_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
		uint32_t nameoff;
		uint32_t marker;
		uint32_t current_version;
		uint32_t compat_version;
		uint32_t flags;
	};

	inline constexpr uint32_t DYLIB_USE_WEAK_LINK    = 0x01;
	inline constexpr uint32_t DYLIB_USE_REEXPORT     = 0x02;
	inline constexpr uint32_t DYLIB_USE_UPWARD       = 0x04;
	inline constexpr uint32_t DYLIB_USE_DELAYED_INIT = 0x08;

	inline constexpr uint32_t DYLIB_USE_MARKER       = 0x1a741800;

	struct sub_framework_command_t {
		uint32_t     cmd;
		uint32_t     cmdsize;
		union lc_str umbrella;
	};

	struct sub_client_command_t {
		uint32_t     cmd;
		uint32_t     cmdsize;
		union lc_str client;
	};

	struct sub_umbrella_command_t {
		uint32_t     cmd;
		uint32_t     cmdsize;
		union lc_str sub_umbrella;
	};

	struct sub_library_command_t {
		uint32_t     cmd;
		uint32_t     cmdsize;
		union lc_str sub_library;
	};

	struct prebound_dylib_command_t {
		uint32_t     cmd;
		uint32_t     cmdsize;
		union lc_str name;
		uint32_t     nmodules;
		union lc_str linked_modules;
	};

	struct dylinker_command_t {
		uint32_t     cmd;
		uint32_t     cmdsize;
		union lc_str name;
	};

	struct thread_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
	};

	struct routines_command_64_t {
		uint32_t cmd;
		uint32_t cmdsize;
		uint64_t init_address;
		uint64_t init_module;
		uint64_t reserved1;
		uint64_t reserved2;
		uint64_t reserved3;
		uint64_t reserved4;
		uint64_t reserved5;
		uint64_t reserved6;
	};

	struct symtab_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
		uint32_t symoff;
		uint32_t nsyms;
		uint32_t stroff;
		uint32_t strsize;
	};

	struct dysymtab_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
		uint32_t ilocalsym;
		uint32_t nlocalsym;
		uint32_t iextdefsym;
		uint32_t nextdefsym;
		uint32_t iundefsym;
		uint32_t nundefsym;
		uint32_t tocoff;
		uint32_t ntoc;
		uint32_t modtaboff;
		uint32_t nmodtab;
		uint32_t extrefsymoff;
		uint32_t nextrefsyms;
		uint32_t indirectsymoff;
		uint32_t nindirectsyms;
		uint32_t extreloff;
		uint32_t nextrel;
		uint32_t locreloff;
		uint32_t nlocrel;
	};

	inline constexpr uint32_t INDIRECT_SYMBOL_LOCAL = 0x80000000;
	inline constexpr uint32_t INDIRECT_SYMBOL_ABS   = 0x40000000;

	struct dylib_table_of_contents_t {
		uint32_t symbol_index;
		uint32_t module_index;
	};

	struct dylib_reference_t {
		uint32_t isym  : 24,
			     flags : 8;
	};

	struct twolevel_hints_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
		uint32_t offset;
		uint32_t nhints;
	};

	struct twolevel_hint_t {
		uint32_t isub_image : 8,
			     itoc       : 24;
	};

	struct prebind_cksum_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
		uint32_t cksum;
	};

	struct uuid_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
		uint8_t  uuid[ 16 ];
	};

	struct rpath_command_t {
		uint32_t     cmd;
		uint32_t     cmdsize;
		union lc_str path;
	};

	struct linkedit_data_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
		uint32_t dataoff;
		uint32_t datasize;
	};

	struct version_min_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
		uint32_t version;
		uint32_t sdk;
	};

	struct build_version_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
		uint32_t platform;
		uint32_t minos;
		uint32_t sdk;
		uint32_t ntools;
	};

	struct build_tool_version_t {
		uint32_t tool;
		uint32_t version;
	};

	inline constexpr uint32_t PLATFORM_UNKNOWN           = 0;
	inline constexpr uint32_t PLATFORM_ANY               = 0xFFFFFFFF;
	inline constexpr uint32_t PLATFORM_MACOS             = 1;
	inline constexpr uint32_t PLATFORM_IOS               = 2;
	inline constexpr uint32_t PLATFORM_TVOS              = 3;
	inline constexpr uint32_t PLATFORM_WATCHOS           = 4;
	inline constexpr uint32_t PLATFORM_BRIDGEOS          = 5;
	inline constexpr uint32_t PLATFORM_MACCATALYST       = 6;
	inline constexpr uint32_t PLATFORM_IOSSIMULATOR      = 7;
	inline constexpr uint32_t PLATFORM_TVOSSIMULATOR     = 8;
	inline constexpr uint32_t PLATFORM_WATCHOSSIMULATOR  = 9;
	inline constexpr uint32_t PLATFORM_DRIVERKIT         = 10;
	inline constexpr uint32_t PLATFORM_VISIONOS          = 11;
	inline constexpr uint32_t PLATFORM_VISIONOSSIMULATOR = 12;

	inline constexpr uint32_t PLATFORM_FIRMWARE = 13;
	inline constexpr uint32_t PLATFORM_SEPOS    = 14;

	inline constexpr uint32_t TOOL_CLANG = 1;
	inline constexpr uint32_t TOOL_SWIFT = 2;
	inline constexpr uint32_t TOOL_LD    = 3;
	inline constexpr uint32_t TOOL_LLD   = 4;

	inline constexpr uint32_t TOOL_METAL           = 1024;
	inline constexpr uint32_t TOOL_AIRLLD          = 1025;
	inline constexpr uint32_t TOOL_AIRNT           = 1026;
	inline constexpr uint32_t TOOL_AIRNT_PLUGIN    = 1027;
	inline constexpr uint32_t TOOL_AIRPACK         = 1028;
	inline constexpr uint32_t TOOL_GPUARCHIVER     = 1031;
	inline constexpr uint32_t TOOL_METAL_FRAMEWORK = 1032;

	struct dyld_info_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
		uint32_t rebase_off;
		uint32_t rebase_size;
		uint32_t bind_off;
		uint32_t bind_size;
		uint32_t weak_bind_off;
		uint32_t weak_bind_size;
		uint32_t lazy_bind_off;
		uint32_t lazy_bind_size;
		uint32_t export_off;
		uint32_t export_size;
	};

	inline constexpr uint32_t REBASE_TYPE_POINTER         = 1;
	inline constexpr uint32_t REBASE_TYPE_TEXT_ABSOLUTE32 = 2;
	inline constexpr uint32_t REBASE_TYPE_TEXT_PCREL32    = 3;

	inline constexpr uint32_t REBASE_OPCODE_MASK                               = 0xF0;
	inline constexpr uint32_t REBASE_IMMEDIATE_MASK                            = 0x0F;
	inline constexpr uint32_t REBASE_OPCODE_DONE                               = 0x00;
	inline constexpr uint32_t REBASE_OPCODE_SET_TYPE_IMM                       = 0x10;
	inline constexpr uint32_t REBASE_OPCODE_SET_SEGMENT_AND_OFFSET_ULEB        = 0x20;
	inline constexpr uint32_t REBASE_OPCODE_ADD_ADDR_ULEB                      = 0x30;
	inline constexpr uint32_t REBASE_OPCODE_ADD_ADDR_IMM_SCALED                = 0x40;
	inline constexpr uint32_t REBASE_OPCODE_DO_REBASE_IMM_TIMES                = 0x50;
	inline constexpr uint32_t REBASE_OPCODE_DO_REBASE_ULEB_TIMES               = 0x60;
	inline constexpr uint32_t REBASE_OPCODE_DO_REBASE_ADD_ADDR_ULEB            = 0x70;
	inline constexpr uint32_t REBASE_OPCODE_DO_REBASE_ULEB_TIMES_SKIPPING_ULEB = 0x80;

	inline constexpr uint32_t BIND_TYPE_POINTER         = 1;
	inline constexpr uint32_t BIND_TYPE_TEXT_ABSOLUTE32 = 2;
	inline constexpr uint32_t BIND_TYPE_TEXT_PCREL32    = 3;

	inline constexpr uint32_t BIND_SPECIAL_DYLIB_SELF            = 0;
	inline constexpr uint32_t BIND_SPECIAL_DYLIB_MAIN_EXECUTABLE = -1;
	inline constexpr uint32_t BIND_SPECIAL_DYLIB_FLAT_LOOKUP     = -2;
	inline constexpr uint32_t BIND_SPECIAL_DYLIB_WEAK_LOOKUP     = -3;

	inline constexpr uint32_t BIND_SYMBOL_FLAGS_WEAK_IMPORT         = 0x1;
	inline constexpr uint32_t BIND_SYMBOL_FLAGS_NON_WEAK_DEFINITION = 0x8;

	inline constexpr uint32_t BIND_OPCODE_MASK                                         = 0xF0;
	inline constexpr uint32_t BIND_IMMEDIATE_MASK                                      = 0x0F;
	inline constexpr uint32_t BIND_OPCODE_DONE                                         = 0x00;
	inline constexpr uint32_t BIND_OPCODE_SET_DYLIB_ORDINAL_IMM                        = 0x10;
	inline constexpr uint32_t BIND_OPCODE_SET_DYLIB_ORDINAL_ULEB                       = 0x20;
	inline constexpr uint32_t BIND_OPCODE_SET_DYLIB_SPECIAL_IMM                        = 0x30;
	inline constexpr uint32_t BIND_OPCODE_SET_SYMBOL_TRAILING_FLAGS_IMM                = 0x40;
	inline constexpr uint32_t BIND_OPCODE_SET_TYPE_IMM                                 = 0x50;
	inline constexpr uint32_t BIND_OPCODE_SET_ADDEND_SLEB                              = 0x60;
	inline constexpr uint32_t BIND_OPCODE_SET_SEGMENT_AND_OFFSET_ULEB                  = 0x70;
	inline constexpr uint32_t BIND_OPCODE_ADD_ADDR_ULEB                                = 0x80;
	inline constexpr uint32_t BIND_OPCODE_DO_BIND                                      = 0x90;
	inline constexpr uint32_t BIND_OPCODE_DO_BIND_ADD_ADDR_ULEB                        = 0xA0;
	inline constexpr uint32_t BIND_OPCODE_DO_BIND_ADD_ADDR_IMM_SCALED                  = 0xB0;
	inline constexpr uint32_t BIND_OPCODE_DO_BIND_ULEB_TIMES_SKIPPING_ULEB             = 0xC0;
	inline constexpr uint32_t BIND_OPCODE_THREADED                                     = 0xD0;
	inline constexpr uint32_t BIND_SUBOPCODE_THREADED_SET_BIND_ORDINAL_TABLE_SIZE_ULEB = 0x00;
	inline constexpr uint32_t BIND_SUBOPCODE_THREADED_APPLY                            = 0x01;

	inline constexpr uint32_t EXPORT_SYMBOL_FLAGS_KIND_MASK         = 0x03;
	inline constexpr uint32_t EXPORT_SYMBOL_FLAGS_KIND_REGULAR      = 0x00;
	inline constexpr uint32_t EXPORT_SYMBOL_FLAGS_KIND_THREAD_LOCAL = 0x01;
	inline constexpr uint32_t EXPORT_SYMBOL_FLAGS_KIND_ABSOLUTE     = 0x02;
	inline constexpr uint32_t EXPORT_SYMBOL_FLAGS_WEAK_DEFINITION   = 0x04;
	inline constexpr uint32_t EXPORT_SYMBOL_FLAGS_REEXPORT          = 0x08;
	inline constexpr uint32_t EXPORT_SYMBOL_FLAGS_STUB_AND_RESOLVER = 0x10;
	inline constexpr uint32_t EXPORT_SYMBOL_FLAGS_STATIC_RESOLVER   = 0x20;

	struct linker_option_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
		uint32_t count;
	};

	struct symseg_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
		uint32_t offset;
		uint32_t size;
	};

	struct ident_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
	};

	struct fvmfile_command_t {
		uint32_t     cmd;
		uint32_t     cmdsize;
		union lc_str name;
		uint32_t     header_addr;
	};

	struct entry_point_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
		uint64_t entryoff;
		uint64_t stacksize;
	};

	struct source_version_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
		uint64_t version;
	};

	struct _data_in_code_entry_t {
		uint32_t offset;
		uint16_t length;
		uint16_t kind;
	};

	inline constexpr uint32_t DICE_KIND_DATA             = 0x0001;
	inline constexpr uint32_t DICE_KIND_JUMP_TABLE8      = 0x0002;
	inline constexpr uint32_t DICE_KIND_JUMP_TABLE16     = 0x0003;
	inline constexpr uint32_t DICE_KIND_JUMP_TABLE32     = 0x0004;
	inline constexpr uint32_t DICE_KIND_ABS_JUMP_TABLE32 = 0x0005;

	struct tlv_descriptor_t {
		void*         ( *thunk )( struct tlv_descriptor_t* );
		unsigned long key;
		unsigned long offset;
	};

	struct note_command_t {
		uint32_t cmd;
		uint32_t cmdsize;
		char     data_owner[ 16 ];
		uint64_t offset;
		uint64_t size;
	};

	struct fileset_entry_command_t {
		uint32_t     cmd;
		uint32_t     cmdsize;
		uint64_t     vmaddr;
		uint64_t     fileoff;
		union lc_str entry_id;
		uint32_t     reserved;
	};
} // namespace mac

#ifndef SEG_PAGEZERO
#define SEG_PAGEZERO "__PAGEZERO"
#endif // SEG_PAGEZERO

#ifndef SEG_TEXT
#define SEG_TEXT "__TEXT"
#endif // SEG_TEXT

#ifndef SECT_TEXT
#define SECT_TEXT "__text"
#endif // SECT_TEXT

#ifndef SECT_FVMLIB_INIT0
#define SECT_FVMLIB_INIT0 "__fvmlib_init0"
#endif // SECT_FVMLIB_INIT0

#ifndef SECT_FVMLIB_INIT1
#define SECT_FVMLIB_INIT1 "__fvmlib_init1"
#endif // SECT_FVMLIB_INIT1

#ifndef SEG_DATA
#define SEG_DATA "__DATA"
#endif SEG_DATA // SEG_DATA

#ifndef SECT_DATA
#define SECT_DATA "__data"
#endif // SECT_DATA

#ifndef SECT_BSS
#define SECT_BSS "__bss"
#endif // SECT_BSS

#ifndef SECT_COMMON
#define SECT_COMMON	"__common"
#endif // SECT_COMMON

#ifndef SEG_OBJC
#define SEG_OBJC "__OBJC"
#endif // SEG_OBJC

#ifndef SECT_OBJC_SYMBOLS
#define SECT_OBJC_SYMBOLS "__symbol_table"
#endif // SECT_OBJC_SYMBOLS

#ifndef SECT_OBJC_MODULES
#define SECT_OBJC_MODULES "__module_info"
#endif // SECT_OBJC_MODULES

#ifndef SECT_OBJC_STRINGS
#define SECT_OBJC_STRINGS "__selector_strs"
#endif // SECT_OBJC_STRINGS

#ifndef SECT_OBJC_REFS
#define SECT_OBJC_REFS "__selector_refs"
#endif // SECT_OBJC_REFS

#ifndef SEG_ICON
#define SEG_ICON "__ICON"
#endif // SEG_ICON

#ifndef SECT_ICON_HEADER
#define SECT_ICON_HEADER "__header"
#endif // SECT_ICON_HEADER

#ifndef SECT_ICON_TIFF
#define SECT_ICON_TIFF "__tiff"
#endif // SECT_ICON_TIFF

#ifndef SEG_LINKEDIT
#define SEG_LINKEDIT "__LINKEDIT"
#endif // SEG_LINKEDIT

#ifndef SEG_UNIXSTACK
#define SEG_UNIXSTACK "__UNIXSTACK"
#endif // SEG_UNIXSTACK

#ifndef SEG_IMPORT
#define SEG_IMPORT "__IMPORT"
#endif // SEG_IMPORT