void FUN1(
VAR1              *VAR2,                                
opus_int16                      VAR3[],                             
const opus_int16                VAR4[],                                    
const opus_int32                VAR5                          
)
{
opus_int     VAR6, VAR7;
opus_int32   VAR8[ VAR9 ];
opus_int     VAR10, VAR11;
opus_int32   VAR12, VAR13;
opus_int     VAR14, VAR15;


opus_int32   VAR16[ VAR9 ], VAR17, VAR18, VAR19;
opus_int     VAR20, VAR21, VAR22;
opus_int16   VAR23[ VAR9 ];
opus_int16   VAR24[ VAR9 ];
VAR25;

VAR7 = VAR2->VAR7 + VAR2->VAR26;


VAR2->VAR27.VAR28 = 4;


FUN2( &VAR18, &VAR21, VAR8, VAR4, VAR5, VAR7, VAR2->VAR29, VAR2->VAR26, VAR2->VAR30 );

if( VAR2->VAR31 && !VAR2->VAR32 && VAR2->VAR29 == VAR33 ) {
FUN3( VAR34, VAR35 );


FUN2( &VAR19, &VAR22, VAR16, VAR4 + 2 * VAR7, VAR5, VAR7, 2, VAR2->VAR26, VAR2->VAR30 );



VAR11 = VAR22 - VAR21;
if( VAR11 >= 0 ) {
if( VAR11 < 32 ) {
VAR18 = VAR18 - FUN4( VAR19, VAR11 );
}
} else {
FUN5( VAR11 > -32 );
VAR18   = FUN4( VAR18, -VAR11 ) - VAR19;
VAR21 = VAR22;
}


FUN6( VAR3, VAR16, VAR2->VAR26 );

FUN7( VAR35, 2 * VAR7, VAR34 );


for( VAR6 = 3; VAR6 >= 0; VAR6-- ) {

FUN8( VAR24, VAR2->VAR36, VAR3, VAR6, VAR2->VAR26 );


FUN9( VAR23, VAR24, VAR2->VAR26, VAR2->VAR30 );


FUN10( VAR35, VAR4, VAR23, 2 * VAR7, VAR2->VAR26, VAR2->VAR30 );

FUN11( &VAR12, &VAR14, VAR35 + VAR2->VAR26,                VAR7 - VAR2->VAR26 );
FUN11( &VAR13, &VAR15, VAR35 + VAR2->VAR26 + VAR7, VAR7 - VAR2->VAR26 );


VAR11 = VAR14 - VAR15;
if( VAR11 >= 0 ) {
VAR13         = FUN4( VAR13, VAR11 );
VAR20 = -VAR14;
} else {
VAR12         = FUN4( VAR12, -VAR11 );
VAR20 = -VAR15;
}
VAR17 = FUN12( VAR12, VAR13 );


VAR11 = VAR20 - VAR21;
if( VAR11 >= 0 ) {
if( FUN4( VAR17, VAR11 ) < VAR18 ) {
VAR10 = VAR37;
} else {
VAR10 = VAR38;
}
} else {
if( -VAR11 < 32 ) {
if( VAR17 < FUN4( VAR18, -VAR11 ) ) {
VAR10 = VAR37;
} else {
VAR10 = VAR38;
}
} else {
VAR10 = VAR38;
}
}


if( VAR10 == VAR37 ) {

VAR18   = VAR17;
VAR21 = VAR20;
VAR2->VAR27.VAR28 = (VAR39)VAR6;
}
}
}

if( VAR2->VAR27.VAR28 == 4 ) {

FUN6( VAR3, VAR8, VAR2->VAR26 );
}

FUN5( VAR2->VAR27.VAR28 == 4 || ( VAR2->VAR31 && !VAR2->VAR32 && VAR2->VAR29 == VAR33 ) );
VAR40;
}