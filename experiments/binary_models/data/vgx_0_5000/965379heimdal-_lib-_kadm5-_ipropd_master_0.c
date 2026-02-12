static off_t
get_right(krb5_context context, int log_fd, krb5_storage *sp,
int lastver, slave *s, off_t left, uint32_t *verp)
{
int ret = 0;
int i = 0;
uint32_t ver = s->version;
off_t right = krb5_storage_seek(sp, left, SEEK_SET);

if (right <= 0) {
flock(log_fd, LOCK_UN);
return -1;
}


for (; ret == 0 && i < SEND_DIFFS_MAX_RECORDS && ver < lastver; ++i) {
uint32_t logver;

ret = kadm5_log_next(context, sp, &logver, NULL, NULL, NULL);
if (logver != ++ver)
ret = KADM5_LOG_CORRUPT;
}

if (ret == 0)
right = krb5_storage_seek(sp, 0, SEEK_CUR);
else
right = -1;
if (right <= 0) {
flock(log_fd, LOCK_UN);
return -1;
}
*verp = ver;
return right;
}