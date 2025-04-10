static int pcmad_attach ( struct comedi_device * dev , struct comedi_devconfig * it ) { const struct pcmad_board_struct * board = dev -> board_ptr ; struct comedi_subdevice * s ; int ret ; ret = comedi_request_region ( dev , it -> options [ 0 ] , 0x04 ) ; if ( ret ) { return ret ; } ret = comedi_alloc_subdevices ( dev , 1 ) ; if ( ret ) { return ret ; } s = & dev -> subdevices [ 0 ] ; s -> type = COMEDI_SUBD_AI ; if ( it -> options [ 1 ] ) { s -> subdev_flags = SDF_READABLE | AREF_DIFF ; s -> n_chan = 8 ; } else { s -> subdev_flags = SDF_READABLE | AREF_GROUND ; s -> n_chan = 16 ; } s -> len_chanlist = 1 ; s -> maxdata = board -> ai_maxdata ; s -> insn_read = pcmad_ai_insn_read ; return 0 ; } static struct comedi_driver pcmad_driver = { . driver_name = "pcmad" . module = THIS_MODULE . attach = pcmad_attach . detach = comedi_legacy_detach . board_name = & pcmad_boards [ 0 ] . name . num_names = ARRAY_SIZE ( pcmad_boards ) . offset = sizeof ( pcmad_boards [ 0 ] ) } ; 