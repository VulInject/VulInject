static void StartServer_GametypeEvent( void* ptr, int event ) {
int			i;
int			count;
int			gamebits;
int			matchbits;
const char	*info;

if( event != QM_ACTIVATED) {
return;
}

count = UI_GetNumArenas();
s_startserver.nummaps = 0;
matchbits = 1 << gametype_remap[s_startserver.gametype.curvalue];
if( gametype_remap[s_startserver.gametype.curvalue] == GT_FFA ) {
matchbits |= ( 1 << GT_SINGLE_PLAYER );
}
for( i = 0; i < count; i++ ) {
info = UI_GetArenaInfoByNumber( i );

gamebits = GametypeBits( Info_ValueForKey( info, "type") );
if( !( gamebits & matchbits ) ) {
continue;
}

s_startserver.maplist[ s_startserver.nummaps ] = i;
s_startserver.nummaps++;
}
s_startserver.maxpages = (s_startserver.nummaps + MAX_MAPSPERPAGE-1)/MAX_MAPSPERPAGE;
s_startserver.page = 0;
s_startserver.currentmap = 0;

StartServer_Update();
}