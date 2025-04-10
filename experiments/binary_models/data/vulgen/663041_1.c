dvi_locate_font ( , ) { int cur_id = - 1 ; const char * name = tfm_name ; int subfont_id = - 1 , font_id ; fontmap_rec * mrec ; if ( dpx_conf . verbose_level > 0 ) { MESG ( 0 ) ; } need_more_fonts ( 1 ) ; cur_id = num_loaded_fonts ++ ; mrec = pdf_lookup_fontmap_record ( tfm_name ) ; if ( mrec && mrec -> charmap . sfd_name && mrec -> charmap . subfont_id ) { subfont_id = sfd_load_record ( mrec -> charmap . sfd_name , mrec -> charmap . subfont_id ) ; } memset ( & loaded_fonts [ cur_id ] , 0 , sizeof ( loaded_font ) ) ; loaded_fonts [ cur_id ] . tfm_id = tfm_open ( tfm_name , 1 ) ; loaded_fonts [ cur_id ] . subfont_id = subfont_id ; loaded_fonts [ cur_id ] . size = ptsize ; loaded_fonts [ cur_id ] . source = VF ; if ( ! mrec ) { font_id = vf_locate_font ( tfm_name , ptsize ) ; if ( font_id >= 0 ) { loaded_fonts [ cur_id ] . type = VIRTUAL ; loaded_fonts [ cur_id ] . font_id = font_id ; if ( dpx_conf . verbose_level > 0 ) { MESG ( "(VF)>" ) ; } return cur_id ; } } if ( subfont_id >= 0 && mrec -> map_name ) { fontmap_rec * mrec1 = pdf_lookup_fontmap_record ( mrec -> map_name ) ; if ( mrec1 && ! mrec1 -> enc_name ) { font_id = vf_locate_font ( mrec1 -> font_name , ptsize ) ; if ( font_id < 0 ) { WARN ( "Could not locate Omega Virtual Font \"%s\" for \"%s\"." , mrec1 -> font_name , tfm_name ) ; } else { loaded_fonts [ cur_id ] . type = VIRTUAL ; loaded_fonts [ cur_id ] . font_id = font_id ; if ( dpx_conf . verbose_level > 0 ) { MESG ( "(OVF)>" ) ; } return cur_id ; } } } if ( mrec && mrec -> map_name ) { name = mrec -> map_name ; } else { name = tfm_name ; } font_id = pdf_dev_locate_font ( name , ptsize ) ; if ( font_id < 0 ) { WARN ( "Could not locate a virtual/physical font for TFM \"%s\"." , tfm_name ) ; if ( mrec && mrec -> map_name ) { fontmap_rec * mrec1 = pdf_lookup_fontmap_record ( mrec -> map_name ) ; WARN ( ">>This font is mapped to an intermediate 16-bit font \"%s\" with SFD charmap=<%s,%s>," , mrec -> map_name , mrec -> charmap . sfd_name , mrec -> charmap . subfont_id ) ; if ( ! mrec1 ) { WARN ( ">>but I couldn't find font mapping for \"%s\"." , mrec -> map_name ) ; } else { WARN ( ">>and then mapped to a physical font \"%s\" by fontmap." , mrec1 -> font_name ) ; WARN ( ">>Please check if kpathsea library can find this font: %s" , mrec1 -> font_name ) ; } } if ( mrec && ! mrec -> map_name ) { char * finaldot = strrchr ( mrec -> font_name , '.' ) ; if ( finaldot && strcasecmp ( finaldot , ".pfa" ) == 0 ) { WARN ( "This font is mapped to a physical font \"%s\"." , mrec -> font_name ) ; ERROR ( "Sorry, pfa format not supported; please convert the font to pfb, e.g., with t1binary." ) ; } else { WARN ( ">>This font is mapped to a physical font \"%s\"." , mrec -> font_name ) ; WARN ( ">>Please check if kpathsea library can find this font: %s" , mrec -> font_name ) ; } } else { WARN ( ">>There are no valid font mapping entry for this font." ) ; WARN ( ">>Font file name \"%s\" was assumed but failed to locate that font." , tfm_name ) ; } ERROR ( "Cannot proceed without .vf or \"physical\" font for PDF output..." ) ; } memset ( loaded_fonts [ cur_id ] . padbytes , 0 , 4 ) ; if ( mrec ) { if ( mrec -> opt . mapc >= 0 ) { loaded_fonts [ cur_id ] . padbytes [ 2 ] = ( mrec -> opt . mapc >> 8 ) & 0xff ; } if ( mrec -> enc_name && ! strcmp ( mrec -> enc_name , "unicode" ) ) { loaded_fonts [ cur_id ] . is_unicode = 1 ; if ( mrec -> opt . mapc >= 0 ) { loaded_fonts [ cur_id ] . padbytes [ 0 ] = ( mrec -> opt . mapc >> 24 ) & 0xff ; loaded_fonts [ cur_id ] . padbytes [ 1 ] = ( mrec -> opt . mapc >> 16 ) & 0xff ; } } } loaded_fonts [ cur_id ] . minbytes = pdf_dev_font_minbytes ( font_id ) ; loaded_fonts [ cur_id ] . type = PHYSICAL ; loaded_fonts [ cur_id ] . font_id = font_id ; if ( loaded_fonts [ cur_id ] . minbytes > 4 ) { WARN ( "Input encoding requries more than 4 bytes per char... (unsupported)" ) ; loaded_fonts [ cur_id ] . minbytes = 4 ; } if ( dpx_conf . verbose_level > 0 ) { MESG ( ">" ) ; } return cur_id ; } 