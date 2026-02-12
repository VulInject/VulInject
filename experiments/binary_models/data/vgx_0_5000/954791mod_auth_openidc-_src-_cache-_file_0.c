static apr_status_t oidc_cache_file_read(request_rec *r, const char *path,
apr_file_t *fd, void *buf, const apr_size_t len) {

apr_status_t rc = APR_SUCCESS;
apr_size_t bytes_read = 0;
char s_err[128];


rc = apr_file_read_full(fd, buf, len, &bytes_read);


if (rc != APR_SUCCESS) {
oidc_error(r, "could not read from: %s (%s)", path,
apr_strerror(rc, s_err, sizeof(s_err)));
}


if (bytes_read != len) {
oidc_error(r,
"could not read enough bytes from: \"%s\", bytes_read (%" APR_SIZE_T_FMT ") != len (%" APR_SIZE_T_FMT ")",
path, bytes_read, len);
rc = APR_EGENERAL;
}

return rc;
}