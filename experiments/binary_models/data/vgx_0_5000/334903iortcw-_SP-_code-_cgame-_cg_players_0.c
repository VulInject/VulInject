static qboolean CG_ParseGibModels( const char *filename, clientInfo_t *ci ) {
char        *text_p;
int len;
int i;
char        *token;
fileHandle_t f;

memset( ci->gibModels, 0, sizeof( ci->gibModels ) );


len = trap_FS_FOpenFile( filename, &f, FS_READ );
if ( len <= 0 ) {
return qfalse;
}
if ( len >= sizeof( text ) - 1 ) {
CG_Printf( "File %s too long\n", filename );
trap_FS_FCloseFile( f );
return qfalse;
}
trap_FS_Read( text, len, f );
text[len] = 0;
trap_FS_FCloseFile( f );


text_p = text;

for ( i = 0; i < MAX_GIB_MODELS; i++ ) {
token = COM_Parse( &text_p );
if ( !token[0] ) {
break;
}

ci->gibModels[i] = trap_R_RegisterModel( token );
}

return qtrue;
}