opus_int silk_InitEncoder(                              
void                            *encState,          
int                              arch,              
silk_EncControlStruct           *encStatus          
)
{
silk_encoder *psEnc;
opus_int n, ret = SILK_NO_ERROR;

psEnc = (silk_encoder *)encState;


silk_memset( psEnc, 0, sizeof( silk_encoder ) );
for( n = 0; n < ENCODER_NUM_CHANNELS; n++ ) {
if( ret += silk_init_encoder( &psEnc->state_Fxx[ n ], arch ) ) {
silk_assert( 0 );
}
}

psEnc->nChannelsAPI = 1;
psEnc->nChannelsInternal = 1;


if( ret += silk_QueryEncoder( encState, encStatus ) ) {
silk_assert( 0 );
}

return ret;
}