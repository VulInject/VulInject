VAR1   FUN1( VAR2 *VAR3 ) {
int VAR4;
vec3_t VAR5, VAR6, VAR7;
vec_t VAR8;

VAR8 = 0;
for ( VAR4 = 2 ; VAR4 < VAR3->VAR9 ; VAR4++ )
{
FUN2( VAR3->VAR10[VAR4 - 1], VAR3->VAR10[0], VAR5 );
FUN2( VAR3->VAR10[VAR4], VAR3->VAR10[0], VAR6 );
FUN3( VAR5, VAR6, VAR7 );
VAR8 += 0.5 * FUN4( VAR7 );
}
return VAR8;
}