void    Cvar_Update( vmCvar_t *vmCvar ) {
cvar_t  *cv = NULL;
assert( vmCvar );

if ( (unsigned)vmCvar->handle >= cvar_numIndexes ) {
Com_Error( ERR_DROP, "Cvar_Update: handle out of range" );
}

cv = cvar_indexes + vmCvar->handle;

if ( cv->modificationCount == vmCvar->modificationCount ) {
return;
}
if ( !cv->string ) {
return;     
}
vmCvar->modificationCount = cv->modificationCount;
if ( strlen( cv->string ) + 1 > MAX_CVAR_VALUE_STRING )
Com_Error( ERR_DROP, "Cvar_Update: src %s length %u exceeds MAX_CVAR_VALUE_STRING",
cv->string,
(unsigned int) strlen(cv->string));
Q_strncpyz( vmCvar->string, cv->string,  MAX_CVAR_VALUE_STRING );

vmCvar->value = cv->value;
vmCvar->integer = cv->integer;
}