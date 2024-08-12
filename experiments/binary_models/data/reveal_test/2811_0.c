static void vp3_decode_flush ( AVCodecContext * avctx ) {
 Vp3DecodeContext * s = avctx -> priv_data ;
 if ( s -> golden_frame . f ) ff_thread_release_buffer ( avctx , & s -> golden_frame ) ;
 if ( s -> last_frame . f ) ff_thread_release_buffer ( avctx , & s -> last_frame ) ;
 if ( s -> current_frame . f ) ff_thread_release_buffer ( avctx , & s -> current_frame ) ;
 }