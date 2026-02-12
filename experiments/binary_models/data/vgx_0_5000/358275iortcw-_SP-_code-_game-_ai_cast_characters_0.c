void AIChar_AttackSound( cast_state_t *cs ) {

gentity_t *ent;

ent = &g_entities [cs->entityNum];

if ( cs->attackSNDtime > level.time ) {
return;
}


if ( cs->castScriptStatus.scriptNoAttackTime >= level.time ) {
return;
}
if ( cs->noAttackTime >= level.time ) {
return;
}


if ( cs->weaponNum == WP_GRENADE_LAUNCHER && rand() % 5 ) {
return;
}

cs->attackSNDtime = level.time + 5000 + ( 1000 * rand() % 10 );

AICast_ScriptEvent( cs, "attacksound", ent->aiName );
if ( cs->aiFlags & AIFL_DENYACTION ) {
return;
}

if ( cs->weaponNum == WP_LUGER ) {
G_AddEvent( ent, EV_GENERAL_SOUND, G_SoundIndex( aiDefaults[ent->aiCharacter].soundScripts[ORDERSSOUNDSCRIPT] ) );
} else {
G_AddEvent( ent, EV_GENERAL_SOUND, G_SoundIndex( aiDefaults[ent->aiCharacter].soundScripts[ATTACKSOUNDSCRIPT] ) );
}

}