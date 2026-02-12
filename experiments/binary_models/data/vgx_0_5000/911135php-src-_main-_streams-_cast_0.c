PHPAPI int _php_stream_make_seekable(php_stream *origstream, php_stream **newstream, int flags STREAMS_DC)
{
if (newstream == NULL) {
return PHP_STREAM_FAILED;
}
*newstream = NULL;

if (((flags & PHP_STREAM_FORCE_CONVERSION) == 0) && origstream->ops->seek != NULL) {
*newstream = origstream;
return PHP_STREAM_UNCHANGED;
}



if (flags & PHP_STREAM_PREFER_STDIO) {
*newstream = php_stream_fopen_tmpfile();
} else {
*newstream = php_stream_temp_new();
}

if (*newstream == NULL) {
return PHP_STREAM_FAILED;
}

(*newstream)->open_filename = origstream->open_filename;
(*newstream)->open_lineno = origstream->open_lineno;

if (php_stream_copy_to_stream_ex(origstream, *newstream, PHP_STREAM_COPY_ALL, NULL) != SUCCESS) {
php_stream_close(*newstream);
*newstream = NULL;
return PHP_STREAM_CRITICAL;
}

php_stream_close(origstream);
php_stream_seek(*newstream, 0, SEEK_SET);

return PHP_STREAM_RELEASED;
}