static VAR1 *FUN1( VAR2 *VAR3, double *VAR4, unsigned int VAR5 ){
unsigned int VAR6;

VAR1 *VAR7= FUN2( VAR3, VAR1 );

if( ! VAR7 )
return( NULL );

VAR7-> VAR4= FUN3( VAR3, 2 * VAR5, double );

if( ! VAR7-> VAR4 )
return( NULL );

VAR7-> VAR8= VAR7-> VAR4 + VAR5;
VAR7-> VAR5= VAR5;
VAR7-> VAR9= 0.0;

for( VAR6= 0; VAR6 < VAR5; ++VAR6 ){
VAR7-> VAR4[ VAR6 ]= VAR4[ VAR6 ];
VAR7-> VAR9+= VAR4[ VAR6 ];
}
VAR7-> VAR9/= VAR5;
VAR7-> VAR10= 0.0;

for( VAR6= 0; VAR6 < VAR5; ++VAR6 ){
VAR7-> VAR8[ VAR6 ]= VAR4[ VAR6 ] - VAR7-> VAR9;
VAR7-> VAR10+= VAR7-> VAR8[ VAR6 ] * VAR7-> VAR8[ VAR6 ];
}
VAR7-> VAR11= ( 1.0 / (double) VAR5 ) + ( ( VAR7-> VAR9 * VAR7-> VAR9 ) / VAR7-> VAR10 );

return( VAR7 );
}

VAR2 **VAR12= (VAR2 **) VAR13; 			                                                    \
VAR1 *VAR7= (VAR1 *) VAR14;                                                                       \
VAR15 ## VAR16 *VAR17= FUN2( VAR18, VAR15 ## VAR16 );                                     \
\
if( ! VAR17 )                                                                                       \
return NULL;                                                                                    \
\
VAR17-> VAR19= FUN4( NULL, VAR12, NULL );                                                     \
VAR17-> VAR20= FUN3( VAR18, VAR7-> VAR5, VAR16* );                                                   \
VAR17-> VAR21= FUN3( VAR18, VAR7-> VAR5, VAR22 );                                                 \
\
if( ! VAR17-> VAR20 || ! VAR17-> VAR19 || ! VAR17-> VAR21 ){                                              \
VAR23 ## FUN5( VAR17, NULL, NULL );                                                        \
return NULL;                                                                                    \
}                                                                                                 \
return (void *) VAR17;                                                                              \
}