void G_RegisterCvars( void ) {
int i;
cvarTable_t *cv;
qboolean remapped = qfalse;

for ( i = 0, cv = gameCvarTable ; i < gameCvarTableSize ; i++, cv++ ) {
trap_Cvar_Register( cv->vmCvar, cv->cvarName,
cv->defaultString, cv->cvarFlags );
if ( cv->vmCvar ) {
cv->modificationCount = cv->vmCvar->modificationCount;
}

if ( cv->teamShader ) {
remapped = qtrue;
}
}

if ( remapped ) {
G_RemapTeamShaders();
}



if ( g_gametype.integer < GT_WOLF || g_gametype.integer > GT_WOLF_CPH ) { 
G_Printf( "g_gametype %i is out of range, defaulting to GT_WOLF(5)\n", g_gametype.integer );
trap_Cvar_Set( "g_gametype", "5" );
trap_Cvar_Update( &g_gametype );
}


if ( g_gameskill.integer < GSKILL_EASY || g_gameskill.integer > GSKILL_VERYHARD ) {
G_Printf( "g_gameskill %i is out of range, default to medium\n", g_gameskill.integer );
trap_Cvar_Set( "g_gameskill", "3" ); 
}

bg_pmove_gameskill_integer = g_gameskill.integer;


level.warmupModificationCount = g_warmup.modificationCount;
}