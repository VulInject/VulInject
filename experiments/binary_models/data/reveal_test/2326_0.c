static int dpcm_decode_frame ( AVCodecContext * avctx , void * data , int * got_frame_ptr , AVPacket * avpkt ) {
 int buf_size = avpkt -> size ;
 DPCMContext * s = avctx -> priv_data ;
 AVFrame * frame = data ;
 int out = 0 , ret ;
 int predictor [ 2 ] ;
 int ch = 0 ;
 int stereo = avctx -> channels - 1 ;
 int16_t * output_samples , * samples_end ;
 GetByteContext gb ;
 if ( stereo && ( buf_size & 1 ) ) buf_size -- ;
 bytestream2_init ( & gb , avpkt -> data , buf_size ) ;
 switch ( avctx -> codec -> id ) {
 case AV_CODEC_ID_ROQ_DPCM : out = buf_size - 8 ;
 break ;
 case AV_CODEC_ID_INTERPLAY_DPCM : out = buf_size - 6 - avctx -> channels ;
 break ;
 case AV_CODEC_ID_XAN_DPCM : out = buf_size - 2 * avctx -> channels ;
 break ;
 case AV_CODEC_ID_SOL_DPCM : if ( avctx -> codec_tag != 3 ) out = buf_size * 2 ;
 else out = buf_size ;
 break ;
 }
 if ( out <= 0 ) {
 av_log ( avctx , AV_LOG_ERROR , "packet is too small\n" ) ;
 return AVERROR ( EINVAL ) ;
 }
 frame -> nb_samples = out / avctx -> channels ;
 if ( ( ret = ff_get_buffer ( avctx , frame , 0 ) ) < 0 ) {
 av_log ( avctx , AV_LOG_ERROR , "get_buffer() failed\n" ) ;
 return ret ;
 }
 output_samples = ( int16_t * ) frame -> data [ 0 ] ;
 samples_end = output_samples + out ;
 switch ( avctx -> codec -> id ) {
 case AV_CODEC_ID_ROQ_DPCM : bytestream2_skipu ( & gb , 6 ) ;
 if ( stereo ) {
 predictor [ 1 ] = sign_extend ( bytestream2_get_byteu ( & gb ) << 8 , 16 ) ;
 predictor [ 0 ] = sign_extend ( bytestream2_get_byteu ( & gb ) << 8 , 16 ) ;
 }
 else {
 predictor [ 0 ] = sign_extend ( bytestream2_get_le16u ( & gb ) , 16 ) ;
 }
 while ( output_samples < samples_end ) {
 predictor [ ch ] += s -> roq_square_array [ bytestream2_get_byteu ( & gb ) ] ;
 predictor [ ch ] = av_clip_int16 ( predictor [ ch ] ) ;
 * output_samples ++ = predictor [ ch ] ;
 ch ^= stereo ;
 }
 break ;
 case AV_CODEC_ID_INTERPLAY_DPCM : bytestream2_skipu ( & gb , 6 ) ;
 for ( ch = 0 ;
 ch < avctx -> channels ;
 ch ++ ) {
 predictor [ ch ] = sign_extend ( bytestream2_get_le16u ( & gb ) , 16 ) ;
 * output_samples ++ = predictor [ ch ] ;
 }
 ch = 0 ;
 while ( output_samples < samples_end ) {
 predictor [ ch ] += interplay_delta_table [ bytestream2_get_byteu ( & gb ) ] ;
 predictor [ ch ] = av_clip_int16 ( predictor [ ch ] ) ;
 * output_samples ++ = predictor [ ch ] ;
 ch ^= stereo ;
 }
 break ;
 case AV_CODEC_ID_XAN_DPCM : {
 int shift [ 2 ] = {
 4 , 4 }
 ;
 for ( ch = 0 ;
 ch < avctx -> channels ;
 ch ++ ) predictor [ ch ] = sign_extend ( bytestream2_get_le16u ( & gb ) , 16 ) ;
 ch = 0 ;
 while ( output_samples < samples_end ) {
 int diff = bytestream2_get_byteu ( & gb ) ;
 int n = diff & 3 ;
 if ( n == 3 ) shift [ ch ] ++ ;
 else shift [ ch ] -= ( 2 * n ) ;
 diff = sign_extend ( ( diff & ~ 3 ) << 8 , 16 ) ;
 if ( shift [ ch ] < 0 ) shift [ ch ] = 0 ;
 diff >>= shift [ ch ] ;
 predictor [ ch ] += diff ;
 predictor [ ch ] = av_clip_int16 ( predictor [ ch ] ) ;
 * output_samples ++ = predictor [ ch ] ;
 ch ^= stereo ;
 }
 break ;
 }
 case AV_CODEC_ID_SOL_DPCM : if ( avctx -> codec_tag != 3 ) {
 uint8_t * output_samples_u8 = frame -> data [ 0 ] , * samples_end_u8 = output_samples_u8 + out ;
 while ( output_samples_u8 < samples_end_u8 ) {
 int n = bytestream2_get_byteu ( & gb ) ;
 s -> sample [ 0 ] += s -> sol_table [ n >> 4 ] ;
 s -> sample [ 0 ] = av_clip_uint8 ( s -> sample [ 0 ] ) ;
 * output_samples_u8 ++ = s -> sample [ 0 ] ;
 s -> sample [ stereo ] += s -> sol_table [ n & 0x0F ] ;
 s -> sample [ stereo ] = av_clip_uint8 ( s -> sample [ stereo ] ) ;
 * output_samples_u8 ++ = s -> sample [ stereo ] ;
 }
 }
 else {
 while ( output_samples < samples_end ) {
 int n = bytestream2_get_byteu ( & gb ) ;
 if ( n & 0x80 ) s -> sample [ ch ] -= sol_table_16 [ n & 0x7F ] ;
 else s -> sample [ ch ] += sol_table_16 [ n & 0x7F ] ;
 s -> sample [ ch ] = av_clip_int16 ( s -> sample [ ch ] ) ;
 * output_samples ++ = s -> sample [ ch ] ;
 ch ^= stereo ;
 }
 }
 break ;
 }
 * got_frame_ptr = 1 ;
 return avpkt -> size ;
 }