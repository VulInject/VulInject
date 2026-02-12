static void CG_DrawDisconnect( void ) {
float		x, y;
int			cmdNum;
usercmd_t	cmd;
const char		*s;
int			w;


cmdNum = trap_GetCurrentCmdNumber() - CMD_BACKUP + 1;
trap_GetUserCmd( cmdNum, &cmd );
if ( cmd.serverTime <= cg.snap->ps.commandTime
|| cmd.serverTime > cg.time ) {	
return;
}


s = "Connection Interrupted";
w = CG_DrawStrlen( s ) * BIGCHAR_WIDTH;
CG_DrawBigString( 320 - w/2, 100, s, 1.0F);


if ( ( cg.time >> 9 ) & 1 ) {
return;
}

x = 640 - 48;
y = 480 - 144;
x = 640 - 48;
y = 480 - 48;

CG_DrawPic( x, y, 48, 48, trap_R_RegisterShader("gfx/2d/net.tga" ) );
}