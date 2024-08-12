int FUN1( VAR1 *VAR2, const char *VAR3, const char *VAR4,
const unsigned char *VAR5, const unsigned char *VAR6,
size_t VAR7, VAR8 *VAR9 )
{
int VAR10, VAR11;
size_t VAR12;
unsigned char *VAR13;
const unsigned char *VAR14, *VAR15, *VAR16;
( FUN2(VAR17) || FUN2(VAR18) )
unsigned char VAR19[16];
mbedtls_cipher_type_t VAR20 = VAR21;
((void) VAR6);
((void) VAR7);

if( VAR2 == NULL )
return( VAR22 );

VAR14 = (unsigned char *) strstr( (const char *) VAR5, VAR3 );

if( VAR14 == NULL )
return( VAR23 );

VAR15 = (unsigned char *) strstr( (const char *) VAR5, VAR4 );

if( VAR15 == NULL || VAR15 <= VAR14 )
return( VAR23 );

VAR14 += strlen( VAR3 );
if( *VAR14 == ''  ) VAR14++;
if( *VAR14 == '' ) VAR14++;
if( *VAR14 == '' ) VAR14++;
else return( VAR23 );

VAR16 = VAR15;
VAR16 += strlen( VAR4 );
if( *VAR16 == ''  ) VAR16++;
if( *VAR16 == '' ) VAR16++;
if( *VAR16 == '' ) VAR16++;
*VAR9 = VAR16 - VAR5;

VAR11 = 0;

if( VAR15 - VAR14 >= 22 && memcmp( VAR14, "", 22 ) == 0 )
{
( FUN2(VAR17) || FUN2(VAR18) )
VAR11++;

VAR14 += 22;
if( *VAR14 == '' ) VAR14++;
if( *VAR14 == '' ) VAR14++;
else return( VAR24 );


if( VAR15 - VAR14 >= 23 && memcmp( VAR14, "", 23 ) == 0 )
{
VAR20 = VAR25;

VAR14 += 23;
if( VAR15 - VAR14 < 16 || FUN3( VAR14, VAR19, 8 ) != 0 )
return( VAR26 );

VAR14 += 16;
}
else if( VAR15 - VAR14 >= 18 && memcmp( VAR14, "", 18 ) == 0 )
{
VAR20 = VAR27;

VAR14 += 18;
if( VAR15 - VAR14 < 16 || FUN3( VAR14, VAR19, 8) != 0 )
return( VAR26 );

VAR14 += 16;
}

if( VAR15 - VAR14 >= 14 && memcmp( VAR14, "", 14 ) == 0 )
{
if( VAR15 - VAR14 < 22 )
return( VAR28 );
else if( memcmp( VAR14, "", 22 ) == 0 )
VAR20 = VAR29;
else if( memcmp( VAR14, "", 22 ) == 0 )
VAR20 = VAR30;
else if( memcmp( VAR14, "", 22 ) == 0 )
VAR20 = VAR31;
else
return( VAR28 );

VAR14 += 22;
if( VAR15 - VAR14 < 32 || FUN3( VAR14, VAR19, 16 ) != 0 )
return( VAR26 );

VAR14 += 32;
}

if( VAR20 == VAR21 )
return( VAR28 );

if( *VAR14 == '' ) VAR14++;
if( *VAR14 == '' ) VAR14++;
else return( VAR24 );
return( VAR32 );
}

if( VAR14 >= VAR15 )
return( VAR24 );

VAR10 = FUN4( NULL, 0, &VAR12, VAR14, VAR15 - VAR14 );

if( VAR10 == VAR33 )
return( FUN5( VAR24, VAR10 ) );

if( ( VAR13 = FUN6( 1, VAR12 ) ) == NULL )
return( VAR34 );

if( ( VAR10 = FUN4( VAR13, VAR12, &VAR12, VAR14, VAR15 - VAR14 ) ) != 0 )
{
FUN7( VAR13, VAR12 );
FUN8( VAR13 );
return( FUN5( VAR24, VAR10 ) );
}

if( VAR11 != 0 )
{
( FUN2(VAR17) || FUN2(VAR18) )
if( VAR6 == NULL )
{
FUN7( VAR13, VAR12 );
FUN8( VAR13 );
return( VAR35 );
}

VAR10 = 0;

if( VAR20 == VAR25 )
VAR10 = FUN9( VAR19, VAR13, VAR12, VAR6, VAR7 );
else if( VAR20 == VAR27 )
VAR10 = FUN10( VAR19, VAR13, VAR12, VAR6, VAR7 );

if( VAR20 == VAR29 )
VAR10 = FUN11( VAR19, 16, VAR13, VAR12, VAR6, VAR7 );
else if( VAR20 == VAR30 )
VAR10 = FUN11( VAR19, 24, VAR13, VAR12, VAR6, VAR7 );
else if( VAR20 == VAR31 )
VAR10 = FUN11( VAR19, 32, VAR13, VAR12, VAR6, VAR7 );

if( VAR10 != 0 )
{
FUN8( VAR13 );
return( VAR10 );
}


if( VAR12 <= 2 || VAR13[0] != 0x30 || VAR13[1] > 0x83 )
{
FUN7( VAR13, VAR12 );
FUN8( VAR13 );
return( VAR36 );
}
FUN7( VAR13, VAR12 );
FUN8( VAR13 );
return( VAR32 );
}

VAR2->VAR13 = VAR13;
VAR2->VAR37 = VAR12;

return( 0 );
}