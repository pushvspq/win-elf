#pragma once

#include <cstdint>

namespace elf {
	enum {
		EI_MAG0       = 0,
		EI_MAG1       = 1,
		EI_MAG2       = 2,
		EI_MAG3       = 3,
		EI_CLASS      = 4,
		EI_DATA       = 5,
		EI_VERSION    = 6,
		EI_OSABI      = 7,
		EI_ABIVERSION = 8,
		EI_PAD        = 9,
		EI_NIDENT     = 16
	};

	struct elf_ehdr_32_t {
		uint8_t  e_ident[ EI_NIDENT ];
		uint16_t e_type;
		uint16_t e_machine;
		uint32_t e_version;
		uint32_t e_entry;
		uint32_t e_phoff;
		uint32_t e_shoff;
		uint32_t e_flags;
		uint16_t e_ehsize;
		uint16_t e_phentsize;
		uint16_t e_phnum;
		uint16_t e_shentsize;
		uint16_t e_shnum;
		uint16_t e_shstrndx;
	};

	struct elf_ehdr_64_t {
		uint8_t  e_ident[ EI_NIDENT ];
		uint16_t e_type;
		uint16_t e_machine;
		uint32_t e_version;
		uint64_t e_entry;
		uint64_t e_phoff;
		uint64_t e_shoff;
		uint32_t e_flags;
		uint16_t e_ehsize;
		uint16_t e_phentsize;
		uint16_t e_phnum;
		uint16_t e_shentsize;
		uint16_t e_shnum;
		uint16_t e_shstrndx;
	};

	enum {
		ELFCLASSNONE = 0,
		ELFCLASS32   = 1,
		ELFCLASS64   = 2
	};

	enum {
		EV_NONE    = 0,
		EV_CURRENT = 1
	};

	enum {
		ELFOSABI_NONE       = 0,
		ELFOSABI_SYSV       = 0,
		ELFOSABI_HPUX       = 1,
		ELFOSABI_NETBSD     = 2,
		ELFOSABI_GNU        = 3,
		ELFOSABI_LINUX      = 3,
		ELFOSABI_SOLARIS    = 6,
		ELFOSABI_AIX        = 7,
		ELFOSABI_IRIX       = 8,
		ELFOSABI_FREEBSD    = 9,
		ELFOSABI_TRU64      = 10,
		ELFOSABI_MODESTO    = 11,
		ELFOSABI_OPENBSD    = 12,
		ELFOSABI_ARM_AEABI  = 64,
		ELFOSABI_ARM        = 97,
		ELFOSABI_STANDALONE = 255
	};

	enum {
		ET_NONE   = 0,
		ET_REL    = 1,
		ET_EXEC   = 2,
		ET_DYN    = 3,
		ET_CORE   = 4,
		ET_LOPROC = 0xff00,
		ET_HIPROC = 0xffff
	};

	enum {
		EM_NONE			 = 0,
		EM_M32			 = 1,
		EM_SPARC		 = 2,
		EM_386			 = 3,
		EM_68K			 = 4,
		EM_88K			 = 5,
		EM_486			 = 6,
		EM_860			 = 7,
		EM_MIPS			 = 8,
		EM_S370			 = 9,
		EM_MIPS_RS3_LE	 = 10,
		EM_PARISC		 = 15,
		EM_VPP500		 = 17,
		EM_SPARC32PLUS	 = 18,
		EM_960			 = 19,
		EM_PPC			 = 20,
		EM_PPC64		 = 21,
		EM_S390			 = 22,
		EM_SPU			 = 23,
		EM_V800			 = 36,
		EM_FR20			 = 37,
		EM_RH32			 = 38,
		EM_RCE			 = 39,
		EM_ARM			 = 40,
		EM_ALPHA		 = 41,
		EM_SH			 = 42,
		EM_SPARCV9		 = 43,
		EM_TRICORE		 = 44,
		EM_ARC			 = 45,
		EM_H8_300		 = 46,
		EM_H8_300H		 = 47,
		EM_H8S			 = 48,
		EM_H8_500		 = 49,
		EM_IA_64		 = 50,
		EM_MIPS_X		 = 51,
		EM_COLDFIRE		 = 52,
		EM_68HC12		 = 53,
		EM_MMA			 = 54,
		EM_PCP			 = 55,
		EM_NCPU			 = 56,
		EM_NDR1			 = 57,
		EM_STARCORE		 = 58,
		EM_ME16			 = 59,
		EM_ST100		 = 60, 
		EM_TINYJ		 = 61,
		EM_X86_64		 = 62,
		EM_PDSP			 = 63,
		EM_PDP10		 = 64,
		EM_PDP11		 = 65,
		EM_FX66			 = 66,
		EM_ST9PLUS		 = 67,
		EM_ST7			 = 68,
		EM_68HC16		 = 69,
		EM_68HC11		 = 70,
		EM_68HC08		 = 71,
		EM_68HC05		 = 72,
		EM_SVX			 = 73,
		EM_ST19			 = 74,
		EM_VAX			 = 75,
		EM_CRIS			 = 76,
		EM_JAVELIN		 = 77,
		EM_FIREPATH		 = 78,
		EM_ZSP			 = 79,
		EM_MMIX			 = 80,
		EM_HUANY		 = 81,
		EM_PRISM		 = 82,
		EM_AVR			 = 83,
		EM_FR30			 = 84,
		EM_D10V			 = 85,
		EM_D30V			 = 86,
		EM_V850			 = 87,
		EM_M32R			 = 88,
		EM_MN10300		 = 89,
		EM_MN10200		 = 90,
		EM_PJ			 = 91,
		EM_OPENRISC		 = 92,
		EM_ARC_COMPACT	 = 93,
		EM_XTENSA		 = 94,
		EM_VIDEOCORE	 = 95,
		EM_TMM_GPP		 = 96,
		EM_NS32K		 = 97,
		EM_TPC			 = 98,
		EM_SNP1K		 = 99,
		EM_ST200		 = 100,
		EM_IP2K			 = 101,
		EM_MAX			 = 102,
		EM_CR			 = 103,
		EM_F2MC16		 = 104,
		EM_MSP430		 = 105,
		EM_BLACKFIN		 = 106,
		EM_SE_C33		 = 107,
		EM_SEP			 = 108,
		EM_ARCA			 = 109,
		EM_UNICORE		 = 110,
		EM_EXCESS		 = 111,
		EM_DXP			 = 112,
		EM_ALTERA_NIOS2	 = 113,
		EM_CRX			 = 114,
		EM_XGATE		 = 115,
		EM_C166			 = 116,
		EM_M16C			 = 117,
		EM_DSPIC30F		 = 118,
		EM_CE			 = 119,
		EM_M32C			 = 120,
		EM_TSK3000		 = 131,
		EM_RS08			 = 132,
		EM_SHARC		 = 133,
		EM_ECOG2		 = 134,
		EM_SCORE7		 = 135,
		EM_DSP24		 = 136,
		EM_VIDEOCORE3	 = 137,
		EM_LATTICEMICO32 = 138,
		EM_SE_C17		 = 139,
		EM_TI_C6000		 = 140,
		EM_TI_C2000		 = 141,
		EM_TI_C5500		 = 142,
		EM_MMDSP_PLUS	 = 160,
		EM_CYPRESS_M8C	 = 161,
		EM_R32C			 = 162,
		EM_TRIMEDIA		 = 163,
		EM_HEXAGON		 = 164,
		EM_8051			 = 165,
		EM_STXP7X		 = 166,
		EM_NDS32		 = 167,
		EM_ECOG1		 = 168,
		EM_ECOG1X		 = 168,
		EM_MAXQ30		 = 169,
		EM_XIMO16		 = 170,
		EM_MANIK		 = 171,
		EM_CRAYNV2		 = 172,
		EM_RX			 = 173,
		EM_METAG		 = 174,
		EM_MCST_ELBRUS	 = 175,
		EM_ECOG16		 = 176,
		EM_CR16			 = 177,
		EM_ETPU			 = 178,
		EM_SLE9X		 = 179,
		EM_L10M			 = 180,
		EM_K10M			 = 181,
		EM_AARCH64		 = 183,
		EM_AVR32		 = 185,
		EM_STM8			 = 186,
		EM_TILE64		 = 187,
		EM_TILEPRO		 = 188,
		EM_CUDA			 = 190,
		EM_TILEGX		 = 191,
		EM_CLOUDSHIELD	 = 192,
		EM_COREA_1ST	 = 193,
		EM_COREA_2ND	 = 194,
		EM_ARC_COMPACT2	 = 195,
		EM_OPEN8		 = 196,
		EM_RL78			 = 197,
		EM_VIDEOCORE5	 = 198,
		EM_78KOR		 = 199,
		EM_56800EX		 = 200,
		EM_BA1			 = 201,
		EM_BA2			 = 202,
		EM_XCORE		 = 203,
		EM_MCHP_PIC		 = 204,
		EM_KM32			 = 210,
		EM_KMX32		 = 211,
		EM_KMX16		 = 212,
		EM_KMX8			 = 213,
		EM_KVARC		 = 214,
		EM_CDP			 = 215,
		EM_COGE			 = 216,
		EM_COOL			 = 217,
		EM_NORC			 = 218,
		EM_CSR_KALIMBA	 = 219
	};

	struct elf_phdr_32_t {
		uint32_t p_type;
		uint32_t p_offset;
		uint32_t p_vaddr;
		uint32_t p_paddr;
		uint32_t p_filesz;
		uint32_t p_memsz;
		uint32_t p_flags;
		uint32_t p_align;
	};

	struct elf_phdr_64_t {
		uint32_t p_type;
		uint32_t p_flags;
		uint64_t p_offset;
		uint64_t p_vaddr;
		uint64_t p_paddr;
		uint64_t p_filesz;
		uint64_t p_memsz;
		uint64_t p_align;
	};

	enum {
		PT_NULL			 = 0,
		PT_LOAD			 = 1,
		PT_DYNAMIC		 = 2,
		PT_INTERP		 = 3,
		PT_NOTE			 = 4,
		PT_SHLIB		 = 5,
		PT_PHDR			 = 6,
		PT_TLS			 = 7,
		PT_LOOS			 = 0x60000000,
		PT_HIOS			 = 0x6fffffff,
		PT_LOPROC        = 0x70000000,
		PT_HIPROC        = 0x7fffffff,

		PT_GNU_EH_FRAME  = 0x6474e550,
		PT_SUNW_EH_FRAME = 0x6474e550,
		PT_SUNW_UNWIND   = 0x6464e550,

		PT_GNU_STACK     = 0x6474e551,
		PT_GNU_RELRO     = 0x6474e552,
	};

	enum : unsigned {
		PF_X = 1,
		PF_W = 2,
		PF_R = 4,
	};
	
	inline constexpr uint32_t SHN_UNDEF = 0;

	struct elf32_shdr_t {
		uint32_t sh_name;
		uint32_t sh_type;
		uint32_t sh_flags;
		uint32_t sh_addr;
		uint32_t sh_offset;
		uint32_t sh_size;
		uint32_t sh_link;
		uint32_t sh_info;
		uint32_t sh_addralign;
		uint32_t sh_entsize;
	};

	struct elf64_shdr_t {
		uint32_t sh_name;
		uint32_t sh_type;
		uint64_t sh_flags;
		uint64_t sh_addr;
		uint64_t sh_offset;
		uint64_t sh_size;
		uint32_t sh_link;
		uint32_t sh_info;
		uint64_t sh_addralign;
		uint64_t sh_entsize;
	};

	enum : unsigned {
		SHT_NULL			   = 0,
		SHT_PROGBITS		   = 1,
		SHT_SYMTAB			   = 2,
		SHT_STRTAB			   = 3,
		SHT_RELA			   = 4,
		SHT_HASH			   = 5,
		SHT_DYNAMIC			   = 6,
		SHT_NOTE			   = 7,
		SHT_NOBITS			   = 8,
		SHT_REL				   = 9,
		SHT_SHLIB			   = 10,
		SHT_DYNSYM			   = 11,
		SHT_INIT_ARRAY		   = 14,
		SHT_FINI_ARRAY		   = 15,
		SHT_PREINIT_ARRAY	   = 16,
		SHT_GROUP			   = 17,
		SHT_SYMTAB_SHNDX	   = 18,
		SHT_LOOS			   = 0x60000000,
		SHT_GNU_ATTRIBUTES	   = 0x6ffffff5,
		SHT_GNU_HASH		   = 0x6ffffff6,
		SHT_GNU_verdef		   = 0x6ffffffd,
		SHT_GNU_verneed		   = 0x6ffffffe,
		SHT_GNU_versym		   = 0x6fffffff,
		SHT_HIOS			   = 0x6fffffff,
		SHT_LOPROC			   = 0x70000000,
		SHT_ARM_EXIDX		   = 0x70000001U,
		SHT_ARM_PREEMPTMAP	   = 0x70000002U,
		SHT_ARM_ATTRIBUTES	   = 0x70000003U,
		SHT_ARM_DEBUGOVERLAY   = 0x70000004U,
		SHT_ARM_OVERLAYSECTION = 0x70000005U,
		SHT_HEX_ORDERED		   = 0x70000000,
		SHT_X86_64_UNWIND	   = 0x70000001,
		SHT_MIPS_REGINFO	   = 0x70000006,
		SHT_MIPS_OPTIONS	   = 0x7000000d,
		SHT_MIPS_ABIFLAGS	   = 0x7000002a,
		SHT_HIPROC			   = 0x7fffffff,
		SHT_LOUSER			   = 0x80000000,
		SHT_HIUSER			   = 0xffffffff
	};

	enum : unsigned {
		SHF_WRITE			 = 0x1,
		SHF_ALLOC			 = 0x2,
		SHF_EXECINSTR		 = 0x4,
		SHF_MERGE			 = 0x10,
		SHF_STRINGS			 = 0x20,
		SHF_INFO_LINK		 = 0x40U,
		SHF_LINK_ORDER		 = 0x80U,
		SHF_OS_NONCONFORMING = 0x100U,
		SHF_GROUP			 = 0x200U,
		SHF_TLS				 = 0x400U,
		SHF_EXCLUDE			 = 0x80000000U,
		SHF_MASKOS			 = 0x0ff00000,
		SHF_MASKPROC		 = 0xf0000000,
		SHF_X86_64_LARGE	 = 0x10000000,
		SHF_HEX_GPREL		 = 0x10000000,
		SHF_MIPS_NODUPES	 = 0x01000000,
		SHF_MIPS_NAMES		 = 0x02000000,
		SHF_MIPS_LOCAL		 = 0x04000000,
		SHF_MIPS_NOSTRIP	 = 0x08000000,
		SHF_MIPS_GPREL		 = 0x10000000,
		SHF_MIPS_MERGE		 = 0x20000000,
		SHF_MIPS_ADDR		 = 0x40000000,
		SHF_MIPS_STRING		 = 0x80000000
	};

	struct elf32_sym_t {
		uint32_t st_name;
		uint32_t st_value;
		uint32_t st_size;
		uint8_t  st_info;
		uint8_t  st_other;
		uint16_t st_shndx;
	};

	struct elf64_sym_t {
		uint32_t st_name;
		uint8_t  st_info;
		uint8_t  st_other;
		uint16_t st_shndx;
		uint64_t st_value;
		uint64_t st_size;
	};

	enum {
		STT_NOTYPE	  = 0,
		STT_OBJECT	  = 1,
		STT_FUNC	  = 2,
		STT_SECTION	  = 3,
		STT_FILE	  = 4,
		STT_COMMON	  = 5,
		STT_TLS		  = 6,
		STT_LOOS	  = 7,
		STT_HIOS	  = 8,
		STT_GNU_IFUNC = 10,
		STT_LOPROC	  = 13,
		STT_HIPROC	  = 15
	};

	enum {
		STB_LOCAL	   = 0,
		STB_GLOBAL	   = 1,
		STB_WEAK	   = 2,
		STB_GNU_UNIQUE = 10,
		STB_LOOS	   = 10,
		STB_HIOS	   = 12,
		STB_LOPROC	   = 13,
		STB_HIPROC	   = 15
	};

	struct elf32_rel_t {
		uint32_t r_offset;
		uint32_t r_info;
	};

	struct elf64_rel_t {
		uint64_t r_offset;
		uint32_t r_type;
		uint32_t r_ssym;
	};

	struct elf32_rela_t {
		uint32_t r_offset;
		uint32_t r_info;
		uint32_t r_addend;
	};

	struct elf64_rela_t {
		uint64_t r_offset;
		uint32_t r_type;
		uint32_t r_ssym;
		uint64_t r_addend;
	};

	struct elf32_dyn_t {
		uint32_t d_tag;

		union {
			uint32_t d_val;
			uint32_t d_ptr;
		} d_un;
	};

	struct elf64_dyn_t {
		uint64_t d_tag;

		union {
			uint64_t d_val;
			uint64_t d_ptr;
		} d_un;
	};

	enum {
		DT_NULL			   = 0,
		DT_NEEDED		   = 1,
		DT_PLTRELSZ		   = 2,
		DT_PLTGOT		   = 3,
		DT_HASH			   = 4,
		DT_STRTAB		   = 5,
		DT_SYMTAB		   = 6,
		DT_RELA			   = 7,
		DT_RELASZ		   = 8,
		DT_RELAENT		   = 9,
		DT_STRSZ		   = 10,
		DT_SYMENT		   = 11,
		DT_INIT		       = 12,
		DT_FINI		       = 13,
		DT_SONAME	       = 14,
		DT_RPATH	       = 15,
		DT_SYMBOLIC		   = 16,
		DT_REL	           = 17,
		DT_RELSZ	       = 18,
		DT_RELENT	       = 19,
		DT_PLTREL	       = 20,
		DT_DEBUG	       = 21,
		DT_TEXTREL	       = 22,
		DT_JMPREL	       = 23,
		DT_BIND_NOW	       = 24,
		DT_INIT_ARRAY	   = 25,
		DT_FINI_ARRAY	   = 26,
		DT_INIT_ARRAYSZ	   = 27,
		DT_FINI_ARRAYSZ	   = 28,
		DT_RUNPATH		   = 29,
		DT_FLAGS		   = 30,
		DT_ENCODING		   = 32,
		DT_PREINIT_ARRAY   = 32,
		DT_PREINIT_ARRAYSZ = 33,

		DT_LOOS			   = 0x60000000,
		DT_HIOS			   = 0x6FFFFFFF,
		DT_LOPROC		   = 0x70000000,
		DT_HIPROC		   = 0x7FFFFFFF,
		DT_GNU_HASH		   = 0x6FFFFEF5,
		DT_RELACOUNT	   = 0x6FFFFFF9,
		DT_RELCOUNT		   = 0x6FFFFFFA,
		DT_FLAGS_1		   = 0X6FFFFFFB,
		DT_VERSYM		   = 0x6FFFFFF0,
		DT_VERDEF		   = 0X6FFFFFFC,
		DT_VERDEFNUM	   = 0X6FFFFFFD,
		DT_VERNEED		   = 0X6FFFFFFE,
		DT_VERNEEDNUM	   = 0X6FFFFFFF,
	};

	struct efl32_verdef_t {
		uint16_t vd_version;
		uint16_t vd_flags;
		uint16_t vd_ndx;
		uint16_t vd_cnt;
		uint32_t vd_hash;
		uint32_t vd_aux;
		uint32_t vd_next;
	};

	struct elf64_verdef_t {
		uint16_t vd_version;
		uint16_t vd_flags;
		uint16_t vd_ndx;
		uint16_t vd_cnt;
		uint32_t vd_hash;
		uint32_t vd_aux;
		uint32_t vd_next;
	};

	inline constexpr uint16_t VER_DEF_NONE = 0;
	inline constexpr uint16_t VER_DEF_CURRENT = 1;
	inline constexpr uint16_t VER_DEF_NUM = 2;

	inline constexpr uint16_t VER_FLG_BASE = 0x1;
	inline constexpr uint16_t VER_FLG_WEAK = 0x2;

	inline constexpr uint16_t VER_NDX_LOCAL = 0;
	inline constexpr uint16_t VER_NDX_GLOBAL = 1;
	inline constexpr uint16_t VER_NDX_LORESERVE = 0xff00;
	inline constexpr uint16_t VER_NDX_ELIMINATE = 0xff01;

	struct elf32_verdaux_t {
		uint32_t vda_name;
		uint32_t vda_next;
	};

	struct elf64_verdaux_t {
		uint32_t vda_name;
		uint32_t vda_next;
	};

	struct elf32_verneed_t {
		uint16_t vn_version;
		uint16_t vn_cnt;
		uint32_t vn_file;
		uint32_t vn_aux;
		uint32_t vn_next;
	};

	struct elf64_verneed_t {
		uint16_t vn_version;
		uint16_t vn_cnt;
		uint32_t vn_file;
		uint32_t vn_aux;
		uint32_t vn_next;
	};

	inline constexpr uint16_t VER_NEED_NONE = 0;
	inline constexpr uint16_t VER_NEED_CURRENT = 1;
	inline constexpr uint16_t VER_NEED_NUM = 2;

	struct elf32_vernaux_t {
		uint32_t vna_hash;
		uint16_t vna_flags;
		uint16_t vna_other;
		uint32_t vna_name;
		uint32_t vna_next;
	};

	struct elf64_vernaux_t {
		uint32_t vna_hash;
		uint16_t vna_flags;
		uint16_t vna_other;
		uint32_t vna_name;
		uint32_t vna_next;
	};

	inline constexpr uint32_t R_386_NONE		 = 0;
	inline constexpr uint32_t R_386_32			 = 1;
	inline constexpr uint32_t R_386_PC32		 = 2;
	inline constexpr uint32_t R_386_GOT32		 = 3;
	inline constexpr uint32_t R_386_PLT32		 = 4;
	inline constexpr uint32_t R_386_COPY		 = 5;
	inline constexpr uint32_t R_386_GLOB_DAT	 = 6;
	inline constexpr uint32_t R_386_JMP_SLOT	 = 7;
	inline constexpr uint32_t R_386_RELATIVE	 = 8;
	inline constexpr uint32_t R_386_GOTOFF		 = 9;
	inline constexpr uint32_t R_386_GOTPC		 = 10;
	inline constexpr uint32_t R_386_IRELATIVE	 = 42;
	inline constexpr uint32_t R_X86_64_IRELATIVE = 37;

	inline constexpr uint32_t PAGE_SIZE = 0x1000;

	inline constexpr uint32_t PROT_NONE	 = 0x0;
	inline constexpr uint32_t PROT_READ	 = 0x1;
	inline constexpr uint32_t PROT_WRITE = 0x2;
	inline constexpr uint32_t PROT_EXEC	 = 0x4;
} // namespace elf