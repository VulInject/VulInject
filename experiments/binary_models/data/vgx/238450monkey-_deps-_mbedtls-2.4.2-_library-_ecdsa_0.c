int FUN1( VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5,
const VAR3 *VAR6, const unsigned char *VAR7, size_t VAR8,
int (*VAR9)(void *, unsigned char *, VAR10), void *VAR11 )
{
int VAR12, VAR13, VAR14, VAR15;
mbedtls_ecp_point VAR16;
mbedtls_mpi VAR17, VAR18, VAR19;


if( VAR2->VAR20.VAR21 == NULL )
return( VAR22 );

FUN2( &VAR16 );
FUN3( &VAR17 ); FUN3( &VAR18 ); FUN3( &VAR19 );

VAR14 = 0;
do
{

VAR13 = 0;
do
{
FUN4( FUN5( VAR2, &VAR17, &VAR16, VAR9, VAR11 ) );
FUN4( FUN6( VAR4, &VAR16.VAR23, &VAR2->VAR20 ) );

if( VAR13++ > 10 )
{
VAR12 = VAR24;
goto VAR25;
}
}
while( FUN7( VAR4, 0 ) == 0 );


FUN4( FUN8( VAR2, &VAR18, VAR7, VAR8 ) );


VAR15 = 0;
do
{
size_t VAR26 = ( VAR2->VAR27 + 7 ) / 8;
FUN4( FUN9( &VAR19, VAR26, VAR9, VAR11 ) );
FUN4( FUN10( &VAR19, 8 * VAR26 - VAR2->VAR27 ) );


if( ++VAR15 > 30 )
return( VAR24 );
}
while( FUN7( &VAR19, 1 ) < 0 ||
FUN11( &VAR19, &VAR2->VAR20 ) >= 0 );


FUN4( FUN12( VAR5, VAR4, VAR6 ) );
FUN4( FUN13( &VAR18, &VAR18, VAR5 ) );
FUN4( FUN12( &VAR18, &VAR18, &VAR19 ) );
FUN4( FUN12( &VAR17, &VAR17, &VAR19 ) );
FUN4( FUN14( VAR5, &VAR17, &VAR2->VAR20 ) );
FUN4( FUN12( VAR5, VAR5, &VAR18 ) );
FUN4( FUN6( VAR5, VAR5, &VAR2->VAR20 ) );

if( VAR14++ > 10 )
{
VAR12 = VAR24;
goto VAR25;
}
}
while( FUN7( VAR5, 0 ) == 0 );

VAR25:
FUN15( &VAR16 );
FUN16( &VAR17 ); FUN16( &VAR18 ); FUN16( &VAR19 );

return( VAR12 );
}