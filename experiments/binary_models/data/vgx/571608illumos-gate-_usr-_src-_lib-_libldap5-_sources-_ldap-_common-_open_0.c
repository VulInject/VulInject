VAR1
FUN1( VAR2 *VAR3 )
{
if ( NULL != VAR3 )
{
memset( VAR3, 0, sizeof(*VAR3) );
VAR3->VAR4 = (int)(VAR5 * 100);
VAR3->VAR6 = VAR7 * 100;
VAR3->VAR8 = VAR9 * 100;


VAR3->VAR10 = VAR11;
VAR3->VAR10 = 128;

}
return (int)(VAR5 * 100);
}



VAR12 *
VAR1
FUN2( const char *VAR13, int VAR14 )
{
VAR12	*VAR15;

FUN3( VAR16, "", 0, 0, 0 );

if (( VAR15 = FUN4( VAR13, VAR14 )) == NULL ) {
return( NULL );
}

FUN5( VAR15, VAR17 );
if ( FUN6( VAR15 ) < 0 ) {
FUN7( VAR15, VAR17 );
FUN8( VAR15, NULL, NULL, 0 );
return( NULL );
}

FUN7( VAR15, VAR17 );
FUN3( VAR16, "",
( VAR15->VAR18 == NULL ) ? "" : VAR15->VAR18, 0, 0 );

return( VAR15 );
}