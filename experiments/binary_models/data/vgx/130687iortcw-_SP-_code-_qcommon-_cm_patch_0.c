static VAR1 FUN1( vec3_t VAR2, vec3_t VAR3, vec3_t VAR4 ) {
vec3_t VAR5;
vec3_t VAR6;
vec3_t VAR7;
float VAR8;
int VAR9;


for ( VAR9 = 0 ; VAR9 < 3 ; VAR9++ ) {
VAR6[VAR9] = 0.5 * ( VAR2[VAR9] + VAR4[VAR9] );
}


for ( VAR9 = 0 ; VAR9 < 3 ; VAR9++ ) {
VAR5[VAR9] = 0.5 * ( 0.5 * ( VAR2[VAR9] + VAR3[VAR9] ) + 0.5 * ( VAR3[VAR9] + VAR4[VAR9] ) );
}


FUN2( VAR5, VAR6, VAR7 );
VAR8 = FUN3( VAR7 );

return VAR8 >= VAR10;
}