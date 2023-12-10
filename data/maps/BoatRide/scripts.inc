ProfLab_EventScript_Pokeball::
	lockall
	msgbox ProfLab_EventScript_Pokeball_Text_0
	givemon SPECIES_SLOWPOKE_GALARIAN, 5, ITEM_ORAN_BERRY
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ProfLab_EventScript_Pokeball_2
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ProfLab_EventScript_Pokeball_3
	hidemonpic
	msgbox ProfLab_EventScript_Pokeball_Text_2
ProfLab_EventScript_Pokeball_1:
	msgbox ProfLab_EventScript_Pokeball_Text_3
	msgbox ProfLab_EventScript_Pokeball_Text_4
	waitmessage
	call PirateBattle
	releaseall
	end

ProfLab_EventScript_Pokeball_2:
	playfanfare MUS_OBTAIN_ITEM
	msgbox ProfLab_EventScript_Pokeball_Text_1
	removeobject 1
	setflag SET_CUSTOM_STARTER_0x020
	setflag FLAG_SYS_POKEMON_GET
	call NicknamePartyMon
	goto ProfLab_EventScript_Pokeball_1

ProfLab_EventScript_Pokeball_3:
	playfanfare MUS_OBTAIN_ITEM
	msgbox ProfLab_EventScript_Pokeball_Text_1
	removeobject 1
	setflag SET_CUSTOM_STARTER_0x020
	setflag FLAG_SYS_POKEMON_GET
	call NicknameBoxMon
	goto ProfLab_EventScript_Pokeball_1


NicknamePartyMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


PirateBattle::
	goto_if_unset SET_CUSTOM_STARTER_0x020, PirateBattle_1
	clearflag SET_PIRATE_BATTLE_0x021
	return

PirateBattle_1:
	setflag SET_PIRATE_BATTLE_0x021
	trainerBattle_single
	return


ProfLab_EventScript_Pokeball_Text_0:
	.string "My mom got me a slowpoke$"

ProfLab_EventScript_Pokeball_Text_1:
	.string "Recieved Slowpoke$"

ProfLab_EventScript_Pokeball_Text_2:
	.string "No More Room$"

ProfLab_EventScript_Pokeball_Text_3:
	.string "Where is she?$"

ProfLab_EventScript_Pokeball_Text_4:
	.string "I should thank her$"

NicknamePartyMon_Text_0:
	.string "Give it a nickname?$"
