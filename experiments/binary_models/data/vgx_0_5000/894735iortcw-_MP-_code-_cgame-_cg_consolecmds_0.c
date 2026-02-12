void CG_StartCamera( const char *name, qboolean startBlack ) {
char lname[MAX_QPATH];

if ( cgs.gametype != GT_SINGLE_PLAYER ) {
return;
}

COM_StripExtension( name, lname, sizeof( lname ) );    
Q_strcat( lname, sizeof( lname ), ".camera" );

if ( trap_loadCamera( CAM_PRIMARY, va( "cameras/%s", lname ) ) ) {
cg.cameraMode = qtrue;				
if ( startBlack ) {
CG_Fade( 0, 0, 0, 255, 0 );		
}
trap_Cvar_Set( "cg_letterbox", "1" ); 
trap_SendClientCommand( "startCamera" );	
trap_startCamera( CAM_PRIMARY, cg.time );	
} else {


if ( trap_loadCamera( CAM_PRIMARY, name ) ) {
cg.cameraMode = qtrue;
trap_SendClientCommand( "startCamera" );
trap_startCamera( CAM_PRIMARY, cg.time );
return;
}

cg.cameraMode = qfalse;
trap_SendClientCommand( "stopCamera" );
CG_Fade( 0, 0, 0, 0, 0 );             
trap_Cvar_Set( "cg_letterbox", "0" );
CG_Printf( "Unable to load camera %s\n",lname );
}
}