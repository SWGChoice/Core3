record_keeper_planet_tatooine = Creature:new {
	objectName = "",
	customName = "Lt. Ogo (Planetary Record Keeper)",
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
	templates = {"object/mobile/dressed_eisley_officer_bothan_male_01.iff"},
	lootGroups = {},
	weapons = {},
	conversationTemplate = "planet_record_keeper_tatooine_convConversationTemplate",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(record_keeper_planet_tatooine, "record_keeper_planet_tatooine")