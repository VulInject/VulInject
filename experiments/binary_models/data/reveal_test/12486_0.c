static void CompositeHCL ( const MagickRealType red , const MagickRealType green , const MagickRealType blue , MagickRealType * hue , MagickRealType * chroma , MagickRealType * luma ) {
 MagickRealType b , c , g , h , max , r ;
 assert ( hue != ( MagickRealType * ) NULL ) ;
 assert ( chroma != ( MagickRealType * ) NULL ) ;
 assert ( luma != ( MagickRealType * ) NULL ) ;
 r = red ;
 g = green ;
 b = blue ;
 max = MagickMax ( r , MagickMax ( g , b ) ) ;
 c = max - ( MagickRealType ) MagickMin ( r , MagickMin ( g , b ) ) ;
 h = 0.0 ;
 if ( c == 0 ) h = 0.0 ;
 else if ( red == max ) h = fmod ( ( g - b ) / c + 6.0 , 6.0 ) ;
 else if ( green == max ) h = ( ( b - r ) / c ) + 2.0 ;
 else if ( blue == max ) h = ( ( r - g ) / c ) + 4.0 ;
 * hue = ( h / 6.0 ) ;
 * chroma = QuantumScale * c ;
 * luma = QuantumScale * ( 0.298839 * r + 0.586811 * g + 0.114350 * b ) ;
 }