static int dwt_plane ( AVCodecContext * avctx , void * arg ) {
 TransformArgs * transform_dat = arg ;
 VC2EncContext * s = transform_dat -> ctx ;
 const void * frame_data = transform_dat -> idata ;
 const ptrdiff_t linesize = transform_dat -> istride ;
 const int field = transform_dat -> field ;
 const Plane * p = transform_dat -> plane ;
 VC2TransformContext * t = & transform_dat -> t ;
 dwtcoef * buf = p -> coef_buf ;
 const int idx = s -> wavelet_idx ;
 const int skip = 1 + s -> interlaced ;
 int x , y , level , offset ;
 ptrdiff_t pix_stride = linesize >> ( s -> bpp - 1 ) ;
 if ( field == 1 ) {
 offset = 0 ;
 pix_stride <<= 1 ;
 }
 else if ( field == 2 ) {
 offset = pix_stride ;
 pix_stride <<= 1 ;
 }
 else {
 offset = 0 ;
 }
 if ( s -> bpp == 1 ) {
 const uint8_t * pix = ( const uint8_t * ) frame_data + offset ;
 for ( y = 0 ;
 y < p -> height * skip ;
 y += skip ) {
 for ( x = 0 ;
 x < p -> width ;
 x ++ ) {
 buf [ x ] = pix [ x ] - s -> diff_offset ;
 }
 buf += p -> coef_stride ;
 pix += pix_stride ;
 }
 }
 else {
 const uint16_t * pix = ( const uint16_t * ) frame_data + offset ;
 for ( y = 0 ;
 y < p -> height * skip ;
 y += skip ) {
 for ( x = 0 ;
 x < p -> width ;
 x ++ ) {
 buf [ x ] = pix [ x ] - s -> diff_offset ;
 }
 buf += p -> coef_stride ;
 pix += pix_stride ;
 }
 }
 memset ( buf , 0 , p -> coef_stride * ( p -> dwt_height - p -> height ) * sizeof ( dwtcoef ) ) ;
 for ( level = s -> wavelet_depth - 1 ;
 level >= 0 ;
 level -- ) {
 const SubBand * b = & p -> band [ level ] [ 0 ] ;
 t -> vc2_subband_dwt [ idx ] ( t , p -> coef_buf , p -> coef_stride , b -> width , b -> height ) ;
 }
 return 0 ;
 }