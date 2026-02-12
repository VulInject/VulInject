void SV_SendMoveSpeedsToGame( int entnum, char *text ) {
if ( !gvm ) {
return;
}

if ( VM_IsNative( gvm ) ) {
VM_Call( gvm, GAME_RETRIEVE_MOVESPEEDS_FROM_CLIENT, entnum, text );
} else {
unsigned gText = 0;
int	textLen = 0;

if ( text && strlen( text ) ) {
textLen = strlen( text ) + 1;


gText = VM_GetTempMemory( gvm, textLen, text );

if ( !gText ) {
Com_Printf("WARNING: SV_SendMoveSpeedsToGame: Not enough game QVM memory (increase vm_minQvmHunkMegs cvar).\n");
return;
}
}

VM_Call( gvm, GAME_RETRIEVE_MOVESPEEDS_FROM_CLIENT, entnum, gText );


if ( gText ) {
VM_FreeTempMemory( gvm, gText, textLen, text );
}
}
}