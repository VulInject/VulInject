static int
dodelete( LDAP *ld, char *dn, LDAPControl **serverctrls )
{
int         rc;

if ( ldaptool_verbose ) {
printf( gettext("%sdeleting entry %s\n"), ldaptool_not ? "!" : "", dn );
}
if ( ldaptool_not ) {
rc = LDAP_SUCCESS;
} else if (( rc = ldaptool_delete_ext_s( ld, dn, serverctrls, NULL,
"ldap_delete" )) == LDAP_SUCCESS && ldaptool_verbose ) {
printf( gettext("entry removed\n") );
}

return( rc );
}