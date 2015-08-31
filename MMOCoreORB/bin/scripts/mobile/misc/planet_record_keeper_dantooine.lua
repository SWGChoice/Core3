record_keeper_planet_dantooine = Creature:new {
	objectName = "",
	customName = "Lt. Nilsson (Planetary Record Keeper)",
	socialGroup = "imperial",
	faction = "imperial",
	level = 100,
	chanceHit = 1,
	damageMin = 645,
	damageMax = 1000,
	baseXp = 9429,
	baseHAM = 24000,
	baseHAMmax = 30000,
	armor = 0,
	resists = {0,0,0,0,0,0,0,0,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = NONE,
	creatureBitmask = PACK,
	optionsBitmask = 264,
	diet = HERBIVORE,
	templates = {"object/mobile/dressed_stranded_imperial_soldier.iff"},
	lootGroups = {},
	weapons = {},
	conversationTemplate = "planet_record_keeper_dantooine_convConversationTemplate",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(record_keeper_planet_dantooine, "record_keeper_planet_dantooine")