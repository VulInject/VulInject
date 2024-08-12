static void encode_sample_fmt ( VC2EncContext * s ) {
 put_bits ( & s -> pb , 1 , ! s -> strict_compliance ) ;
 if ( ! s -> strict_compliance ) {
 int idx ;
 if ( s -> chroma_x_shift == 1 && s -> chroma_y_shift == 0 ) idx = 1 ;
 else if ( s -> chroma_x_shift == 1 && s -> chroma_y_shift == 1 ) idx = 2 ;
 else idx = 0 ;
 put_vc2_ue_uint ( & s -> pb , idx ) ;
 }
 }