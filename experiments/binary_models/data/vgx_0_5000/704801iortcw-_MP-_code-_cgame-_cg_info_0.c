void CG_LoadingClient( int clientNum ) {
const char      *info;
char            *skin;
char personality[MAX_QPATH];
char model[MAX_QPATH];
char iconName[MAX_QPATH];

if ( cgs.gametype == GT_SINGLE_PLAYER  && clientNum > 0 ) { 
return;
}

info = CG_ConfigString( CS_PLAYERS + clientNum );

Q_strncpyz( model, Info_ValueForKey( info, "model" ), sizeof( model ) );
skin = strrchr( model, '/' );
if ( skin ) {
*skin++ = '\0';
} else {
skin = "default";
}

Com_sprintf( iconName, MAX_QPATH, "models/players/%s/icon_%s.tga", model, skin );


if ( !( cg_entities[clientNum].currentState.aiChar ) ) {



}

Q_strncpyz( personality, Info_ValueForKey( info, "n" ), sizeof( personality ) );
Q_CleanStr( personality );

if ( cgs.gametype == GT_SINGLE_PLAYER ) {
trap_S_RegisterSound( va( "sound/player/announce/%s.wav", personality ) );
}

CG_LoadingString( personality );
}