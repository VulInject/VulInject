static int decode_i2_frame ( FourXContext * f , AVFrame * frame , const uint8_t * buf , int length ) {
 int x , y , x2 , y2 ;
 const int width = f -> avctx -> width ;
 const int height = f -> avctx -> height ;
 const int mbs = ( FFALIGN ( width , 16 ) >> 4 ) * ( FFALIGN ( height , 16 ) >> 4 ) ;
 uint16_t * dst = ( uint16_t * ) frame -> data [ 0 ] ;
 const int stride = frame -> linesize [ 0 ] >> 1 ;
 GetByteContext g3 ;
 if ( length < mbs * 8 ) {
 av_log ( f -> avctx , AV_LOG_ERROR , "packet size too small\n" ) ;
 return AVERROR_INVALIDDATA ;
 }
 bytestream2_init ( & g3 , buf , length ) ;
 for ( y = 0 ;
 y < height ;
 y += 16 ) {
 for ( x = 0 ;
 x < width ;
 x += 16 ) {
 unsigned int color [ 4 ] = {
 0 }
 , bits ;
 color [ 0 ] = bytestream2_get_le16u ( & g3 ) ;
 color [ 1 ] = bytestream2_get_le16u ( & g3 ) ;
 if ( color [ 0 ] & 0x8000 ) av_log ( NULL , AV_LOG_ERROR , "unk bit 1\n" ) ;
 if ( color [ 1 ] & 0x8000 ) av_log ( NULL , AV_LOG_ERROR , "unk bit 2\n" ) ;
 color [ 2 ] = mix ( color [ 0 ] , color [ 1 ] ) ;
 color [ 3 ] = mix ( color [ 1 ] , color [ 0 ] ) ;
 bits = bytestream2_get_le32u ( & g3 ) ;
 for ( y2 = 0 ;
 y2 < 16 ;
 y2 ++ ) {
 for ( x2 = 0 ;
 x2 < 16 ;
 x2 ++ ) {
 int index = 2 * ( x2 >> 2 ) + 8 * ( y2 >> 2 ) ;
 dst [ y2 * stride + x2 ] = color [ ( bits >> index ) & 3 ] ;
 }
 }
 dst += 16 ;
 }
 dst += 16 * stride - x ;
 }
 return 0 ;
 }