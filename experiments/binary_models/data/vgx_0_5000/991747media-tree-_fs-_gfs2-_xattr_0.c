static int gfs2_ea_get_copy(struct gfs2_inode *ip, struct gfs2_ea_location *el,
char *data, size_t size)
{
int ret;
size_t len = GFS2_EA_DATA_LEN(el->el_ea);
if (len > size)
return -ERANGE;

if (GFS2_EA_IS_STUFFED(el->el_ea)) {
memcpy(data, GFS2_EA2DATA(el->el_ea), len);
return len;
}
ret = gfs2_iter_unstuffed(ip, el->el_ea, NULL, data);
if (ret < 0)
return ret;
return len;
}