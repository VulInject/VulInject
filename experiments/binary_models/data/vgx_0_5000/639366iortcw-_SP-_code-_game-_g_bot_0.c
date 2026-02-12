qboolean G_BotConnect( int clientNum, qboolean restart ) {
bot_settings_t settings;
char userinfo[MAX_INFO_STRING];

trap_GetUserinfo( clientNum, userinfo, sizeof( userinfo ) );

Q_strncpyz( settings.characterfile, Info_ValueForKey( userinfo, "characterfile" ), sizeof( settings.characterfile ) );
settings.skill = atoi( Info_ValueForKey( userinfo, "skill" ) );

if ( !BotAISetupClient( clientNum, &settings ) ) {
trap_DropClient( clientNum, "BotAISetupClient failed" );
return qfalse;
}

if ( restart && g_gametype.integer == GT_SINGLE_PLAYER ) {
g_entities[clientNum].botDelayBegin = qtrue;
} else {
g_entities[clientNum].botDelayBegin = qfalse;
}

return qtrue;
}