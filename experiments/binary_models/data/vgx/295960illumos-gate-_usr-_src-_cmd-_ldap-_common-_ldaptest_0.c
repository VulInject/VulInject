static VAR1 **
FUN1( char *VAR2, char *VAR3, char *VAR4 )
{
static char	VAR5[256];
int		VAR6;
LDAPMod		VAR7;
VAR1		**VAR8;
struct VAR9	**VAR10;

VAR6 = 0;
VAR8 = NULL;
while ( 1 ) {
if ( VAR2 ) {
FUN2( VAR5, sizeof(VAR5), stdin, VAR2 );
VAR7.VAR11 = FUN3( VAR5 );

if ( VAR7.VAR11 == -1 || VAR5[0] == '' )
break;
}

FUN2( VAR5, sizeof(VAR5), stdin, VAR3 );
if ( VAR5[0] == '' )
break;
VAR7.VAR12 = strdup( VAR5 );

VAR7.VAR13 = FUN4( VAR4 );
if ( VAR7.VAR13 != NULL ) {
int	VAR14;

for ( VAR14 = 0; VAR7.VAR13[VAR14] != NULL; ++VAR14 )
;
VAR10 = (struct VAR9 **)calloc( VAR14 + 1,
sizeof( struct VAR9 *));
for ( VAR14 = 0; VAR7.VAR13[VAR14] != NULL; ++VAR14 ) {
VAR10[VAR14] = (struct VAR9 *)malloc(
sizeof( struct VAR9 ));
if ( FUN5( VAR7.VAR13[VAR14], "",
6 ) == 0 ) {
if ( FUN6( VAR7.VAR13[VAR14] + 6,
VAR10[VAR14] ) < 0 ) {
return( NULL );
}
} else {
VAR10[VAR14]->VAR15 = VAR7.VAR13[VAR14];
VAR10[VAR14]->VAR16 =
strlen( VAR7.VAR13[VAR14] );
}
}
VAR7.VAR17 = VAR10;
VAR7.VAR11 |= VAR18;
}

if ( VAR8 == NULL )
VAR8 = (VAR1 **) malloc( sizeof(VAR1 *) );
else
VAR8 = (VAR1 **) realloc( VAR8,
sizeof(VAR1 *) * (VAR6 + 1) );

VAR8[VAR6] = (VAR1 *) malloc( sizeof(VAR1) );
*(VAR8[VAR6]) = VAR7;	
VAR6++;
}
if ( VAR8 == NULL )
return( NULL );
VAR8 = (VAR1 **) realloc( VAR8, sizeof(VAR1 *) * (VAR6 + 1) );
VAR8[VAR6] = NULL;

return( VAR8 );
}