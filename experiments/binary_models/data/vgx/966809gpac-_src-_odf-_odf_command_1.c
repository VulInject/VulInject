GF_Err gf_odf_parse_command ( GF_BitStream * bs , GF_ODCom * * com , u32 * com_size ) { u32 val , size , sizeHeader ; u8 tag ; GF_Err err ; GF_ODCom * newCom ; if ( ! bs ) { return GF_BAD_PARAM ; } * com_size = 0 ; tag = gf_bs_read_int ( bs , 8 ) ; sizeHeader = 1 ; size = 0 ; { val = gf_bs_read_int ( bs , 8 ) ; sizeHeader ++ ; size <<= 7 ; size |= val & 0x7F ; } val & 0x80 ; * com_size = size ; newCom = gf_odf_create_command ( tag ) ; if ( ! newCom ) { * com = NULL ; return GF_OUT_OF_MEM ; } newCom -> tag = tag ; err = gf_odf_read_command ( bs , newCom , * com_size ) ; * com_size += sizeHeader - gf_odf_size_field_size ( * com_size ) ; * com = newCom ; if ( err ) { gf_odf_delete_command ( newCom , NULL ) ; * com = NULL ; } return err ; } 