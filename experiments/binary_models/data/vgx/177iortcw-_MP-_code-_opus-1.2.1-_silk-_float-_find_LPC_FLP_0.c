void FUN1(
VAR1              *VAR2,                            
opus_int16                      VAR3[],                         
const silk_float                VAR4[],                                
const silk_float                VAR5                          
)
{
opus_int    VAR6, VAR7;
silk_float  VAR8[ VAR9 ];


silk_float  VAR10, VAR11, VAR12;
opus_int16  VAR13[ VAR9 ];
silk_float  VAR14[ VAR9 ];
silk_float  VAR15[ VAR16 + VAR17 * VAR9 ];

VAR7 = VAR2->VAR7 + VAR2->VAR18;


VAR2->VAR19.VAR20 = 4;


VAR10 = FUN2( VAR8, VAR4, VAR5, VAR7, VAR2->VAR21, VAR2->VAR18 );

if( VAR2->VAR22 && !VAR2->VAR23 && VAR2->VAR21 == VAR17 ) {


VAR10 -= FUN2( VAR14, VAR4 + ( VAR17 / 2 ) * VAR7, VAR5, VAR7, VAR17 / 2, VAR2->VAR18 );


FUN3( VAR3, VAR14, VAR2->VAR18 );


VAR11 = VAR24;
for( VAR6 = 3; VAR6 >= 0; VAR6-- ) {

FUN4( VAR13, VAR2->VAR25, VAR3, VAR6, VAR2->VAR18 );


FUN5( VAR14, VAR13, VAR2->VAR18, VAR2->VAR26 );


FUN6( VAR15, VAR14, VAR4, 2 * VAR7, VAR2->VAR18 );
VAR12 = (VAR27)(
FUN7( VAR15 + VAR2->VAR18,                VAR7 - VAR2->VAR18 ) +
FUN7( VAR15 + VAR2->VAR18 + VAR7, VAR7 - VAR2->VAR18 ) );


if( VAR12 < VAR10 ) {

VAR10 = VAR12;
VAR2->VAR19.VAR20 = (VAR28)VAR6;
} else if( VAR12 > VAR11 ) {

break;
}
VAR11 = VAR12;
}
}

if( VAR2->VAR19.VAR20 == 4 ) {

FUN3( VAR3, VAR8, VAR2->VAR18 );
}

FUN8( VAR2->VAR19.VAR20 == 4 ||
( VAR2->VAR22 && !VAR2->VAR23 && VAR2->VAR21 == VAR17 ) );
}