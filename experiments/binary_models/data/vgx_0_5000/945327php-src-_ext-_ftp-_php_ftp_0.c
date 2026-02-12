
PHP_FUNCTION(ftp_nb_continue)
{
zval		*z_ftp;
ftpbuf_t	*ftp;
zend_long		ret;

if (zend_parse_parameters(ZEND_NUM_ARGS(), "O", &z_ftp, php_ftp_ce) == FAILURE) {
RETURN_THROWS();
}
GET_FTPBUF(ftp, z_ftp);

if (!ftp->nb) {
php_error_docref(NULL, E_WARNING, "No nbronous transfer to continue");
RETURN_LONG(PHP_FTP_FAILED);
}

if (ftp->direction) {
ret=ftp_nb_continue_write(ftp);
} else {
ret=ftp_nb_continue_read(ftp);
}

if (ret != PHP_FTP_MOREDATA && ftp->closestream) {
php_stream_close(ftp->stream);
ftp->stream = NULL;
}

if (ret == PHP_FTP_FAILED) {
php_error_docref(NULL, E_WARNING, "%s", ftp->inbuf);
}

RETURN_LONG(ret);
}