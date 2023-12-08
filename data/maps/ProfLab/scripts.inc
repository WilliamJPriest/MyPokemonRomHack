ProfLab_MapScripts::
	.byte 0


ProfLab_EventScript_Pokeball::
	lockall
	showmonpic SPECIES_MUDKIP, 10, 3
	msgbox ProfLab_EventScript_Pokeball_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ProfLab_EventScript_Pokeball_2
	hidemonpic
	msgbox ProfLab_NotChosen
ProfLab_EventScript_Pokeball_1:
	waitmessage
	releaseall
	end

ProfLab_EventScript_Pokeball_2:
	givemon SPECIES_MUDKIP, 50, ITEM_MASTER_BALL
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ProfLab_EventScript_Pokeball_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ProfLab_EventScript_Pokeball_6
	hidemonpic
	msgbox ProfLab_EventScript_Pokeball_Text_2
	goto ProfLab_EventScript_Pokeball_1

ProfLab_EventScript_Pokeball_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox ProfLab_EventScript_Pokeball_Text_1
	removeobject 1
	setflag SET_CUSTOM_STARTER_0x020
	setflag FLAG_SYS_POKEMON_GET
	call NicknamePartyMon
	goto ProfLab_EventScript_Pokeball_1

ProfLab_EventScript_Pokeball_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox ProfLab_EventScript_Pokeball_Text_1
	removeobject 1
	setflag SET_CUSTOM_STARTER_0x020
	setflag FLAG_SYS_POKEMON_GET
	call NicknameBoxMon
	goto ProfLab_EventScript_Pokeball_1


NicknamePartyMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


ProfLab_EventScript_Pokeball_Text_0:
	.string "Do you want to choose Mudkip?$"

ProfLab_EventScript_Pokeball_Text_1:
	.string "Recieved Mudkip$"

ProfLab_EventScript_Pokeball_Text_2:
	.string "No More Room$"

NicknamePartyMon_Text_0:
	.string "Give it a nickname?$"

ProfLab_NotChosen::
	.string "You did not choose the Pokemon$"
