static int mp_decode_frame ( AVCodecContext * avctx , void * data , int * got_frame , AVPacket * avpkt ) {
 const uint8_t * buf = avpkt -> data ;
 int buf_size = avpkt -> size ;
 MotionPixelsContext * mp = avctx -> priv_data ;
 GetBitContext gb ;
 int i , count1 , count2 , sz , ret ;
 if ( ( ret = ff_reget_buffer ( avctx , & mp -> frame ) ) < 0 ) {
 av_log ( avctx , AV_LOG_ERROR , "reget_buffer() failed\n" ) ;
 return ret ;
 }
 av_fast_malloc ( & mp -> bswapbuf , & mp -> bswapbuf_size , buf_size + FF_INPUT_BUFFER_PADDING_SIZE ) ;
 if ( ! mp -> bswapbuf ) return AVERROR ( ENOMEM ) ;
 mp -> dsp . bswap_buf ( ( uint32_t * ) mp -> bswapbuf , ( const uint32_t * ) buf , buf_size / 4 ) ;
 if ( buf_size & 3 ) memcpy ( mp -> bswapbuf + ( buf_size & ~ 3 ) , buf + ( buf_size & ~ 3 ) , buf_size & 3 ) ;
 memset ( mp -> bswapbuf + buf_size , 0 , FF_INPUT_BUFFER_PADDING_SIZE ) ;
 init_get_bits ( & gb , mp -> bswapbuf , buf_size * 8 ) ;
 memset ( mp -> changes_map , 0 , avctx -> width * avctx -> height ) ;
 for ( i = ! ( avctx -> extradata [ 1 ] & 2 ) ;
 i < 2 ;
 ++ i ) {
 count1 = get_bits ( & gb , 12 ) ;
 count2 = get_bits ( & gb , 12 ) ;
 mp_read_changes_map ( mp , & gb , count1 , 8 , i ) ;
 mp_read_changes_map ( mp , & gb , count2 , 4 , i ) ;
 }
 mp -> codes_count = get_bits ( & gb , 4 ) ;
 if ( mp -> codes_count == 0 ) goto end ;
 if ( mp -> changes_map [ 0 ] == 0 ) {
 * ( uint16_t * ) mp -> frame . data [ 0 ] = get_bits ( & gb , 15 ) ;
 mp -> changes_map [ 0 ] = 1 ;
 }
 mp_read_codes_table ( mp , & gb ) ;
 sz = get_bits ( & gb , 18 ) ;
 if ( avctx -> extradata [ 0 ] != 5 ) sz += get_bits ( & gb , 18 ) ;
 if ( sz == 0 ) goto end ;
 if ( mp -> max_codes_bits <= 0 ) goto end ;
 if ( init_vlc ( & mp -> vlc , mp -> max_codes_bits , mp -> codes_count , & mp -> codes [ 0 ] . size , sizeof ( HuffCode ) , 1 , & mp -> codes [ 0 ] . code , sizeof ( HuffCode ) , 4 , 0 ) ) goto end ;
 mp_decode_frame_helper ( mp , & gb ) ;
 ff_free_vlc ( & mp -> vlc ) ;
 end : if ( ( ret = av_frame_ref ( data , & mp -> frame ) ) < 0 ) return ret ;
 * got_frame = 1 ;
 return buf_size ;
 }