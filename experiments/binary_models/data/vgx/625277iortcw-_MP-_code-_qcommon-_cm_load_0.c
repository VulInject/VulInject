void FUN1( VAR1 *VAR2 ) {
int VAR3, VAR4;
VAR5    *VAR6;
VAR7    *VAR8;
int VAR9;
int VAR10;

VAR8 = ( void * )( VAR11 + VAR2->VAR12 );
if ( VAR2->VAR13 % sizeof( *VAR8 ) ) {
FUN2( VAR14, "" );
}
VAR9 = VAR2->VAR13 / sizeof( *VAR8 );

if ( VAR9 < 1 ) {
FUN2( VAR14, "" );
}
VAR15.VAR16 = FUN3( ( VAR17 + VAR9 ) * sizeof( *VAR15.VAR16 ), VAR18 );
VAR15.VAR19 = VAR9;

VAR6 = VAR15.VAR16;

for ( VAR3 = 0 ; VAR3 < VAR9 ; VAR3++, VAR8++, VAR6++ )
{
VAR10 = 0;
for ( VAR4 = 0 ; VAR4 < 3 ; VAR4++ )
{
VAR6->VAR20[VAR4] = FUN4( VAR8->VAR20[VAR4] );
if ( VAR6->VAR20[VAR4] < 0 ) {
VAR10 |= 1 << VAR4;
}
}

VAR6->VAR21 = FUN4( VAR8->VAR21 );
VAR6->VAR22 = FUN5( VAR6->VAR20 );
VAR6->VAR23 = VAR10;
}
}