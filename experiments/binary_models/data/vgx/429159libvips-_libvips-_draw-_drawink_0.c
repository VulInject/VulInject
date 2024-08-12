int
FUN1( VAR1 *VAR2, int VAR3, int VAR4, int VAR5 )
{
VAR6 *VAR7 = (VAR6 *) VAR2;

VAR8 *VAR9;
int VAR10;
int VAR11;

FUN2( VAR4 <= VAR5 );

if( VAR3 < 0 || 
VAR3 >= VAR7->VAR12->VAR13 )
return( 0 );
if( VAR4 < 0 && 
VAR5 < 0 )
return( 0 );
if( VAR4 >= VAR7->VAR12->VAR14 && 
VAR5 >= VAR7->VAR12->VAR14 )
return( 0 );
VAR4 = FUN3( 0, VAR4, VAR7->VAR12->VAR14 - 1 );
VAR5 = FUN3( 0, VAR5, VAR7->VAR12->VAR14 - 1 );

VAR9 = FUN4( VAR7->VAR12, VAR4, VAR3 );
VAR11 = VAR5 - VAR4 + 1;

for( VAR10 = 0; VAR10 < VAR11; VAR10++ ) {
FUN5( VAR2, VAR9 );
VAR9 += VAR7->VAR15;
}

return( 0 );
}