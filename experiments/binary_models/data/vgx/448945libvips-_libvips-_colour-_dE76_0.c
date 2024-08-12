FUN1( VAR1, VAR2, VAR3 );


float
FUN2( float VAR4, float VAR5, float VAR6, float VAR7, float VAR8, float VAR9 )
{
float VAR10 = VAR4 - VAR7;
float VAR11 = VAR5 - VAR8;
float VAR12 = VAR6 - VAR9;

return( FUN3( VAR10 * VAR10 + VAR11 * VAR11 + VAR12 * VAR12 ) );
}