binayre_common = {
	description = "",
	minimumLevel = 0,
	maximumLevel = 0,
	lootItems = {
		{itemTemplate = "heating_element", weight = 1500000},
                {itemTemplate = "pulverizer", weight = 1500000},
                {itemTemplate = "blue_wiring", weight = 1500000},
		{itemTemplate = "red_wiring", weight = 1500000},
		{itemTemplate = "flora_recycler_schematic", weight = 1000000},
		{groupTemplate = "wearables_common", weight = 1000000},
		{itemTemplate = "skill_buff_polearm_accuracy", weight = 500000},
		{itemTemplate = "skill_buff_polearm_speed", weight = 500000},		
		{itemTemplate = "skill_buff_twohandmelee_accuracy", weight = 500000},
		{itemTemplate = "skill_buff_twohandmelee_speed", weight = 500000}	
	}
}

addLootGroupTemplate("binayre_common", binayre_common)
