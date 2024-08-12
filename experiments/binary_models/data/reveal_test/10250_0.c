static krb5_error_code asn1_encode_sequence_of_keys ( krb5_key_data * key_data , krb5_int16 n_key_data , krb5_int32 mkvno , krb5_data * * code ) {
 krb5_error_code err ;
 ldap_seqof_key_data val ;
 err = kldap_ensure_initialized ( ) ;
 if ( err ) return err ;
 val . key_data = key_data ;
 val . n_key_data = n_key_data ;
 val . mkvno = mkvno ;
 val . kvno = key_data [ 0 ] . key_data_kvno ;
 return accessor . asn1_ldap_encode_sequence_of_keys ( & val , code ) ;
 }