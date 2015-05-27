aakuan_common = {
	description = "",
	minimumLevel = 0,
	maximumLevel = 0,
	lootItems = {
		{itemTemplate = "aakuan_belt", weight = 1000000},
		{itemTemplate = "aakuan_ring", weight = 1000000},
		{itemTemplate = "aakuan_robe", weight = 1000000},
		{itemTemplate = "aakuan_shirt", weight = 1000000},
		{itemTemplate = "ring_crafting_chef", weight = 300000},
		{itemTemplate = "ring_crafting_medicine", weight = 300000},
		{itemTemplate = "ring_crafting_tailor", weight = 300000},
		{itemTemplate = "ring_crafting_weaponsmith", weight = 300000},
		{itemTemplate = "chemical_recycler_schematic", weight = 800000},
		{itemTemplate = "creature_recycler_schematic", weight = 800000},
		{itemTemplate = "flora_recycler_schematic", weight = 800000},
		{itemTemplate = "metal_recycler_schematic", weight = 800000},
		{itemTemplate = "ore_recycler_schematic", weight = 800000},
		{groupTemplate = "wearables_common", weight = 800000},
	}
}

addLootGroupTemplate("aakuan_common", aakuan_common)
