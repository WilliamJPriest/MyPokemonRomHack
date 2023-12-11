BoatRide_MapScripts::
	.byte 0


BoatRide_EventScript_Pokeball::
	lockall
	msgbox BoatRide_EventScript_Pokeball_Text_0
	givemon SPECIES_SLOWPOKE_GALARIAN, 5, ITEM_ORAN_BERRY
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq BoatRide_EventScript_Pokeball_2
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq BoatRide_EventScript_Pokeball_3
	hidemonpic
	msgbox BoatRide_EventScript_Pokeball_Text_2
BoatRide_EventScript_Pokeball_1:
	msgbox BoatRide_EventScript_Pokeball_Text_3
	msgbox BoatRide_EventScript_Pokeball_Text_4
	waitmessage
	call PirateBattle
	releaseall
	end

BoatRide_EventScript_Pokeball_2:
	playfanfare MUS_OBTAIN_ITEM
	msgbox BoatRide_EventScript_Pokeball_Text_1
	removeobject 1
	setflag SET_CUSTOM_STARTER_0x020
	setflag FLAG_SYS_POKEMON_GET
	call NicknamePartyMonP
	goto BoatRide_EventScript_Pokeball_1

BoatRide_EventScript_Pokeball_3:
	playfanfare MUS_OBTAIN_ITEM
	msgbox BoatRide_EventScript_Pokeball_Text_1
	removeobject 1
	setflag SET_CUSTOM_STARTER_0x020
	setflag FLAG_SYS_POKEMON_GET
	call NicknameBoxMonP
	goto BoatRide_EventScript_Pokeball_1


NicknamePartyMonP::
	msgbox NicknamePartyMonP_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMonP_1
	return

NicknamePartyMonP_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMonP::
	msgbox NicknamePartyMonP_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMonP_2
NicknameBoxMonP_1:
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMonP_2:
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMonP_1


PirateBattle::
	goto_if_set SET_CUSTOM_STARTER_0x020, PirateBattle_1
	clearflag SET_PIRATE_BATTLE_0x021
	return

PirateBattle_1:
	setflag SET_PIRATE_BATTLE_0x021
	trainerBattle_single TRAINER_GRUNT_DAVIS, pirate_intro, pirate_battle
	msgbox pirate_lose, MSGBOX_AUTOCLOSE
	waitmessage
	end


BoatRide_EventScript_Pokeball_Text_0:
	.string "My mom got me a slowpoke$"

BoatRide_EventScript_Pokeball_Text_1:
	.string "Recieved Slowpoke$"

BoatRide_EventScript_Pokeball_Text_2:
	.string "No More Room$"

BoatRide_EventScript_Pokeball_Text_3:
	.string "Where is she?$"

BoatRide_EventScript_Pokeball_Text_4:
	.string "I should thank her$"

NicknamePartyMonP_Text_0:
	.string "Give it a nickname?$"

pirate_intro::
	.string "Hey Kid$"

pirate_battle::
	.string "You'll never win$"

pirate_lose::
	.string "What!?$"
