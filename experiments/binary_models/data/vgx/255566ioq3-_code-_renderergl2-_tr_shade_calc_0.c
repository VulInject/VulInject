static void FUN1( void ) {
int		VAR1;
int		VAR2;
float	*VAR3;
vec3_t	VAR4, VAR5;
float	VAR6;
vec3_t	VAR7, VAR8;
vec3_t	VAR9, VAR10;

if ( VAR11.VAR12 & 3 ) {
VAR13.FUN2( VAR14, "", VAR11.VAR15->VAR16 );
}
if ( VAR11.VAR17 != ( VAR11.VAR12 >> 2 ) * 6 ) {
VAR13.FUN2( VAR14, "", VAR11.VAR15->VAR16 );
}

VAR2 = VAR11.VAR12;
VAR11.VAR12 = 0;
VAR11.VAR17 = 0;
VAR11.VAR18 = 0;

if ( VAR19.VAR20 != &VAR21.VAR22 ) {
FUN3( VAR19.VAR23.or.VAR24[1], VAR9 );
FUN3( VAR19.VAR23.or.VAR24[2], VAR10 );
} else {
FUN4( VAR19.VAR23.or.VAR24[1], VAR9 );
FUN4( VAR19.VAR23.or.VAR24[2], VAR10 );
}

for ( VAR1 = 0 ; VAR1 < VAR2 ; VAR1+=4 ) {
vec4_t VAR25;

VAR3 = VAR11.VAR3[VAR1];

VAR4[0] = 0.25f * (VAR3[0] + VAR3[4] + VAR3[8] + VAR3[12]);
VAR4[1] = 0.25f * (VAR3[1] + VAR3[5] + VAR3[9] + VAR3[13]);
VAR4[2] = 0.25f * (VAR3[2] + VAR3[6] + VAR3[10] + VAR3[14]);

FUN5( VAR3, VAR4, VAR5 );
VAR6 = FUN6( VAR5 ) * 0.707f;		

FUN7( VAR9, VAR6, VAR7 );
FUN7( VAR10, VAR6, VAR8 );

if ( VAR19.VAR23.VAR26 ) {
FUN5( VAR27, VAR7, VAR7 );
}


if ( VAR19.VAR20->VAR28.VAR29 ) {
float VAR30;
VAR30 = FUN6( VAR19.VAR20->VAR28.VAR24[0] );
if ( !VAR30 ) {
VAR30 = 0;
} else {
VAR30 = 1.0f / VAR30;
}
FUN7(VAR7, VAR30, VAR7);
FUN7(VAR8, VAR30, VAR8);
}

FUN8(VAR11.VAR25[VAR1], 1.0f / 65535.0f, VAR25);
FUN9( VAR4, VAR7, VAR8, VAR25 );
}
}