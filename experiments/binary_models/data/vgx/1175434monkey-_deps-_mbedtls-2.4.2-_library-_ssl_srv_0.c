static int FUN1( VAR1 *VAR2 )
{
int VAR3 = VAR4;
const VAR5 *VAR6 = VAR2->VAR7->VAR6;
size_t VAR8, VAR9; 
size_t VAR10, VAR11; 
unsigned char *VAR12, *VAR13;
const unsigned char * const VAR14 = VAR2->VAR15 + VAR16;
const VAR17 *VAR18;
int VAR19;

FUN2( 2, ( "" ) );

VAR2->VAR20++;

if( VAR2->VAR21->VAR22 != VAR23 )
VAR19 = VAR2->VAR21->VAR22;
else
VAR19 = VAR2->VAR24->VAR19;

if( VAR6->VAR25 == VAR26 ||
VAR6->VAR25 == VAR27 ||
VAR6->VAR25 == VAR28 ||
VAR6->VAR25 == VAR29 ||
VAR6->VAR25 == VAR30 ||
VAR19 == VAR31 )
{
FUN2( 2, ( "" ) );
return( 0 );
}


VAR12 = VAR2->VAR15;
VAR13 = VAR12 + 4;


VAR10 = 0;

VAR13[1 + VAR10++] = VAR32;
VAR13[1 + VAR10++] = VAR33;

VAR13[0] = (unsigned char) VAR10++;
VAR13 += VAR10;

VAR11 = 0;

if( VAR2->VAR34 == VAR35 )
{
const int *VAR36;


for( VAR36 = VAR2->VAR24->VAR37; *VAR36 != VAR38; VAR36++ )
{
unsigned char VAR39 = FUN3( *VAR36 );

if( VAR40 == VAR39 || FUN4( VAR2, VAR39 ) )
continue;

VAR13[2 + VAR11++] = VAR39;
VAR13[2 + VAR11++] = VAR41;
VAR13[2 + VAR11++] = VAR39;
VAR13[2 + VAR11++] = VAR42;
}

VAR13[0] = (unsigned char)( VAR11 >> 8 );
VAR13[1] = (unsigned char)( VAR11      );
VAR11 += 2;
VAR13 += VAR11;
}


VAR13 += 2;
if( VAR2->VAR21->VAR43 != NULL )
VAR18 = VAR2->VAR21->VAR43;
else
VAR18 = VAR2->VAR24->VAR44;

VAR9 = 0;
while( VAR18 != NULL && VAR18->VAR45 != 0 )
{
VAR8 = VAR18->VAR46.VAR47;

if( VAR14 < VAR13 ||
(VAR48)( VAR14 - VAR13 ) < VAR8 ||
(VAR48)( VAR14 - VAR13 ) < 2 + VAR8 )
{
FUN2( 1, ( "" ) );
break;
}

*VAR13++ = (unsigned char)( VAR8 >> 8 );
*VAR13++ = (unsigned char)( VAR8      );
memcpy( VAR13, VAR18->VAR46.VAR13, VAR8 );
VAR13 += VAR8;

FUN5( 3, "", VAR13 - VAR8, VAR8 );

VAR9 += 2 + VAR8;
VAR18 = VAR18->VAR49;
}

VAR2->VAR50  = VAR13 - VAR12;
VAR2->VAR51 = VAR52;
VAR2->VAR15[0]  = VAR53;
VAR2->VAR15[4 + VAR10 + VAR11] = (unsigned char)( VAR9  >> 8 );
VAR2->VAR15[5 + VAR10 + VAR11] = (unsigned char)( VAR9       );

VAR3 = FUN6( VAR2 );

FUN2( 2, ( "" ) );

return( VAR3 );
}