opus_int silk_InitDecoder(                              
void                            *decState           
)
{
opus_int n, ret = SILK_NO_ERROR;
silk_decoder_state *channel_state = ((silk_decoder *)decState)->channel_state;

for( n = 0; n < DECODER_NUM_CHANNELS; n++ ) {
ret  = silk_init_decoder( &channel_state[ n ] );
}
silk_memset(&((silk_decoder *)decState)->sStereo, 0, sizeof(((silk_decoder *)decState)->sStereo));

((silk_decoder *)decState)->prev_decode_only_middle = 0;

return ret;
}