void Cvar_WriteVariables(fileHandle_t f)
{
cvar_t	*var;
char	buffer[1024];

for (var = cvar_vars; var; var = var->next)
{
if(!var->name || Q_stricmp( var->name, "cl_cdkey" ) == 0)
continue;

if( var->flags & CVAR_ARCHIVE ) {

if ( var->latchedString ) {
if( strlen( var->name ) + strlen( var->latchedString ) + 10 > sizeof( buffer ) ) {
Com_Printf( S_COLOR_YELLOW "WARNING: value of variable "
"\"%s\" too long to write to file\n", var->name );
continue;
}
Com_sprintf (buffer, sizeof(buffer), "seta %s \"%s\"\n", var->name, var->latchedString);
} else {
if( strlen( var->name ) + strlen( var->string ) + 10 > sizeof( buffer ) ) {
Com_Printf( S_COLOR_YELLOW "WARNING: value of variable "
"\"%s\" too long to write to file\n", var->name );
continue;
}
Com_sprintf (buffer, sizeof(buffer), "seta %s \"%s\"\n", var->name, var->string);
}
FS_Write( buffer, strlen( buffer ), f );
}
}
}