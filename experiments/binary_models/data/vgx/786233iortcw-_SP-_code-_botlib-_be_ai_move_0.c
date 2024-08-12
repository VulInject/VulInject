int FUN1( vec3_t VAR1, vec3_t VAR2, vec3_t VAR3, vec3_t VAR4, float *VAR5 ) {
vec3_t VAR6, VAR7;
float VAR8;
int VAR9;

FUN2( VAR1, VAR6 );
FUN3( VAR2, 0.1, VAR7 );
for ( VAR9 = 0; VAR9 < 50; VAR9++ )
{
VAR7[2] -= VAR10 * 0.01;

if ( VAR7[2] < 0 && VAR6[2] + VAR7[2] < VAR3[2] ) {
FUN3( VAR7, ( VAR3[2] - VAR6[2] ) / VAR7[2], VAR7 );
FUN4( VAR6, VAR7, VAR6 );
FUN5( VAR3, VAR6, VAR4 );
VAR8 = FUN6( VAR4 );
if ( VAR8 > 32 ) {
VAR8 = 32;
}
*VAR5 = 400 - ( 400 - 13 * VAR8 );
return VAR11;
} 
else
{
FUN4( VAR6, VAR7, VAR6 );
} 
} 
FUN7( VAR4, 0, 0, 0 );
*VAR5 = 400;
return VAR12;
}