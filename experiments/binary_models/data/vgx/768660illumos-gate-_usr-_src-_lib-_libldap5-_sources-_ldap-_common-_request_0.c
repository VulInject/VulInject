int
FUN1( VAR1 *VAR2, int VAR3, unsigned long VAR4,
char *VAR5, VAR6 *VAR7 )
{
VAR8	*VAR9;

FUN2( VAR10, "", 0,0,0 );

FUN3( VAR2, VAR11 );
if (( VAR2->VAR12 & VAR13 ) != 0 && FUN4( VAR5 )) {
if (( VAR9 = FUN5( VAR2, VAR5 )) == NULL ) {
FUN6( VAR7, 1 );
FUN7( VAR2, VAR11 );
return( -1 );
}

if ( VAR14 & VAR10 ) {
VAR8	*VAR15;
char    VAR16[256];

for ( VAR15 = VAR9; VAR15 != NULL;
VAR15 = VAR15->VAR17 ) {
sprintf( VAR16,
"",
VAR15->VAR18, ( VAR15->VAR19 == NULL ) ?
"" : VAR15->VAR19,
VAR15->VAR20 );
FUN8( VAR16 );
}
}
} else {

VAR9 = NULL;
}
FUN7( VAR2, VAR11 );

return( FUN9( VAR2, VAR7, VAR3, NULL,
VAR9, NULL, ( VAR4 == VAR21 ) ? VAR5 : NULL, 0 ));
}