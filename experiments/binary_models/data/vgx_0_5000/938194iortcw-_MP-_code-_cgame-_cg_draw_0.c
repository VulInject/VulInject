static void CG_DrawDisconnect( void ) {
float x, y;
int cmdNum;
usercmd_t cmd;
const char      *s;
int w;


cmdNum = trap_GetCurrentCmdNumber() - CMD_BACKUP + 1;
trap_GetUserCmd( cmdNum, &cmd );
if ( cmd.serverTime <= cg.snap->ps.commandTime
|| cmd.serverTime > cg.time ) { 
return;
}

if ( cg_fixedAspect.integer ) {
CG_SetScreenPlacement(PLACE_CENTER, PLACE_CENTER);
}


s = CG_TranslateString( "Connection Interrupted" );
w = CG_DrawStrlen( s ) * BIGCHAR_WIDTH;
CG_DrawBigString( 320 - w / 2, 100, s, 1.0F );


if ( ( cg.time >> 9 ) & 1 ) {
return;
}

if ( cg_fixedAspect.integer == 2 && !cg.limboMenu ) {
CG_SetScreenPlacement(PLACE_RIGHT, PLACE_BOTTOM);
}

x = 640 - 52;
y = 480 - 140;

CG_DrawPic( x, y, 48, 48, trap_R_RegisterShader( "gfx/2d/net.tga" ) );
}