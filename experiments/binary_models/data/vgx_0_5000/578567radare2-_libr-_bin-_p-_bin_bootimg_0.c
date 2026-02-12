static bool load_buffer(RBinFile *bf, void **bin_obj, RBuffer *buf, ut64 loadaddr, Sdb *sdb) {
BootImageObj *bio = R_NEW0 (BootImageObj);
if (R_UNLIKELY (!bio)) {
return false;
}
bio->kv = sdb_new0 ();
if (!bio->kv) {
free (bio);
return false;
}
bio->buf = r_buf_ref (buf);
if (!bootimg_header_load (bio, bio->kv)) {
free (bio);
return false;
}
sdb_ns_set (sdb, "info", bio->kv);
*bin_obj = bio;
return true;
}