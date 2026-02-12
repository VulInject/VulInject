

zip_t *
_zip_new(zip_error_t *error) {
zip_t *za;

za = (zip_t *)malloc(sizeof(struct zip));
if (!za) {
zip_error_set(error, ZIP_ER_MEMORY, 0);
return NULL;
}

if ((za->names = _zip_hash_new(error)) == NULL) {
free(za);
return NULL;
}

za->src = NULL;
za->open_flags = 0;
zip_error_init(&za->error);
za->flags = za->ch_flags = 0;
za->default_password = NULL;
za->comment_orig = za->comment_changes = NULL;
za->comment_changed = 0;
za->nentry = za->nentry_alloc = 0;
za->entry = NULL;
za->nopen_source = za->nopen_source_alloc = 0;
za->open_source = NULL;
za->progress = NULL;

return za;
}