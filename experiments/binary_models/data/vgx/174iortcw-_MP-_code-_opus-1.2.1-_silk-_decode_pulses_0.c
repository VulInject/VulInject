void FUN1(
VAR1                      *VAR2,                    
opus_int16                  VAR3[],                       
const opus_int              VAR4,                     
const opus_int              VAR5,                
const opus_int              VAR6                    
)
{
opus_int   VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
opus_int   VAR14[ VAR15 ], VAR16[ VAR15 ];
VAR17 *VAR18;
const VAR19 *VAR20;




VAR13 = FUN2( VAR2, VAR21[ VAR4 >> 1 ], 8 );


FUN3( 1 << VAR22 == VAR23 );
VAR10 = FUN4( VAR6, VAR22 );
if( VAR10 * VAR23 < VAR6 ) {
FUN3( VAR6 == 12 * 10 ); 
VAR10++;
}




VAR20 = VAR24[ VAR13 ];
for( VAR7 = 0; VAR7 < VAR10; VAR7++ ) {
VAR16[ VAR7 ] = 0;
VAR14[ VAR7 ] = FUN2( VAR2, VAR20, 8 );


while( VAR14[ VAR7 ] == VAR25 + 1 ) {
VAR16[ VAR7 ]++;

VAR14[ VAR7 ] = FUN2( VAR2,
VAR24[ VAR26 - 1] + ( VAR16[ VAR7 ] == 10 ), 8 );
}
}




for( VAR7 = 0; VAR7 < VAR10; VAR7++ ) {
if( VAR14[ VAR7 ] > 0 ) {
FUN5( &VAR3[ FUN6( VAR7, VAR23 ) ], VAR2, VAR14[ VAR7 ] );
} else {
FUN7( &VAR3[ FUN6( VAR7, VAR23 ) ], 0, VAR23 * sizeof( VAR3[0] ) );
}
}




for( VAR7 = 0; VAR7 < VAR10; VAR7++ ) {
if( VAR16[ VAR7 ] > 0 ) {
VAR12 = VAR16[ VAR7 ];
VAR18 = &VAR3[ FUN6( VAR7, VAR23 ) ];
for( VAR9 = 0; VAR9 < VAR23; VAR9++ ) {
VAR11 = VAR18[ VAR9 ];
for( VAR8 = 0; VAR8 < VAR12; VAR8++ ) {
VAR11 = FUN8( VAR11, 1 );
VAR11 += FUN2( VAR2, VAR27, 8 );
}
VAR18[ VAR9 ] = VAR11;
}

VAR14[ VAR7 ] |= VAR12 << 5;
}
}




FUN9( VAR2, VAR3, VAR6, VAR4, VAR5, VAR14 );
}