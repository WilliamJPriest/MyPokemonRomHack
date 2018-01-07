#include "constants/flags.h"
#include "constants/region_map_sections.h"
#include "constants/species.h"
	.include "asm/macros.inc"
	.include "constants/constants.inc"

	.section .rodata

	.align 2
gUnknown_085B3D94:: @ 85B3D94
	.incbin "graphics/pokedex/area_glow.gbapal"

	.align 2
gUnknown_085B3DB4:: @ 85B3DB4
	.incbin "graphics/pokedex/area_glow.4bpp.lz"

	.align 1
gUnknown_085B3EE8:: @ 85B3EE8
	.2byte 0x0168

	.align 1
gUnknown_085B3EEA:: @ 85B3EEA
	.2byte MAPSEC_MARINE_CAVE, MAPSEC_UNDERWATER_MARINE_CAVE, MAPSEC_TERRA_CAVE

	.align 1
gUnknown_085B3EF0:: @ 85B3EF0
	.2byte SPECIES_FEEBAS,  0x0000, 0x0022
    .2byte SPECIES_EGG,     0x0000, 0x0000

	.align 1
gUnknown_085B3EFC:: @ 85B3EFC
	.2byte MAPSEC_SKY_PILLAR,       FLAG_LANDMARK_SKY_PILLAR
    .2byte MAPSEC_SEAFLOOR_CAVERN,  FLAG_LANDMARK_SEAFLOOR_CAVERN
    .2byte MAPSEC_ALTERING_CAVE_2,  FLAG_LANDMARK_ALTERING_CAVE
    .2byte MAPSEC_MIRAGE_TOWER,     FLAG_LANDMARK_MIRAGE_TOWER
    .2byte MAPSEC_DESERT_UNDERPASS, FLAG_LANDMARK_DESERT_UNDERPASS
    .2byte MAPSEC_ARTISAN_CAVE,     FLAG_0x8DF
    .2byte MAPSEC_NONE,             0x0000

gUnknown_085B3F18:: @ 85B3F18
	.byte 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x11, 0x20, 0x02, 0x03, 0x27, 0x2d, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f
	.byte 0x12, 0x21, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x2a, 0x2e, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x13, 0x22, 0x02, 0x03, 0x27, 0x2d, 0x06, 0x07, 0x2a, 0x2e, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f
	.byte 0x14, 0x01, 0x23, 0x03, 0x26, 0x05, 0x2c, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x15, 0x20, 0x23, 0x03, 0x28, 0x2d, 0x2c, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f
	.byte 0x16, 0x21, 0x23, 0x03, 0x26, 0x05, 0x2c, 0x07, 0x2a, 0x2e, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x17, 0x22, 0x23, 0x03, 0x28, 0x2d, 0x2c, 0x07, 0x2a, 0x2e, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f
	.byte 0x18, 0x01, 0x24, 0x03, 0x04, 0x05, 0x06, 0x07, 0x29, 0x09, 0x2f, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x19, 0x20, 0x24, 0x03, 0x27, 0x2d, 0x06, 0x07, 0x29, 0x09, 0x2f, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f
	.byte 0x1a, 0x21, 0x24, 0x03, 0x04, 0x05, 0x06, 0x07, 0x2b, 0x2e, 0x2f, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x1b, 0x22, 0x24, 0x03, 0x27, 0x2d, 0x06, 0x07, 0x2b, 0x2e, 0x2f, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f
	.byte 0x1c, 0x01, 0x25, 0x03, 0x26, 0x05, 0x2c, 0x07, 0x29, 0x09, 0x2f, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x1d, 0x20, 0x25, 0x03, 0x28, 0x2d, 0x2c, 0x07, 0x29, 0x09, 0x2f, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f
	.byte 0x1e, 0x21, 0x25, 0x03, 0x26, 0x05, 0x2c, 0x07, 0x2b, 0x2e, 0x2f, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x1f, 0x22, 0x25, 0x03, 0x28, 0x2d, 0x2c, 0x07, 0x2b, 0x2e, 0x2f, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f

	.align 2
gUnknown_085B4018:: @ 85B4018
	.4byte 0x00002003

	.align 2
gUnknown_085B401C:: @ 85B401C
	obj_tiles AreaMarkerTiles, 0x0080, 0x0002

	.align 2
gUnknown_085B4024:: @ 85B4024
	obj_pal AreaMarkerPalette, 0x0002

	.align 2
gUnknown_085B402C:: @ 85B402C
	.2byte 0x0000
	.2byte 0x4000
	.2byte 0x0400

	.align 2
gUnknown_085B4034:: @ 85B4034
	spr_template 0x0002, 0x0002, gUnknown_085B402C, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy

	.align 2
AreaMarkerPalette:: @ 85B404C
	.incbin "graphics/pokedex/area_marker.gbapal"

	.align 2
AreaMarkerTiles:: @ 85B406C
	.incbin "graphics/pokedex/area_marker.4bpp"

	.align 2
gUnknown_085B40EC:: @ 85B40EC
	obj_pal gUnknown_08DC4120, 0x0003

	.align 2
gOamData_85B40F4:: @ 85B40F4
	.2byte 0x0000
	.2byte 0x8000
	.2byte 0x0400

	.align 2
gSpriteTemplate_85B40FC:: @ 85B40FC
	spr_template 0x0003, 0x0003, gOamData_85B40F4, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy