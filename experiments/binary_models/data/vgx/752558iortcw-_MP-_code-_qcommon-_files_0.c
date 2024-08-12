int	FUN1( const char *VAR1, VAR2 *VAR3, fsMode_t VAR4 ) {
int VAR5;
qboolean VAR6;

VAR6 = VAR7;

switch( VAR4 ) {
case VAR8:
VAR5 = FUN2( VAR1, VAR3, VAR9 );
break;
case VAR10:
*VAR3 = FUN3( VAR1 );
VAR5 = 0;
if (*VAR3 == 0) {
VAR5 = -1;
}
break;
case VAR11:
VAR6 = VAR9;
case VAR12:
*VAR3 = FUN4( VAR1 );
VAR5 = 0;
if (*VAR3 == 0) {
VAR5 = -1;
}
break;
default:
FUN5( VAR13, "" );
return -1;
}

if (!VAR3) {
return VAR5;
}

if ( *VAR3 ) {
VAR14[*VAR3].VAR15 = VAR5;
}
VAR14[*VAR3].VAR16 = VAR6;

return VAR5;
}