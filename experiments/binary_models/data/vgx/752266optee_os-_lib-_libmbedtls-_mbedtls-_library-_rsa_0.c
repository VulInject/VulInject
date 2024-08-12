static int FUN1( VAR1 *VAR2,
int (*VAR3)(void *, unsigned char *, VAR4),
void *VAR5,
int VAR6,
mbedtls_md_type_t VAR7,
unsigned int VAR8,
const unsigned char *VAR9,
int VAR10,
unsigned char *VAR11 )
{
size_t VAR12;
unsigned char *VAR13 = VAR11;
unsigned char *VAR14 = NULL;
size_t VAR15, VAR16, VAR17, VAR18 = 0;
int VAR19 = VAR20;
size_t VAR21;
const VAR22 *VAR23;
mbedtls_md_context_t VAR24;
FUN2( VAR2 != NULL );
FUN2( VAR6 == VAR25 ||
VAR6 == VAR26 );
FUN2( ( VAR7  == VAR27 &&
VAR8 == 0 ) ||
VAR9 != NULL );
FUN2( VAR11 != NULL );

if( VAR6 == VAR25 && VAR2->VAR28 != VAR29 )
return( VAR30 );

if( VAR3 == NULL )
return( VAR30 );

VAR12 = VAR2->VAR31;

if( VAR7 != VAR27 )
{

VAR23 = FUN3( VAR7 );
if( VAR23 == NULL )
return( VAR30 );

VAR8 = FUN4( VAR23 );
}

VAR23 = FUN3( (VAR32) VAR2->VAR33 );
if( VAR23 == NULL )
return( VAR30 );

VAR17 = FUN4( VAR23 );

if (VAR10 == VAR34)
{

VAR16 = VAR17 - 2;
if( VAR12 < VAR17 + VAR16 + 2 )
return( VAR30 );
else if( VAR12 >= VAR17 + VAR17 + 2 )
VAR15 = VAR17;
else
VAR15 = VAR12 - VAR17 - 2;
}
else if ( (VAR10 < 0) || (VAR10 + VAR17 + 2 > VAR12) )
{
return( VAR30 );
}
else
{
VAR15 = (VAR4) VAR10;
}

memset( VAR11, 0, VAR12 );


VAR21 = FUN5( &VAR2->VAR35 ) - 1;
VAR13 += VAR12 - VAR17 - VAR15 - 2;
*VAR13++ = 0x01;


VAR14 = VAR13;
if( ( VAR19 = FUN6( VAR5, VAR14, VAR15 ) ) != 0 )
return( FUN7( VAR36, VAR19 ) );

VAR13 += VAR15;

FUN8( &VAR24 );
if( ( VAR19 = FUN9( &VAR24, VAR23, 0 ) ) != 0 )
goto VAR37;


if( ( VAR19 = FUN10( &VAR24 ) ) != 0 )
goto VAR37;
if( ( VAR19 = FUN11( &VAR24, VAR13, 8 ) ) != 0 )
goto VAR37;
if( ( VAR19 = FUN11( &VAR24, VAR9, VAR8 ) ) != 0 )
goto VAR37;
if( ( VAR19 = FUN11( &VAR24, VAR14, VAR15 ) ) != 0 )
goto VAR37;
if( ( VAR19 = FUN12( &VAR24, VAR13 ) ) != 0 )
goto VAR37;


if( VAR21 % 8 == 0 )
VAR18 = 1;


if( ( VAR19 = FUN13( VAR11 + VAR18, VAR12 - VAR17 - 1 - VAR18, VAR13, VAR17,
&VAR24 ) ) != 0 )
goto VAR37;

VAR21 = FUN5( &VAR2->VAR35 ) - 1;
VAR11[0] &= 0xFF >> ( VAR12 * 8 - VAR21 );

VAR13 += VAR17;
*VAR13++ = 0xBC;

VAR37:
FUN14( &VAR24 );

if( VAR19 != 0 )
return( VAR19 );

if( VAR2->VAR38.VAR39 == 0)
return( ( VAR6 == VAR26 )
? FUN15(  VAR2, VAR11, VAR11 )
: FUN16( VAR2, NULL, NULL, VAR11, VAR11 ) );
else
return( ( VAR6 == VAR26 )
? FUN15(  VAR2, VAR11, VAR11 )
: FUN16( VAR2, VAR3, VAR5, VAR11, VAR11 ) );
}