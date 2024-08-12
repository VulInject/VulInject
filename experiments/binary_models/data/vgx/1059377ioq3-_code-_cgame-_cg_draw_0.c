static void FUN1(void)
{
float		VAR1, VAR2;
qhandle_t	VAR3;
float		VAR4;
float		VAR5, VAR6;
int			VAR7;

if ( !VAR8.VAR9 ) {
return;
}

if ( VAR10.VAR11->VAR12.VAR13[VAR14] == VAR15) {
return;
}

if ( VAR10.VAR16 ) {
return;
}


if ( VAR17.VAR9 ) {
vec4_t		VAR18;

FUN2( VAR18 );
FUN3( VAR18 );
} else {
FUN3( NULL );
}

VAR1 = VAR2 = VAR19.VAR20;


VAR4 = VAR10.VAR21 - VAR10.VAR22;
if ( VAR4 > 0 && VAR4 < VAR23 ) {
VAR4 /= VAR23;
VAR1 *= ( 1 + VAR4 );
VAR2 *= ( 1 + VAR4 );
}

VAR5 = VAR24.VAR9;
VAR6 = VAR25.VAR9;
FUN4( &VAR5, &VAR6, &VAR1, &VAR2 );

VAR7 = VAR8.VAR9;
if (VAR7 < 0) {
VAR7 = 0;
}
VAR3 = VAR26.VAR27.VAR28[ VAR7 % VAR29 ];

FUN5( VAR5 + VAR10.VAR30.VAR5 + 0.5 * (VAR10.VAR30.VAR31 - VAR1), 
VAR6 + VAR10.VAR30.VAR6 + 0.5 * (VAR10.VAR30.VAR32 - VAR2), 
VAR1, VAR2, 0, 0, 1, 1, VAR3 );

FUN3( NULL );
}