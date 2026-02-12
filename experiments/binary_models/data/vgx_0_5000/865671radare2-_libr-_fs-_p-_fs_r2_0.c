static int __cfg_cat(RFSRoot *root, RFSFile *file, const char *path) {
r_return_val_if_fail (root && file, -1);
if (strlen (path) < 6) {
return -1;
}
char *a = strdup (path + 5);
r_str_replace_char (a, '/', '.');
char *res = root->cob.cmdstrf (root->cob.core, "e %s", a);
file->ptr = NULL;
file->data = (ut8*)res;
file->p = root->p;
file->size = strlen (res);
return file->size;
}