static int
format_mf_symlink(u8 *buf, unsigned int buf_len, const char *link_str)
{
int rc;
unsigned int link_len;
unsigned int ofs;
u8 md5_hash[16];

if (buf_len != CIFS_MF_SYMLINK_FILE_SIZE)
return -EINVAL;

link_len = strlen(link_str);

if (link_len > CIFS_MF_SYMLINK_LINK_MAXLEN)
return -ENAMETOOLONG;

rc = symlink_hash(link_len, link_str, md5_hash);
if (rc) {
cifs_dbg(FYI, "%s: MD5 hash failure: %d\n", __func__, rc);
return rc;
}

snprintf(buf, buf_len,
CIFS_MF_SYMLINK_LEN_FORMAT CIFS_MF_SYMLINK_MD5_FORMAT,
link_len,
CIFS_MF_SYMLINK_MD5_ARGS(md5_hash));

ofs = CIFS_MF_SYMLINK_LINK_OFFSET;
memcpy(buf + ofs, link_str, link_len);

ofs += link_len;
if (ofs < CIFS_MF_SYMLINK_FILE_SIZE) {
buf[ofs] = '\n';
ofs++;
}

while (ofs < CIFS_MF_SYMLINK_FILE_SIZE) {
buf[ofs] = ' ';
ofs++;
}

return 0;
}