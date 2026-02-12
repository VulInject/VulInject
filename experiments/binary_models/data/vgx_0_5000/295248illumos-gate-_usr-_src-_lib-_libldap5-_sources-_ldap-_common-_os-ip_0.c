int
nsldapi_install_lber_extiofns( LDAP *ld, Sockbuf *sb )
{
struct lber_x_ext_io_fns	lberiofns;

memset( &lberiofns, 0, sizeof(struct lber_x_ext_io_fns) );
if ( NULL != sb ) {
lberiofns.lbextiofn_size = LBER_X_EXTIO_FNS_SIZE;
lberiofns.lbextiofn_read = ld->ld_extread_fn;
lberiofns.lbextiofn_write = ld->ld_extwrite_fn;
lberiofns.lbextiofn_writev = ld->ld_extwritev_fn;
lberiofns.lbextiofn_socket_arg = ld->ld_ext_session_arg;

if ( ber_sockbuf_set_option( sb, LBER_SOCKBUF_OPT_EXT_IO_FNS,
&lberiofns ) != 0 ) {
return( LDAP_LOCAL_ERROR );
}
}

return( LDAP_SUCCESS );
}