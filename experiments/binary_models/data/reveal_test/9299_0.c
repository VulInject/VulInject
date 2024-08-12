static int SpoolssWritePrinter_r ( tvbuff_t * tvb , int offset , packet_info * pinfo , proto_tree * tree , dcerpc_info * di , guint8 * drep ) {
 guint32 size ;
 offset = dissect_ndr_uint32 ( tvb , offset , pinfo , tree , di , drep , hf_writeprinter_numwritten , & size ) ;
 col_append_fstr ( pinfo -> cinfo , COL_INFO , ", %d bytes written" , size ) ;
 offset = dissect_doserror ( tvb , offset , pinfo , tree , di , drep , hf_rc , NULL ) ;
 return offset ;
 }