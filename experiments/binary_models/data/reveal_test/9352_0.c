void proto_reg_handoff_dcerpc_spoolss ( void ) {
 dcerpc_init_uuid ( proto_dcerpc_spoolss , ett_dcerpc_spoolss , & uuid_dcerpc_spoolss , ver_dcerpc_spoolss , dcerpc_spoolss_dissectors , hf_opnum ) ;
 }