int FUN1( VAR1 *VAR2,
int VAR3,
size_t VAR4,
unsigned char VAR5[16],
const unsigned char *VAR6,
unsigned char *VAR7 )
{
int VAR8;
int VAR9 = VAR10;
unsigned char VAR11[16];

FUN2( VAR2 != NULL );
FUN2( VAR3 == VAR12 ||
VAR3 == VAR13 );
FUN2( VAR5 != NULL );
FUN2( VAR6 != NULL );
FUN2( VAR7 != NULL );

if( VAR4 % 16 )
return( VAR14 );

if( VAR15 )
{
if( FUN3( VAR2, VAR3, VAR4, VAR5, VAR6, VAR7 ) == 0 )
return( 0 );




}

if( VAR3 == VAR13 )
{
while( VAR4 > 0 )
{
memcpy( VAR11, VAR6, 16 );
VAR9 = FUN4( VAR2, VAR3, VAR6, VAR7 );
if( VAR9 != 0 )
goto VAR16;

for( VAR8 = 0; VAR8 < 16; VAR8++ )
VAR7[VAR8] = (unsigned char)( VAR7[VAR8] ^ VAR5[VAR8] );

memcpy( VAR5, VAR11, 16 );

VAR6  += 16;
VAR7 += 16;
VAR4 -= 16;
}
}
else
{
while( VAR4 > 0 )
{
for( VAR8 = 0; VAR8 < 16; VAR8++ )
VAR7[VAR8] = (unsigned char)( VAR6[VAR8] ^ VAR5[VAR8] );

VAR9 = FUN4( VAR2, VAR3, VAR7, VAR7 );
if( VAR9 != 0 )
goto VAR16;
memcpy( VAR5, VAR7, 16 );

VAR6  += 16;
VAR7 += 16;
VAR4 -= 16;
}
}
VAR9 = 0;

VAR16:
return( VAR9 );
}